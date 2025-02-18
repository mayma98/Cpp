#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "entrez une chaine de charactères : " << endl;
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        str[i]=toupper(str[i]);
    }
    cout << "chaine en majuscules : "<<str << endl;
    return 0;
}
