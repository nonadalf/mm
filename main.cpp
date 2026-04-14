

#include <iostream>
#include <string>
using namespace std;
class Voiture
{
private:
    string mat;
    string lib;
    string marque;
    float prix;

public:
    void init(string m, string l, string ma, float p)
    {
        mat = m;
        lib = l;
        marque = ma;
        prix = p;
    }

    bool chercher(string l)
    {
        if (lib == l)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void affich(Voiture v1, Voiture v2, Voiture v3, Voiture v4, Voiture v5)
    {
        float minPrix = v1.prix;
        string marqueMin = v1.marque;

        if (v2.prix < minPrix)
        {
            minPrix = v2.prix;
            marqueMin = v2.marque;
        }
        if (v3.prix < minPrix)
        {
            minPrix = v3.prix;
            marqueMin = v3.marque;
        }
        if (v4.prix < minPrix)
        {
            minPrix = v4.prix;
            marqueMin = v4.marque;
        }
        if (v5.prix < minPrix)
        {
            minPrix = v5.prix;
            marqueMin = v5.marque;
        }

        cout << "La marque de la voiture la moins chere est: " << marqueMin << endl;
    }
};

int main()
{
    Voiture v[5];
    v[0].init("1234", "Clio", "Renault", 15000);
    v[1].init("5678", "Civic", "Honda", 20000);
    v[2].init("9012", "Corolla", "Toyota", 18000);
    v[3].init("3456", "Model 3", "Tesla", 35000);
    v[4].init("7890", "Fiesta", "Ford", 12000);

    string librech;
    cout << "Entrez le lib de la voiture: ";
    cin >> librech;
    for (int i = 0; i < 5; i++)
    {
        if (v[i].chercher(librech))
        {
            cout << "Voiture oui" << endl;
            break;
        }
        else
        {
            cout << "Voiture non " << endl;
        }
    }
    v[0].affich(v[0], v[1], v[2], v[3], v[4]);
    return 0;
}