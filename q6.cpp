#include <iostream>
using namespace std;

int main(){
    char x;

    cout<<"Digite um caracter: "<<endl;
    cin>>x;

    if(x>= 'a'&& x<='z'){
        if (x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'){
            cout<<" O caracter que voce digitou eh uma letra" <<endl;
            cout<<" O caracter que voce digitou eh uma vogal" <<endl;
        }
            else{
                cout<<" O caracter que voce digitou eh uma letra" <<endl;
                cout<<" O caracter que voce digitou eh uma consoante" <<endl;
            }
    }
    else{
        cout<<" O caracter que voce digitou eh um caracter qualquer" <<endl;
    }

}
