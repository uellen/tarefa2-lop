#include<iostream>
using namespace std;

int main(){
    char w;
    int x,y;


    cout<<"Digite dois numeros e em seguida use o operador matematico: " <<endl;
    cin>>x >>y >>w;

    switch (w){
    case '+':
        cout<<x+y<<endl;
        break;
    case '-':
        cout<<x-y<<endl;
        break;
    case '*':
        cout<<x*y<<endl;
        break;
    case '/':
        cout<<x/y<<endl;
        break;

    default:
        cout<<"Caracter invalido: "<<w<<endl;
        break;

    return 0;
    }
}
