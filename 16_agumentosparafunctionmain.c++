#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]){
    if(argc >1)
    if(!strcmp/*Pra comparação usa-se !strcmp, preciso incluir biblioteca <string.h, para funcionamento */(argv[1], "sol" )){
        cout<<"vou ao clube. \n\n";
    }else if(!strcmp(argv[1], "nublado")){
        cout<<"vou ao cinema. \n\n";
    }else{cout<<"vou ficar em casa \n\n";}
    
    return 0;
    }