#include<iostream>
using namespace std;

int fact(int n){

    int temp=1;
    for(int i=2;i<=n;i++){
        temp=temp*i;
    }
    return temp;
}
int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r);
    return 0;
}
