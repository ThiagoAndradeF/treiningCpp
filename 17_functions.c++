#include <stdio.h>
#include <iostream>
using namespace std;
void texto(), soma(int n1, int n2), tr(string tra[4]);
int  soma2(int n1, int n2), i;//prototipando functions
int main(){
    int res;
    string transp[4]={"carro","moto","barco","aviao"};//escrevendo o que estará sendo escrito na funtion "transp"
    soma(7,3);
    res=soma2(175,25);//determinando e gravando valores para as vareáveis em outra vareável 
    cout<< "valor de res: "<< res <<"\n\n";
    tr(transp);//dando paramentro para a function tr chamar a function transp
    return 0;//toda function não void precisa retornar algo

    }

    void texto(){
        cout<<"thiago andrade";
    }
    void soma(int n1, int n2){
        cout<<n1+n2<<"\n" ;
    }
    int soma2(int n1, int n2){
        return n1+n2;
    }
    void tr(string tra[4]){
        for(i=0; i<4; i++ ){
            cout<<tra[i]<<"\n";
        }
    }