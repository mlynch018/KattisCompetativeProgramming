#include <iostream>
using namespace std;
int main() {
  
  int x;
  cin>>x;
  cin.ignore(80,'\n');
  int i=1;
  string s;
  int wins=0;
  bool lost=false;
  while (i<=x)
  {
    getline(cin,s);
    lost=false;
    for (int j=0;j<(s.length()-1);j++)
    {
      if (s[j]=='C')
      {
        if (s[j+1]=='D')
        {
          lost=true;
        }
      }
    }
    if (!lost)
    {
      wins++;
    }
    i++;
  }
  cout<<wins;
  return 0;
}
