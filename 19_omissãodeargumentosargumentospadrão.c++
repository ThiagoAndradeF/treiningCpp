#include <stdio.h>
#include <iostream>
using namespace std;
void imp(string txt="você não evocou argumento na function");
int main(){
    imp("baah tche");

    
    return 0;

    }
    void imp(string txt){
        cout<<"\n"<<txt<<"\n";
    }