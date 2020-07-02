#include <iostream>

using namespace std;

int main()
{
    string new_alpha[]={"@","8", "(","|)","3","#",
    "6","[-]","|","_|","|<","1","[]\\/[]",
    "[]\\[]", "0","|D","(,)","|Z","$","\'][\'",
    "|_|","\\/","\\/\\/","}{","`/","2"
    };
    
    string phrase;
    int length;
    
    getline(cin,phrase);
    length=phrase.size();
    int asciival=0;
    
    for (int i=0; i<length; i++)
    {
        if (isalpha(phrase[i]))
        {
            asciival=static_cast<int>(tolower(phrase[i]));
            asciival-=97;
            cout<<new_alpha[asciival];
        }
        else 
        {
            cout<<phrase[i];
        }
    }
    
    
    return 0;
}
