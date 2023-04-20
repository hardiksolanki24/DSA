#include<iostream>
using namespace std;

int main(){
    int basic;
    int allow;
    char grade;


    cin>>basic>>grade;

    int hra=(basic*20)/100;
    int da=(basic*50)/100;
    int pf=(basic*11)/100;
    int T_salary;

    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else if(grade=='C' || grade>=67){
        allow=1500;
    }

    T_salary =(basic + hra + da + allow)- pf;
    T_salary = (int)(T_salary +0.5);
    cout<<T_salary;

return 0;
}
