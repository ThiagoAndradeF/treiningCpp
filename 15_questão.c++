#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int ex3a;
    ex3a=true && (!true);
    if (ex3a==0)
        cout<<"Falso";
    else
        cout<<"Verdadeiro";
    return 0;

    }