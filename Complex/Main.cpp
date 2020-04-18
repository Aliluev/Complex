#include"Function.h"
#include<iostream>
using namespace std;
int main()
{
  Complex A(3, 4);
  Complex B(1, 2);
  Complex C;
  cout << "Complex chisla"<<"\n";
  cout << "A(3,4)" << "\n";
  cout << "B(1,2)" << "\n";
  cout << "\n";
  cout<<"Operacii:"<<"\n";
  cout << "A+B"<<"\n";
  C = A + B;
  cout << C;
  cout << "A*B"<<"\n";
  C = A * B;
  cout << C;
  cout << "A-B" << "\n";
  C = A - B;
  cout << C;
  cout << "A/B"<<"\n";
  C = A / B;
  cout << C;
  cout << "B = A" << "\n";
  B = A;
  cout << "B=" << B;
  cout << "A==B?" << "\n";
  int i;
  i = (A == B);
  if (i == 1)
  {
    cout << "yes"<<"\n";
  }
  else
  {
    cout << "No"<<"\n";
  }
  cout << "D(5,9)" << "\n";
  cout << "A==D?" << "\n";
  Complex D(5, 9);
  i = (A == D);
  if (i == 1)
  {
    cout << "yes"<<"\n";
  }
  else
  {
    cout << "No"<<"\n";
  }
  cout << "operator cin>>"<<"\n";
  cout << "VVEDITE DVA CHISLA" << "\n";
  Complex X;
  cin >> X;
  cout << "operator cout<<" << "\n";
  cout << "Vashe chislo=";
  cout << X;
  return 0;
}