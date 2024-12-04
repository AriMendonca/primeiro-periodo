#include <iostream>

using namespace std;

int main()
{
    int x, y, soma=0;
    cin>>x;
    cin>>y;
    if (x > y) {
        swap(x, y);
    }
    for (int i=x; i<=y; i++)
    {
      if ((i%13)!=0){
        soma=soma+i;
      }
    }
    cout<<soma<<endl;
    return 0;
}
