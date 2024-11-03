#include <iostream>
using namespace std;
int main() {
int i,j,n;
    for(j=1;j<=9;j++)
        {
        for(i=j;i<=9;i++)
            {
            cout<<j<<'*'<<i<<'='<<1*i<<'\t';
            }
        cout<<endl;
        for(n=1;n<=j;n++)
            {
            cout<<'\t'<<'\t';
            }
        }
    return 0;
}
