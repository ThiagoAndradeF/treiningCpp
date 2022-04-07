#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"\nSelecione um transporte\n";
    cout<<"(1)moto (2)carro (3)aviao (4)helicoptero";
    cin>>num;
    switch(num){
        case 1:case 2:
        cout<<"\ntransporte terrestre\n";
        switch (num)
        {
            case 1:
                cout<<"\nMoto selecionada\n";
                 break;
            case 2:
                cout<<"\nCarro selecionado\n";
                 break;
        }
        break;
        case 3:case 4:
         cout<<"\ntransporte aereo\n";
        switch (num)
        {
            case 3:
               cout<<"\nAviao selecionada\n";
                break;
            case 4:
               cout<<"\nhelicoptero selecionado\n";
                break;
            default:
               cout<<"\nNUMERO INVALIDO";
        }
    }
        cout<<"\nPROGRAMA FINALIZADO\n";

    
    return 0;

    }