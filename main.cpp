#include<iostream>
#include<stdlib.h>
//jogo da forca
//Autor: Ernandes em 01/12/2017

using namespace std;

char palavra[20] = {'t', 'e', 'l', 'e', 'v', 'i', 's', 'a', 'o'};
char tmp[20];
bool flag = 0;
bool flag_jogar = 0;
char letra;
int cont=0;
int cont2=0;
int total=0;
int soma_contador=0;

void carregar_vetor_tmp(){

    for(int i=0; i<9; i++){
        tmp[i] = 95;
    }
}

void barra_titulo(){

    cout<<"*************************\n";
    cout<<"*     JOGO DA FORCA     *\n";
    cout<<"*************************\n";
    cout<<"\n";
}

void desenho_forca(){

    barra_titulo();

    cout<<"    ___________\n";
    cout<<"   |";
    cout<<"           |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n            ___|";
    cout<<"___";
    cout<<"\n\n";

}

void case01(){

    system("clear");

    barra_titulo();

    cout<<"    ___________\n";
    cout<<"   |           |";
    cout<<"\n   O           |\n";
      cout<<"               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n            ___|";
    cout<<"___";
    cout<<"\n\n\n";
}

void case02(){

    system("clear");

    barra_titulo();

    cout<<"    ___________\n";
    cout<<"   |           |";
    cout<<"\n   O           |\n";
      cout<<"   |           |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n               |";
    cout<<"\n            ___|";
    cout<<"___";
    cout<<"\n\n\n";
}

void case03(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"                |"<<endl;
    cout<<"                |"<<endl;
    cout<<"                |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}

void case04(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"                |"<<endl;
    cout<<"                |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}

void case05(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"                |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}

void case06(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|            |"<<endl;
    cout<<"                |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}

void case07(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"                |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}

void case08(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"|               |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}

void carregamento(){

    system("clear");
    //barra_titulo();
    //desenho_forca();

    cout<<"\n";

    switch(total){

    case 0:
        system("clear");
        desenho_forca();
        break;

    case 1:
        system("clear");
        case01();
        break;

    case 2:
        system("clear");
        case02();
        break;

    case 3:
        system("clear");
        case03();
        break;

    case 4:
        system("clear");
        case04();
        break;

    case 5:
        system("clear");
        case05();
        break;

    case 6:
        system("clear");
        case06();
        break;

    case 7:
        system("clear");
        case07();
        break;

    case 8:
        system("clear");
        case08();
        break;
    }


    for(int i=0; i<9; i++){
        cout<<tmp[i];
        cout<<"  ";
    }
}

void case09(){

    system("clear");

    barra_titulo();

    cout<<"    ____________"<<endl;
    cout<<"   |            |"<<endl;
    cout<<"   O            |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"   |            |"<<endl;
    cout<<" __|__          |"<<endl;
    cout<<"|     |         |"<<endl;
    cout<<"              __|__"<<endl<<endl;

}


bool jogar(char a){

    bool jogo = 0;

    system("clear");

    if((a == 't') || (a == 'e') || (a == 'l') || (a == 'e') || (a == 'v') ||
            (a == 'i') || (a == 's') || (a == 'a') || (a == 'o')){

        jogo = 1;
        barra_titulo();
        desenho_forca();
    }else{
        jogo = 0;
        barra_titulo();
        desenho_forca();
    }

    return jogo;
}

int main(){

    carregar_vetor_tmp();

    while(!flag){

        system("clear");

        carregamento();

        cout<<"\n\nDigite uma letra: ";
        cin>>letra;

        flag_jogar = jogar(letra);

        cout<<"\n";

        for(int i=0; i<9; i++){
            if(palavra[i] == letra){
                tmp[i] = palavra[i];
                cont++;
            }else if((letra != 't') && (letra != 'e') && (letra != 'l') && (letra != 'e') &&
                     (letra != 'v') && (letra != 'i') && (letra != 's') && (letra != 'a') && (letra != 'o')){
                cont2++;
                total =  cont2 / 9;
            }
        } // end for

        soma_contador = cont + total;

        if((soma_contador == 9) && (total == 0)){

            system("clear");
            desenho_forca();
            cout<<"\nVOCÊ GANHOU!!!\n\n";
            flag = 1;

        }else if(soma_contador == 9){

            system("clear");
            case09();
            cout<<"\nVOCÊ PERDEU!!!\n\n";
            flag = 1;
        }

    } // end while


    return 0;

}// end main
