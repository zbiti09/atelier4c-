#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string>l1; //creer list 
    string n;
    int i;
    cout<<"inserez le nom, prenom et age comme:< nom,prenom,age >. tapez arreter quand vous terminez :"<<endl;
    for (i = 0;; i++) //demender les valeur pour remplir 
    {
    cin>>n;
    if(n=="arreter")//condition d'arret
    {
        break;   
    }
    l1.push_back(n); //remplir list
    }
    list<string>::iterator it;  //iterator dans la liste 
    l1.sort();     
    it=l1.begin();//it pointe vers la premier veleur
    cout<<"votre liste triee est : ";
    for (it;it!=l1.end();it++)  ahmed,
    {
            cout<<*it<<"  ";
    }
}