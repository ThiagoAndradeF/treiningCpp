#include <stdio.h>
#include <iostream>
using namespace std;
void soma(int n1, int n2);
void soma();
int main(){
    soma(30,20);
    soma();
    
    return 0;

    }
    void soma( int n1, int n2){
        int res;
        res=n1+n2;
        cout<<"soma de " << n1<< "com" << n2 <<"="<< res<<"\n";
    }
    void soma(){
        int n1, n2, res;
        n1=10;
        n2=20;
        res=n1+n2;
        cout<<"soma de " << n1<< "com" << n2 <<"="<< res<< "\n";
    }