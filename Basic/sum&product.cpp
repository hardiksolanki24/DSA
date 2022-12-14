#include<iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    cin>>c;
    int sum=0,product=1;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    for(int i=1;i<=n;i++){
        product*=i;
    }
    if(c==1){
        cout<<sum;
    }
    else if(c==2){
        cout<<product;
    }


    return 0;
}
