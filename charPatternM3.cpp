#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        char ch='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            ch=ch+j-1;
            cout<<ch;
        }cout<<endl;
    }



    return 0;
}
