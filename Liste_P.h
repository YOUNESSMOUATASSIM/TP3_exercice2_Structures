#ifndef LISTE_P_H_INCLUDED
#define LISTE_P_H_INCLUDED
#include "Produit.h"
struct Liste{

Produit p[100];
int nb_P;
};
/*Afficher la liste de produits.
3. Supprimer un produit en tapant le code produit.
4. Acheter un produit en tapant le code produit et la quantité achetée.
5. Vendre un produit en tapant le code produit et la quantité vendue.*/
 void initialiser_liste(Liste* l);
void ajouter_produit_liste(Produit* p,Liste* l);
void afficher_liste(Liste* l);
void supprimer_Prod(Liste* l,char* code_p);
int chercher_qte_prod(Liste* l,char* code_p);
void acheter_Prod(Liste* l,char* code_p,int qte);
void vendre_Prod(Liste* l,char* code_p,int qte);


#endif // LISTE_P_H_INCLUDED
