#include <iostream>
using namespace std;

int main(){
    int codigo, quant;
    double preco, valor;

    cout<<"Digite aqui o codigo do produto: "<<endl;
    cin>>codigo;

    cout<<"Digite aqui a quantidade de produtos"<<endl;
    cin>>quant;

    switch (codigo){
    case 100:
        cout<<"Cachorro quente"<<endl;
        preco = 1.20;
        cout<< "Custo da compra em reais: R$ " <<quant*preco<<endl;
        break;

    case 101:
        cout<<"Bauru"<<endl;
        preco = 1.30;
        cout<<"Custo da compra em reais: R$ " <<quant*preco<<endl;
        break;

    case 102:
        cout<<"Bauru com ovo"<<endl;
        preco = 1.50;
        cout<<"Custo da compra em reais: R$ " <<quant*preco<<endl;
        break;

    case 103:
        cout<<"Hamburger"<<endl;
        preco = 1.20;
        cout<<"Custo da compra em reais: R$ " <<quant*preco<<endl;
        break;

    case 104:
        cout<<"Cheeseburger"<<endl;
        preco = 1.30;
        cout<<"Custo da compra em reais: R$ "<<quant*preco<<endl;
        break;

    case 105:
        cout<<"Refrigerante"<<endl;
        preco = 1.00;
        cout<<"Custo da compra em reais: R$ "<<quant*preco<<endl;
        break;

    default :
        cout:0;

    return 0;

    }

}
