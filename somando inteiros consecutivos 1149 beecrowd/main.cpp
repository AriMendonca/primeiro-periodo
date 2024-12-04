#include <iostream>

using namespace std;

int main()
{
    int a, n=0, soma=0, soma2=0;
    cin>>a;
    while (n<1){
        cin>>n;
    }
    for (int i=0; i<n; i++)
    {
        soma=soma+i;
    }
    for (int i=0; i<=a; i++)
    {
       soma2=soma2+i;
    }
    cout<<soma2+soma<<endl;
    return 0;
}
