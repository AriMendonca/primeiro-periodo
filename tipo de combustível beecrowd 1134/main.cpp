#include <iostream>

using namespace std;

int main()
{
    int combustivel=1, c=1;
    int alcool=0, gasolina=0, diesel=0;
    while((c>0) && (c<4)){
        cin>>combustivel;
        if (combustivel>4 || combustivel<1){
           while (combustivel>4 || combustivel<1){
           cin>>combustivel;
        }
        }
        c= combustivel;
    if (combustivel==1){
        alcool++;
    }
    if (combustivel==2){
        gasolina++;
    }
    if (combustivel==3){
        diesel++;
    }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcool<<endl;
    cout<<"Gasolina: "<<gasolina<<endl;
    cout<<"Diesel: "<<diesel<<endl;
    return 0;
}
