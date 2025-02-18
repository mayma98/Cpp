#include <iostream>
#include <string>
using namespace std;
/*lab1*/
/*int main()
{
    string ch1, ch2, ch3;
    cout << "taper la premiere chaine :" << endl;
    cin >> ch1;
    cout << "taper la 2eme chaine :" << endl;
    cin >> ch2;
    ch3=ch1+ch2;
    cout << "voici la chaine concatinée :" << ch3<< endl;
    return 0;
}*/
/*lab2*/
int main()
{
    string ch1, ch2, ch3;
    cout << "taper une chaine :"; getline(cin, ch1);
    cout << "taper une chaine :"; getline(cin, ch2);
    ch3=ch1+ch2;
    cout << "voici la chaine concatinée :" << ch3<< endl;
    return 0;
}
