#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, delta, x1, x2;
    cout<<"Digite os coeficientes de sua equação do segundo grau: "<<endl;
    cin>>a >>b >>c;

    delta = pow(b,2) - (4 * a * c);
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;

    if(a>=0 && b>=0 && c>=0){
        cout<<"Eqaucao: "<<a<<"x2 + "<<b<<"x + "<<c<<endl;

        if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
        }
                else{
                    cout<<"A equacao nao apresenta raizes reais"<<endl;
                }
    }
    else if(a<0 && b>=0 && c>=0){
       cout<<"Eqaucao: "<<a<<"x2 + "<<b<<"x + "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
         }

            else{
                cout<<"A equacao nao apresenta raizes reais"<<endl;
            }
    }
    else if(a>=0 && b<0 && c>=0){
       cout<<"Eqaucao: "<<a<<"x2
        "<<b<<"x + "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
        }
            else{
                cout<<"A equacao nao apresenta raizes reais"<<endl;
            }
    }
     else if(a>=0 && b>=0 && c<0){
        cout<<"Eqaucao: "<<a<<"x2 + "<<b<<"x "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
        }
            else{
                cout<<"A equacao nao apresenta raizes reais"<<endl;
            }
    }
    else if(a<0 && b<0 && c>=0){
        cout<<"Eqaucao: "<<a<<"x2 "<<b<<"x + "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
        }
            else{
                cout<<"A equacao nao apresenta raizes reais"<<endl;
            }
    }
     else if(a<0 && b>=0 && c<0){
        cout<<"Eqaucao: "<<a<<"x2 + "<<b<<"x  "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
        }
            else{
                cout<<"A equacao nao apresenta raizes reais"<<endl;
            }
    }
    else if(a>=0 && b<0 && c<0){
        cout<<"Eqaucao: "<<a<<"x2 "<<b<<"x  "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
        }
            else{
                cout<<"A equacao nao apresenta raizes reais"<<endl;
            }
    }
    else{
            cout<<"Eqaucao: "<<a<<"x2 "<<b<<"x  "<<c<<endl;

         if(delta >=0){
                if(x1>x2){
                    int x3;
                    x3=x1;

                    x1=x2;
                    x2=x3;
                cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                }
                else if(x1==x2){
                cout<<"onjunto solucao S={"<<x1<<"}"<<endl;
                }
                    else{
                    cout<<"onjunto solucao S={"<<x1<<" , "<<x2<<"}"<<endl;
                    }
        }
            else{
              cout<<"A equacao nao apresenta raizes reais"<<endl;
        }

    }
    return 0;

}
