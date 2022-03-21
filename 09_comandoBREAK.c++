#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int num;
    num=0;
    while(num<20){
        cout<<"Numeracao"<<num<<"\n";
        num++;
        if(num==10){
            break;}
    }
    cout<<"\nRotina finalizada\n"; 
    return 0;

    } 