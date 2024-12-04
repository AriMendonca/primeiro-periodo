#include <iostream>

using namespace std;

int main()
{
    int x,z, soma=0, cont=0;
    cin>> x;
    while (z<=x)
    {
        cin>>z;
    }
    for (int i=x+1; i<z; i++)
    {
        while (soma<z)
        {
            soma=soma+i;
            cont+=1;
        }
    }
    cout<<cont<<endl;
    return 0;
}
