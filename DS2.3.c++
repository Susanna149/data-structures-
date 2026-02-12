//read and display 1D array elements using DMA

#include<iostream>
using namespace std;
int main()
{
  int n,i;
  int *p=new int[n];
  cout<<"enter n value";
  cin>>n;
  p=a;
  for(i=0;i<n;i++)
  {
    cin>>*(p+i);
  }
  cout<<"array element are";
  for(i=0;i<n;i++)
  {
    cout<<*(p+i)<<" ";
  }
  delete[] p;
}
