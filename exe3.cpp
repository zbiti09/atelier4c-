#include <iostream>
#include <list>
#include <string>

using namespace std;
int main(){
    int n=0,i=0,num;
    cout<<"combier d'entier tu veux ajouter?"<<endl;//demender entier a ajouter 
    cin>>n;
    list <int> numbers;//creation de list
    list <int>:: iterator it;//pour iterate la list
    it = numbers.begin();//pointeur vers le premier
    for (i=0;i<n;i++){//boucle for pour ajouter les valeur 
        cout<<"entrer numero " <<i <<endl;
        cin>>num;
         numbers.insert(it, num);//insert les elements 
         it++;//prends une pas vers la prochaine
    }
     numbers.sort();//sort notre list

    for (it;it!=numbers.end();it++){//afficher la list
        cout<<*it<<endl;
    }
   return 0;
}