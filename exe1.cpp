#include <iostream>
#include <string>
using namespace std;
class Complexe{//creation de classe 
  public:
double x,y;
Complexe (double a=0, double b=0):x{a},y{b}{//costructeur de intialisation parametre
}
Complexe operator+(Complexe &v){//surcharge operator  +
  Complexe temp;//objet temp comme containair
  temp.x=x+v.x;
    temp.y=y+v.y;
    return temp;
    }
    Complexe operator-(Complexe &v){//surcharge operator  -
  Complexe temp;
  temp.x=x-v.x;
    temp.y=y-v.y;
    return temp;
    }
    Complexe operator*(Complexe &v){//surcharge operator  *
  Complexe temp;
  temp.x= x*v.x -y*v.y;
    temp.y=x*v.y + y*v.x;
    return temp;
    }
     Complexe operator/(Complexe &v){//surcharge operator  /
  Complexe temp;
   double norm = v.x*v.x + v.y*v.y;
  temp.x=(x*v.x + y*v.y) / norm;
    temp.y=(x*v.y + y*v.x) / norm;
    return temp;
    }
    void display(){//fonction de display 
      cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main(){
  Complexe obj1(10,12),obj2(13,15);//creation de objet 
  Complexe obj3=obj1+obj2;//tester objet 
  obj3.display();//afficher le valeur
  Complexe obj4=obj1-obj2;
   obj4.display();
    Complexe obj5=obj1*obj2;
   obj5.display(); Complexe obj6=obj1/obj2;
   obj6.display();
  return 0;
}