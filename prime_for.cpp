#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag = false;
    for(int d=2;d<n;d++){
        if(n%d==0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }

    return 0;
}
