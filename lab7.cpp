#include <iostream>

using namespace std;

class surf
{
public:
    double largeur;//attribut
    double longueur;
    double surface()//méthode sans attribut
    {
        return largeur*longueur;
    }

};
int main()
{
    surf rect1;//instance
    cout << "donner la longueur du rectangle" << endl;
    cin >> rect1.longueur;
    cout << "donner la largeur du rectangle" << endl;
    cin >> rect1.largeur;
    cout << "la surface de rectangle de longueur "<<rect1.longueur <<" et de largeur "<<rect1.largeur <<" est : "<<rect1.surface();//nadou lmethode sans donnée
    return 0;
}
