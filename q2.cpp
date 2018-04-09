#include <iostream>
using namespace std;

int main (){

 int x;

 cout<<"Ola, sou a Zoo. Gostaria de saber quantos anos voce tem!"<<endl;
 cout<<"Digite sua idade: "<<endl;

 cin>>x;

     if ( x >=18 && x <=67){
        cout<<"Otimo, voce esta dentro de uma dos requesitos para ser doador"<<endl;
     }
         else{
            cout<<"Infelizmente voce nao pode doarpor causa dasua idade"<<endl;
         }
}

