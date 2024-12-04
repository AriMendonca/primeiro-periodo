#include <iostream>

using namespace std;

int main()
{
    int novo=1, gremio, inter, gols_inter=0, gols_gremio=0, empates=0;
    int cont=0;
    while(novo==1){
        cin>> inter;
        cin>> gremio;
        cont++;
        if (inter>gremio){
            gols_inter=gols_inter+1;
        }
        else if (gremio>inter){
            gols_gremio=gols_gremio+1;
        }
        else{
            empates++;
        }
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            cin>> novo;
    }
    cout<< cont<< " grenais"<< endl;
    cout<<"Inter:" <<gols_inter<< endl;
    cout<<"Gremio:" <<gols_gremio<< endl;
    cout<<"Empates:" <<empates<< endl;
    if (gols_gremio>gols_inter){
        cout<<"Gremio venceu mais"<< endl;
    }
    else {
       cout<<"Inter venceu mais"<< endl;
    }
    return 0;
}
