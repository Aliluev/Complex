#include"Function.h"

void Complex::set_complex(double a, double b)
{
  x = a;
  y = b;
}

double Complex::get_celoe_complex()
{
  return x;
}

double Complex::get_mnimoe_complex()
{
  return y;
}

void Complex::set_celoe_complex(double c)
{
  x = c;
}

void Complex::set_mnimoe_complex(double f)
{
  y = f;
}

Complex::Complex()
{
  x = 0;
  y = 0;
}

Complex::Complex(double a, double b)
{
  x = a;
  y = b;
}

Complex::Complex(const Complex& o)
{
 x = o.x;
 y = o.y;
}

Complex Complex::operator+(Complex a)
{
  Complex C;
  C.x = x + a.get_celoe_complex();
  C.y = y + a.get_mnimoe_complex();
  return C;
}
Complex Complex::operator-(Complex a)
{
  Complex C;
  C.x = x - a.get_celoe_complex();
  C.y = y - a.get_mnimoe_complex();
  return C;
}

Complex Complex::operator*(Complex a)
{
  Complex C;
  C.x = x * a.x - y * a.y;
  C.y = y * a.x + x * a.y;
  return C;
}

Complex Complex::operator/(Complex a)
{
  Complex C;
  C.x = (x * a.x + y * a.y) / (a.x * a.x + a.y * a.y);
  C.y = (a.x * y - x * a.y) / (a.x * a.x + a.y * a.y);
  return C;
}

Complex Complex::operator=(Complex a) 
{
  x = a.x;
  y = a.y;
  return *this;
}

bool operator==(Complex a, Complex b)
{
  return ((a.x == b.x) && (a.y == b.y));
}

std::ostream& operator<<(std::ostream& out, Complex& a)
{
  out << a.get_celoe_complex() << "+" <<"("<< a.get_mnimoe_complex()<<")"<<"i" << "\n";
  return out;
}
std::istream& operator>>(std::istream& in, Complex& a)
{
  double x, y;
  in >> x;
  in >> y;
  a.set_celoe_complex(x);
  a.set_mnimoe_complex(y);
  return in;
}