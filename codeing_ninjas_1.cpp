#include<bits/stdc++.h>
using namespace std;


long long  n,x,res=0;
vector<long long> arr;


int main(){

    cin>>n;
    
    while(n--){
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    
    n=arr.size();

    for(long long i=0;i<n;i++){
        if(i%3 != 2) res += arr[n-i-1];
    }
    
    cout<<res<<endl;
}