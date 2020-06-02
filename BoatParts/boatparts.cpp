#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  int days;
  cin>>n;
  cin>>days;
  cin.ignore(80,'\n');
  vector<string> v;
  bool completed=false;
  string s="";
  int unique=0;
  bool invec;
  int pos=0;
  for (int i=1;i<=days;i++)
  {
    invec=false;
    getline(cin,s);
    for (int j=0;j<v.size();j++)
    {
      if(v[j]==s)
      {
        invec=true;
        break;
      }
    }
    if (!invec)
    {
      v.push_back(s);
      unique++;
    }
    if (unique>=n && !completed)
    {
      pos=i;
      completed=true;
    }
  }
  if (!completed)
  {
    cout<<"paradox avoided";
  }
  else
  {
    cout<<pos;
  }
  return 0;
}
