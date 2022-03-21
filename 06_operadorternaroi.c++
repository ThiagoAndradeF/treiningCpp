#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    /* =========média com operador ternário=======================
    int n1,n2,nota;
    string res;
    cout << " digite a primeira nota";
    cin >>n1;
    cout << " digite a segunda nota";
    cin >>n2;
    nota=n1+n2;
    res=(nota>=60)?"Aprovado":"Reprovado";
    //(nota>=60)? res="aprovado": res="reprovado";/

    cout << "\nSituacao do aluno:" << res << "\n"; */
    int n1,x;
    x=5;
    cout << " Digite um numero";
    cin >> n1;
    (n1>=10) ? x++ : x--;  
    cout << x;
    return 0;
    }