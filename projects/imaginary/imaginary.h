#ifndef IMAGINARY_H
#define IMAGINARY_H 1

#include <iostream>

class Imaginary {
friend std::istream &operator>> (std::istream &is, Imaginary &num);
public:
  Imaginary() = default;
  Imaginary(double real, double imagine) :
    rPart(real),
    iPart(imagine)
    {}
  Imaginary(const Imaginary &src) :
    rPart(src.rPart),
    iPart(src.iPart)
    {}

  double real() const { return rPart; }
  double imagine() const { return iPart; }

  Imaginary& operator= (const Imaginary &src);

private:
  double rPart = 0;
  double iPart = 0;
};

Imaginary operator+ (const Imaginary &lhs, const Imaginary &rhs);
Imaginary operator- (const Imaginary &lhs, const Imaginary &rhs);
Imaginary operator* (const Imaginary &lhs, const Imaginary &rhs);

std::ostream &operator<< (std::ostream &os, const Imaginary &num);
std::istream &operator>> (std::istream &is, Imaginary &num);

#endif
