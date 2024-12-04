#include <iostream>

using namespace std;

int main()
{
    int n, c2=1, c3=1;
    cin>>n;
    for (int i=1; i<=n; i++){
        cout<<i<<" "<<c2<<" "<<c3<<endl;
        c2++;
        c3++;
        cout<<i<<" "<<c2<<" "<<c3<<endl;
        c2=(i+1)*(i+1);
        c3=(i+1)*(i+1)*(i+1);
    }
    return 0;
}
