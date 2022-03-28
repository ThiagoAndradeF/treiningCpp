#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    char palavra[30],letra[1],secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    cout<<"Fale para seu amigo tampar os olhos e digite a palavra secreta:";
    cin>>palavra;
    system("cls");

    while(palavra[i] != '\0')/*Comando para selecionar o tamanho da array 'palavra'.*/{
        i++;
        tam++;
    }
    for(i=0;i<30;i++){/*Comando para colocar tracinhos no lugar das letras*/
        secreta[i]='-';
    }
    /*Rotina do Jogo >>>*/while ((chances>0) && (acertos<tam)){
        cout << "Chances restantes: " << chances <<"\n\n";
        cout << "Palavra Secreta:";
        for(i=0; i<tam; i++)/*ROTINA PARA REVELAR A PALAVRA SECRETA*/{
            cout<<secreta[i];
        }
        cout<<"\n\nDigite uma letra:";
        cin >> letra[0];//COLHER LETRA
        for(i=0; i<tam; i++){
            if (palavra[i]==letra[0])
            {
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }//revelar palavra 
        }
        if(!acerto){
            chances--;
        }
        acerto=false;
        system("cls");
    }
    if(acertos==tam){
        cout<<"Voce venceu";
    }else{
        cout<<"Que pena, voce perdeu!";
    }
    return 0;
    } 