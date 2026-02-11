/* write a c++ prog to read two numbs and perform swapping operation*/
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter a and b values";
  cin>>a>>b;
  cout<<"values of a is:"<<a<<"values of b is:"<<b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"values of a is:"<<a<<"values of b is:"<<b;
}
