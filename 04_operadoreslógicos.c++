#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    /* 
    num= 1 2 3 4 5 ou 10 11 12 13 14 15 (true)

    */
   num=12;

   if((num>=1 && num<=5) || (num>=10 && num<=15)){
       cout << "\n\nValor Aceito\n";
   }else{
       cout << "\n\nValor não aceito\n ";
   }
    return 0;

    }                                                                                                                                         