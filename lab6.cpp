#include <iostream>

using namespace std;

int surface(int a,int b)
{
    return a*b;
}
float surface_float(float a,float b)
{
    return a*b;
}
int main()
{
    float lon, lar;
    cout << "donner la longueur du rectangle" << endl;
    cin >> lon;
    cout << "donner la largeur du rectangle" << endl;
    cin >> lar;
    cout << "la surface de rectangle est : "<<surface(lon, lar);
    return 0;
}
