#include<iostream>
using namespace std;

int main(){

    char n;
    int chr=0,num=0,space=0;

    int i=1;
    while(n!='$'){

        n=cin.get();
        if(n>='a' && n<='z'){
            chr++;
        }
        else if(n>='0' && n<='9'){
            num++;
        }
        else if(n == ' ' || n == '\t' || n == '\n'){
    		space++;
		}
        i++;
    }
    cout<<chr<<" ";
    cout<<num<<" ";
    cout<<space;


    return 0;
}
