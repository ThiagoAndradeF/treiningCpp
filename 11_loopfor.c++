#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    for(x=1, y=0, z=1; x<=10;x++,y+=2,z+=2 ){
        cout<<x<<"-"<<y<<"-"<<z<<"\n";
    }
    return 0;

    }