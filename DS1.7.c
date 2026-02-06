/* write a c++ prog to stimulate arithmatic  calculator using switch case */

#include<iostream>
using namespace std;
{
  int a, b;
  char op;
  cout<<enter a and b values:";
  cin>>a>>b;
  cot<<"enter operator:";
  cin>>0;
  switch (op)
  {
    case'+': cout<<"addition:"<<a+b;
              break;
    case'-': cout<<"substraction:"<<a-b;
              break;
    case'*': cout<<"muitiplication:"<<a*b;
              break;  
    case'/': cout<<"division":<<a/b;
              break;
    case'%': cout<<"modulus":<<a%b;           
              break;
    dfault:cout<<"invalid operator";
  }
}
