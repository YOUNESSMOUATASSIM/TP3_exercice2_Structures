#include "Produit.h"
#include <string.h>
#include <iostream>

Produit ajouter_produit (char* c ,char* i,int q)
{
Produit p;

strcpy(p.code,c);
strcpy(p.intit,i);
p.qte=q;

return p;
}
void afficher_p(Produit* p)
{
 std::cout<<"\n code :  "<<p->code<<"  intitule  :  "<<p->intit<<"   qte  :  "<<p->qte<<"\n";

}
