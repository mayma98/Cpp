#include <iostream>
#include <string>
using namespace std;

/*void affiche_entier(int a=2)
{
    cout << a;
}
void affiche_chaine(string b="csf")
{
    cout <<b;
}
void affiche_float(float c=2.0)
{
    cout << c;
}
int main()
{
    int x;
    string y,w;
    float z;
    y="hello csf";
    x=10;
    z=5.2;
    w="!";
    affiche_chaine(y);
    affiche_entier(x);
    affiche_chaine(w);
    return 0;
}*/
void affiche(int a=2,string b="csf", float c=2.0)
{
    cout << a<<b<< c;
}
int main()
{
    int x;
    string y,w;
    float z;
    y="hello csf";
    x=10;
    z=5.2;
    w="!";
    affiche(2,y,2.0);
    affiche(2,y,z);
    affiche(x,y,z);
    return 0;
}
