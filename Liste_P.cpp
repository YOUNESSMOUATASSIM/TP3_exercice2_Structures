#include "Liste_P.h"
#include <string.h>
#include <iostream>
void initialiser_liste(Liste* l)
{
    l->nb_P=0;
}
void ajouter_produit_liste(Produit* p,Liste* l)
{int test=0;

for(int i=0;i<l->nb_P;i++)
{
    if(strcmp(l->p[i].code,p->code)==0)
    {
        test++;
    }
}

if(test ==0)
{
    l->p[l->nb_P]=*p;

   l->nb_P++;
}
else
{
    std::cout<<"\n le code du produit saisie existe deja !\n";
}





}
int chercher_qte_prod(Liste* l,char* code_p)
{
    int qte_V=0;
    for(int i=0;i<l->nb_P;i++)
    {
        if(strcmp(l->p[i].code,code_p)==0)
        {
             qte_V=l->p[i].qte;
        }
    }
return qte_V;

}


void afficher_liste(Liste* l)
{
for(int i=0;i<l->nb_P;i++)
{
    std::cout<<"\n"<<i+1<<") code :"<<l->p[i].code<<"   intitule : "<<l->p[i].intit<<"   quantite en stock : "<<l->p[i].qte<<"\n";
}

}
void supprimer_Prod(Liste* l,char* code_p)
{
    Produit cpy[100];
    int j=0;
    for(int i=0;i<l->nb_P;i++)
    {
        if(strcmp(l->p[i].code,code_p)!=0)
        {
            cpy[j]=l->p[i];
            j++;
        }
    }
    for(int i=0;i<l->nb_P;i++)
    {
     l->p[i]=cpy[i];

    }
l->nb_P--;
    }

void acheter_Prod(Liste* l,char* code_p,int qte)
{
     for(int i=0;i<l->nb_P;i++)
    {
        if(strcmp(l->p[i].code,code_p)==0)
        {
           l->p[i].qte=l->p[i].qte+qte;
        }
    }


}
void vendre_Prod(Liste* l,char* code_p,int qte)
{
     for(int i=0;i<l->nb_P;i++)
    {
        if(strcmp(l->p[i].code,code_p)==0)
        {
              l->p[i].qte=l->p[i].qte-qte;
        }
    }

}
