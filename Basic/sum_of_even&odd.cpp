#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1,sum_e=0,sum_o=0;
    while(n>0){
        int temp=n%10;
        if(temp%2==0){
            sum_e = sum_e + temp;
        }
        else{
             sum_o = sum_o + temp;
        }
        n=n/10;
        i++;
    }
    cout<<sum_e<<' '<<sum_o;
}
