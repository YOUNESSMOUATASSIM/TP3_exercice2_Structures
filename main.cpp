#include <iostream>
#include <string.h>
#include <cstring>
#include "Produit.h"
#include "Liste_P.h"
using namespace std;

int main()
{

int i;
char code[9];//le code produit
char intit[99];//l'intitulé
unsigned int qte;
string C,In;

Produit p;
Liste l;

initialiser_liste(&l);
while(1){

do{
        /*1. Ajouter un produit (on tape le code produit et l'intitulé, la quantité est initialisée à 0).
2. Afficher la liste de produits.
3. Supprimer un produit en tapant le code produit.
4. Acheter un produit en tapant le code produit et la quantité achetée.
5. Vendre un produit en tapant le code produit et la quantité vendue.
6. Quitter*/
cout<<"--------Bonjour cher utilisateur ---------------\n";
cout<<"\n      1) Ajouter un produit \n";
cout<<"\n      2) Afficher liste des produits \n";
cout<<"\n      3) Supprimer un produit \n";
cout<<"\n      4) Acheter un produit  \n";
cout<<"\n      5) Vendre un produit  \n";
cout<<"\n      6) Quitter \n";

cin>>i;// ------ reçoit le choix de l'utilisateur


}while(i<1 || i>6);//---- vérifier si la valeur saisie est inclus dans notre intervalle

if(i==6){

     break;//----------Quitter
}




switch (i){

     case 1:
         cout<<"\n  donner le code Produit :\t";
         cin>>C;

         //getline(cin,P);

strcpy(code,&C[0]);

         cout<<"\n  donner l'intitule du Produit  :\t";

        //cin.get(n,9);
        //getline(cin,N);

        cin>>In;
strcpy(intit,&In[0]);

         cout<<"\n  donner la quantite :\t";
         cin>>qte;


        // cout<<"\n prenom :"<<p;
         //cout<<"\n  nom    :"<<n<<"\n";

//initialiser_la_liste(l);

p=ajouter_produit(code,intit,qte);
ajouter_produit_liste(&p,&l);
//ajouter_emp(e,&l);


           break;


    case 2:

 // afficher_liste(&l);
 afficher_liste(&l);

         break;
    case 3:
      std::cout<<" veuillez donner le code du Produit a supprimer :\t";
           cin>>C;

         strcpy(code,&C[0]);

      supprimer_Prod(&l,code);
          break;

    case 4:
      std::cout<<" veuillez donner le code du Produit a acheter :\t";
           cin>>C;
         strcpy(code,&C[0]);


      std::cout<<" veuillez donner le quantite  du Produit a acheter :\t";
           cin>>qte;

      acheter_Prod(&l,code,qte);
          break;

   case 5:
       unsigned int qt=0;
      std::cout<<" veuillez donner le code du Produit a vendre :\t";
           cin>>C;
         strcpy(code,&C[0]);
unsigned int test=chercher_qte_prod(&l,code);


           do{
            std::cout<<" veuillez donner la quantite  du Produit a vendre :\t";

           cin>>qt;
           }while(test < qt);

           vendre_Prod(&l,code,qt);



          break;
}
}



    return 0;
}
