#ifndef BIGINT_H
#define BIGINT_H 1

#include <vector>


class BigInt {

friend BigInt operator+ (const BigInt &lhs, const BigInt &rhs);
friend BigInt operator- (const BigInt &lhs, const BigInt &rhs);

public:
  typedef std::vector<unsigned int> IntList;
  BigInt() = default;
  explicit BigInt(int num);
  explicit BigInt(IntList groups, bool neg = false) :
    digitGroups(groups),
    isNeg(neg)
    {}
  BigInt(const BigInt &num) :
    digitGroups(num.digitGroups),
    isNeg(num.isNeg)
    {}

  BigInt &operator= (const BigInt &num);
  bool isNegative() const { return isNeg; }
  const IntList &list() const { return digitGroups; }

private:
  bool isNeg = false;
  IntList digitGroups;
};

std::ostream &operator<< (std::ostream &os, const BigInt &num);
// std::istream &operator>> (std::istream &is, BigInt &num);
BigInt operator+ (const BigInt &lhs, const BigInt &rhs);
BigInt operator- (const BigInt &lhs, const BigInt &rhs);
// BigInt &operator* (const BigInt &lhs, const BigInt &rhs);
// bool operator== (const BigInt &lhs, const BigInt &rhs);
// bool operator< (const BigInt &lhs, const BigInt &rhs);


#endif
