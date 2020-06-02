#include <iostream>
using namespace std;
int main() {
 
  char ed;
  char space;
  cin.get(ed);
  cin.get(space);
  string s;
  getline(cin,s);
  
  char current=s[0];
  int count=0;
  
  char let;
  char num;
  int val;
  string s2;
  int pos=0;
  if (ed=='E')
  {
    for (int i=0; i<s.length();i++)
    {
      count++;
      if (current!=s[i+1])
      {
        cout<<current;
        cout<<count;
        current=s[i+1];
        count=0;
      }
    }
  }
  else if (ed=='D')
  {
    for (int i=0; i<s.length()-1;i+=2)
    {
      let=s[i];
      num=s[i+1];
      val=static_cast<int>(num)-48;
      for (int j=1;j<=val;j++)
      {
        cout<<let;
      }
    }
  }
  
  return 0;
}
