#include <iostream>
using namespace std;

int main(){
    int a, b ,c;
    cout<<"Digite um conjunto de tres numeros e descubra se eles formam um traingulo"<<endl;
    cin>>a>>b>>c;

    if(a<(b+c)&& b<(a+c)&& c<(a+b)){
            if(a == b == c){
                cout<<"Os numeros que voce digitou formam um triangulo equilatero"<<endl;
            }
            else if(a == b || a == c || b == c){
                cout<<"Os numeros que voce digitou formam um triangulo isosceles"<<endl;
            }
                else{
                    cout<<"Os numeros que voce digitou formam um triangulo escaleno"<<endl;
                }
        }
        else{
            cout<<"Os numeros que voce digitou nao formam um triangulo"<<endl;
        }
    }


