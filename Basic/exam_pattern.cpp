#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i*2; j<n*2; j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }cout<<endl;
    }

    return 0;
}
