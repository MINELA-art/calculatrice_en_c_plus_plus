#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main (int argc, char **argv){
    void dessin_calco();
    void resultat( double reponse);

    double nbre1 = 0.0;
    double nbre2 = 0.0;
    double reponse = 0.0;
    char choix = '\n';
    bool plusieurs = 0;


    //dessin_calco();
    while (choix != '.'){
        if (plusieurs == 1){//on veut effectuer plusieurs opérations sur le résultat obtenu au premier calcu
            resultat(reponse);
            cout<<"Entrer votre operateur : ";
            cin>>choix;

            if (choix =='+' || choix =='-' || choix =='*' || choix =='/' || choix =='m' || choix =='p') 
                {
                    nbre1 = reponse;
                    cout<<"Entrez le nombre 2 : ";
                    cin>>nbre2;
                }
            else if (choix =='.'){
                break;
            }
            else{
                nbre1 = reponse;
            }
        }
        else{// on veut utiliser la calculatrice basique (une seulle opération: du genre a + b.)
            dessin_calco();
            cout<<"Entrer votre operateur : ";
            cin>>choix;

            if (choix =='+' || choix =='-' || choix =='*' || choix =='/' || choix =='m' || choix =='p') 
                {
                    cout<<"Entrez le nombre 1 : ";
                    cin>>nbre1;
                    cout<<"Entrez le nombre 2 : ";
                    cin>>nbre2;
                }
            else if (choix =='.'){
                break;
            }
            else{
                cout<<"Entrez le nombre : " <<endl;
                cin>>nbre1;
            }
            plusieurs = 1;
            }
        switch (choix)
        {
        case '+':
            reponse = nbre1 + nbre2;
            break;
        case '-':
            reponse = nbre1 - nbre2;
            break;
        case '*':
            reponse = nbre1 * nbre2;
            break;
        case '/':
            reponse = nbre1 / nbre2;
            break;
        case 'm':
            reponse = int(nbre1) % int(nbre2);
            break;
        case 'L':
            reponse = log(nbre1);
            break;
        case 'k':
            reponse = nbre1 * nbre1;
            break;
        case 'C':
            reponse = nbre1 * nbre1 * nbre1;
            break;
        case 'p':
            reponse = pow(nbre1,nbre2);
            break;
        case 's':
            reponse = sin(nbre1);
            break;
        case 'c':
            reponse = cos(nbre1);
            break;
        case 't':
            reponse = tan(nbre1);
            break;
        case 'r':
            reponse = sqrt(nbre1);
            break;
        case 'e':
            reponse = exp(nbre1);
            break;
        case '.':
            plusieurs = 0;
            break;
        default:
            cout<<"~~~~~~vous avez entrer une valeur invalide~~~~~~" <<endl;
            break;
        }
        system ("cls");
    }

    return 0;
}
void dessin_calco(){
    cout<<"|______________________________________________|"<<endl;
    cout<<"|                                              |"<<endl;
    cout<<"|           CALCULATRICE SCIENTIFIQUE          |"<<endl;
    cout<<"|______________________________________________|"<<endl;
    cout<<"|     +        |       -        |      *       |"<<endl;
    cout<<"| Addition     | Soustraction   |Multiplication|"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      /       |       m        |      L       |"<<endl;
    cout<<"|   Division   |     modulo     |  logarithme  |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      k       |       C        |      p       |"<<endl;
    cout<<"|    carre     |      cube      |  puissance   |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      s       |       c        |       t      |"<<endl;
    cout<<"|    sinus     |    cosinus     |    tangente  |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      r       |       e        |       .      |"<<endl;
    cout<<"|racine carree | exponentielle  |     close    |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
}
void resultat( double reponse){
    cout<<"|______________________________________________|"<<endl;
    cout<<"|                          |                   |"<<endl;
    cout<<"|         Resultat :       |"<< reponse          <<endl;
    cout<<"|__________________________|___________________|"<<endl;
    cout<<"|     +        |       -        |      *       |"<<endl;
    cout<<"| Addition     | Soustraction   |Multiplication|"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      /       |       m        |    Log       |"<<endl;
    cout<<"|   Division   |     modulo     |  logarithme  |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      s       |       C        |      P       |"<<endl;
    cout<<"|    square    |      cube      |  puissance   |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      s       |       c        |       t      |"<<endl;
    cout<<"|    sinus     |    cosinus     |    tangente  |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
    cout<<"|      r       |       e        |       .      |"<<endl;
    cout<<"|racine carree | exponentielle  |     close    |"<<endl;
    cout<<"|______________|________________|______________|"<<endl;
}
    