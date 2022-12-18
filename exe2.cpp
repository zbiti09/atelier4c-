#include <iostream>

#include <string>

using namespace std;

void afficherDEtH(const string& s)//creation de fonction de affichage la date 
{
    if ( s.length() != 12 )//tester si on 12 valeur 
        cout << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4) << endl;//diviser la date avec substr
        cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;//diviser heure 
    }
}

int main()
{
    string s("010920091123");//tester le programme
    afficherDEtH(s); 
}