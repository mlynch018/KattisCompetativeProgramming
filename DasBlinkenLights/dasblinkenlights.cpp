#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector <int> l1;
  vector <int> l2;
  
  int x;
  int y;
  int num;
  
  cin>>x;
  cin>>y;
  cin>>num;
  
  for (int i=1; i<=num; i++)
  {
    if (i%x==0)
    {
      l1.push_back(1);
    }
    else 
    {
      l1.push_back(0);
    }
  }
  
    
  for (int i=1; i<=num; i++)
  {
    if (i%y==0)
    {
      l2.push_back(1);
    }
    else 
    {
      l2.push_back(0);
    }
  }
  
  bool tf=false;
  for (int i=0; i<l1.size();i++)
  {
    if (l1[i]==l2[i] && l1[i]==1)
      tf=true;
  }
  
  if (tf==0)
  {
    cout<<"no";
  }
  else
  {
    cout<<"yes";
  }
  
  return 0;
}
