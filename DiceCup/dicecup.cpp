#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  int x,y;
  cin>>x;
  cin>>y;
  int total=x+y;
  vector<int> v;//holds all possible sums
  int sum=0;
  for (int i=1;i<=x;i++)
  {
    for (int j=1;j<=y;j++)
    {
      sum=i+j;
      v.push_back(sum);
    }
  }
  
  
  vector<int> mostCommon;
  int max=0;
  int count=0;
  for (int k=1;k<=total;k++)
  {
    for(int l=0;l<=v.size();l++)
    {
      if (v[l]==k)
      {
        count++;
      }
    }
    if (count>=max)
    {
      max=count;
    }
    count=0;
  }
  int c2=0;
  for (int a=1;a<=total;a++)
  {
    for (int b=0;b<=v.size();b++)
    {
      if (v[b]==a)
      {
        c2++;
      }
    }
    if (c2==max)
    {
      mostCommon.push_back(a);
    }
    c2=0;
  }
  
  for (int m=0;m<mostCommon.size();m++)
  {
    cout<<mostCommon[m]<<endl;
  }
  return 0;
}
