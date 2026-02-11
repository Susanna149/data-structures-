//factorial
#include<iostream>
using namespace std;
int main()
{
  int n, fact =1;
  cout<<"enter n value:";
  cin>>n;
  for(inti=1;i<=n;i++)
  {
    fact=fact*i;
  }
  cout<<"factorial of given "<<n<<is:"<<fact;
}
