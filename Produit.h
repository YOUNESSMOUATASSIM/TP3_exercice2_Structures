#ifndef PRODUIT_H_INCLUDED
#define PRODUIT_H_INCLUDED
 struct Produit{
char code[9];//le code produit
char intit[99];//l'intitul�
unsigned int qte; //la quantit� en stock

};
//___________Ajouter un produit (on tape le code produit et l'intitul�, la quantit� est initialis�e � 0)_______//
Produit ajouter_produit (char* c ,char* i,int q=0);
void afficher_p(Produit* p);




#endif // PRODUIT_H_INCLUDED
