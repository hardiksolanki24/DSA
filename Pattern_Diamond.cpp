#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int space=1;space<=n-i;space++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=i-1;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		for(int space=1;space<=n-i;space++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=i-1;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
return 0;
}

