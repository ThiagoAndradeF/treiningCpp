#include <stdio.h>
#include <iostream>
using namespace std;

int main(){  
    int i;
    int vetor[5]={10,20,30,40,50};
    for ( i = 0; i < sizeof(vetor)/4; i++)
    {
        cout<<vetor[i]<<"\n";
    }
    

    
    return 0;

    }