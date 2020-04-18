#ifndef _Function_h_
#define _Function_h_
#include<iostream>

class Complex
{
protected:
  double x;
  double y;
public:
  void set_complex(double a, double b);
  double get_celoe_complex();
  double get_mnimoe_complex();
  void set_celoe_complex(double c);
  void set_mnimoe_complex(double f);
  Complex();
  Complex(double a, double b);
  Complex(const Complex& o);
  Complex operator+(Complex a);
  Complex operator-(Complex a);
  Complex operator*(Complex a);  
  Complex operator/(Complex a);
  Complex operator=(Complex a);
  friend bool operator==(Complex a,Complex b);
  friend std::ostream& operator<<(std::ostream& out, Complex& a);
  friend std::istream& operator>>(std::istream& in, Complex& a);
};

#endif