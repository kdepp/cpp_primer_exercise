
#include "bigint.h"
#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using std::vector;
using std::istream;
using std::ostream;

typedef BigInt::IntList IntList;

const int int_bits = sizeof(int) * 8;
const unsigned long long overflow_mask = static_cast<unsigned long long>(1) << int_bits;

unsigned int iabs(int a) {
  if (a < 0)  return -1 * a;
  return a;
}

BigInt::BigInt(int num) {
  IntList list{iabs(num)};

  digitGroups = list;
  isNeg = signbit(num);
}

BigInt &BigInt::operator= (const BigInt &num) {
  digitGroups = num.digitGroups;
  isNeg = num.isNeg;
  return *this;
}

short compare(IntList dg1, IntList dg2) {
  auto s1 = dg1.size();
  auto s2 = dg2.size();

  if (s1 > s2)  return 1;
  if (s1 < s2)  return -1;

  for (auto i = s1 - 1; i != 0; --i) {
    if (dg1[i] > dg2[i])  return 1;
    if (dg1[i] < dg2[i])  return -1;
  }

  return 0;
}

IntList add(const IntList &a, const IntList &b) {
  auto b1 = a.begin();
  auto e1 = a.end();
  auto b2 = b.begin();
  auto e2 = b.end();

  if (b1 == e1) {
    IntList c(b);
    return c;
  }

  if (b2 == e2) {
    IntList c(a);
    return c;
  }

  bool over = false;
  unsigned long long m;
  IntList c;

  while (true) {
    m = static_cast<unsigned long long>(*b1++) + *b2++ + over;
    over = m >> int_bits;
    c.push_back(m & ~overflow_mask);
    if (b1 == e1 || b2 == e2) break;
  }

  if (b1 == e1 && b2 == e2 && over) {
    c.push_back(1);
    over = false;
  }

  while (b1 != e1) {
    c.push_back(over ? *b1 + 1 : *b1);
    ++b1;
    over = false;
  }

  while (b2 != e2) {
    c.push_back(over ? *b2 + 1 : *b2);
    ++b2;
    over = false;
  }

  return c;
}

IntList subtract(const IntList &a, const IntList &b) {
  auto b1 = a.begin();
  auto e1 = a.end();
  auto b2 = b.begin();
  auto e2 = b.end();

  if (b2 == e2) {
    IntList c(a);
    return c;
  }

  IntList c;
  bool overflow = false;
  int m;

  while (b2 != e2) {
    m = static_cast<int>(*b1++) - static_cast<int>(*b2++) - static_cast<int>(overflow);
    if (m < 0) {
      overflow = true;
      m += overflow_mask;
    } else {
      overflow = false;
    }
    c.push_back(m);
  }

  while (b1 != e1) {
    c.push_back(!overflow ? *b1 : *b1 == 0 ? overflow_mask - 1 : *b1 - 1);
    ++b1;
    overflow = false;
  }

  auto rb = c.rbegin();
  auto re = c.rend();

  while (rb != re && *rb == 0) {
    c.erase(std::next(rb).base() );
    ++rb;
  }

  return c;
}

BigInt sameSignAdd(bool neg, const IntList &dg1, const IntList &dg2) {
  IntList list = add(dg1, dg2);
  BigInt ret(list, neg);
  return ret;
}

BigInt diffSignAdd(bool neg1, const IntList &dg1, bool neg2, const IntList &dg2) {
  IntList list;
  bool neg;

  if (compare(dg1, dg2) == 1) {
    list = subtract(dg1, dg2);
    neg = neg1;
  } else {
    list = subtract(dg2, dg1);
    neg = neg2;
  }

  BigInt ret(list, neg);
  return ret;
}


BigInt operator+ (const BigInt &lhs, const BigInt &rhs) {
  bool neg1 = lhs.isNeg;
  bool neg2 = rhs.isNeg;

  if (neg1 == neg2) {
    return sameSignAdd(neg1, lhs.digitGroups, rhs.digitGroups);
  }

  return diffSignAdd(neg1, lhs.digitGroups, neg2, rhs.digitGroups);
}

BigInt operator- (const BigInt &lhs, const BigInt &rhs) {
  bool neg1 = lhs.isNeg;
  bool neg2 = rhs.isNeg;

  if (neg1 == !neg2) {
    return sameSignAdd(neg1, lhs.digitGroups, rhs.digitGroups);
  }

  return diffSignAdd(neg1, lhs.digitGroups, !neg2, rhs.digitGroups);
}
//
// BigInt &operator* (const BigInt &lhs, const BigInt &rhs) {
//
// }
//
// bool operator== (const BigInt &lhs, const BigInt &rhs) {
//
// }
//
// bool operator< (const BigInt &lhs, const BigInt &rhs) {
//
// }

std::ostream &operator<< (std::ostream &os, const BigInt &num) {
  const IntList list = num.list();
  auto s = list.size();


  if (s == 0) {
    os << 0;
    return os;
  }

  os << (num.isNegative() ? "- " : "+ ") << "( ";

  for (int i = s - 1; i >= 0; --i) {
    os << list[i] << " x 2^" << int_bits << "^" << i;
    if (i != 0) {
      os << " + ";
    } else {
      os << " )";
    }
  }

  return os;
}
