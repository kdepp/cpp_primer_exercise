
#include "imaginary.h"

Imaginary &Imaginary::operator= (const Imaginary &src) {
  rPart = src.real();
  iPart = src.imagine();
  return *this;
}

Imaginary operator+ (const Imaginary &lhs, const Imaginary &rhs) {
  double r = lhs.real() + rhs.real();
  double i = lhs.imagine() + rhs.imagine();
  Imaginary ret(r, i);
  return ret;
}

Imaginary operator- (const Imaginary &lhs, const Imaginary &rhs) {
  double r = lhs.real() - rhs.real();
  double i = lhs.imagine() - rhs.imagine();
  Imaginary ret(r, i);
  return ret;
}

Imaginary operator* (const Imaginary &lhs, const Imaginary &rhs) {
  double lr = lhs.real();
  double li = lhs.imagine();
  double rr = rhs.real();
  double ri = lhs.imagine();

  double r = lr * rr - li * ri;
  double i = li * rr + ri * lr;
  Imaginary ret(r, i);
  return ret;
}

std::ostream &operator<< (std::ostream &os, const Imaginary &num) {
  os << "Imaginary Number: " << num.real() << " + " << num.imagine() << "i";
  return os;
}

std::istream &operator>> (std::istream &is, Imaginary &num) {
  is >> num.rPart >> num.iPart;
  if (!is) {
    num = Imaginary();
  }
  return is;
}
