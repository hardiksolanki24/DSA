#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1,temp=1;
    while(i<=n){
        int j=1,k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=i){
            cout<<temp;
            temp++;
            j++;
        }cout<<endl;
        i++;
    }

return 0;
}
