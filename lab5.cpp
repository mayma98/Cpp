#include <iostream>

using namespace std;

void incrum (int &a)
{
    a++;
}
int main()
{
    int i,j,x=3;
    incrum(x);
    cout << x << endl;
    for (i=0;i<10;i++)
    {
        incrum(x);
        cout << x << endl;
    }
    cout << x << endl;
    cout << "donner j :"; cin>> j;
    for (i=0;i<j;i++)
    {
        incrum(x);
    }
    cout << x << endl;
    return 0;
}
