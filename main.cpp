#include <iostream>
using namespace std;

int main()
{

float flottant1, flottant2, resultat;

cout << "Entrez le premier flottant : ";
cin >> flottant1;

do{
cout << "Entrez le deuxième flottant : ";
cin >> flottant2;
} while (flottant2 == 0);

resultat = flottant1/flottant2;

cout << "Le résultat est : " << resultat << endl;

}
