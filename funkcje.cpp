#include <iostream>
#include "funkcje.h"
 
using namespace std;
 
void DodajBDW(BDW *&korzen)
{
BDW *nowy = new BDW;
BDW *pomoc = NULL;
int Ltekst1 = 0;
        cin>>nowy->tekst;
        DlTekstu(nowy->tekst,Ltekst1);
        nowy->dl_tekstu = Ltekst1;
 
        if(korzen != NULL)
        {
                pomoc = korzen;
                WstawLisc(pomoc,nowy);
        }
        else
                WstawKorzen(korzen,nowy);
 
}
void WstawKorzen(BDW *&korzen,BDW *&element)
{
        korzen = element;
        element->Rodzic = korzen;
}
void WstawLisc(BDW *&Lisc,BDW *&element)
{
int pom = 0;
 
        if(Lisc->dl_tekstu == element->dl_tekstu)
        {
                pom = Literuj(Lisc->tekst,element->tekst,Lisc->dl_tekstu);
                if(pom == 0 || pom == 1)
                {
                        if(Lisc->LDziecko != NULL)
                        {
                                Lisc = Lisc->LDziecko;
                                WstawLisc(Lisc,element);
                        }
                        else NaLewo(Lisc,element);
                }else if(pom == 2)
                {
                        if(Lisc->PDziecko != NULL)
                        {
                                Lisc = Lisc->PDziecko;
                                WstawLisc(Lisc,element);
                        }else
                                NaPrawo(Lisc,element);
                }
        }else{
                if(Lisc->dl_tekstu > element->dl_tekstu)
                        if(Lisc->LDziecko != NULL)
                        {
                        Lisc = Lisc->LDziecko;
                        WstawLisc(Lisc,element);
                        }
                        else NaLewo(Lisc,element);
                else
                        if(Lisc->PDziecko != NULL)
                        {
                                Lisc = Lisc->PDziecko;
                                WstawLisc(Lisc,element);
                        }else
                                NaPrawo(Lisc,element);
        }
}
void DlTekstu(char tekst[],int &licznik)
{
        while(tekst[licznik]!='\0')
                licznik++;
}
int Literuj(char tekst1[],char tekst2[],int dlugosc)
{
        for(int i=0;i<=dlugosc;i++)
        {
                if(tekst1[i]>tekst2[i])
                        return 1;
                else if(tekst1[i]<tekst2[i])
                        return 2;
        }
return 0;
}
void NaLewo(BDW *&Lisc,BDW *&element)
{
        Lisc->LDziecko = element;
        element->Rodzic = Lisc;
}
void NaPrawo(BDW *&Lisc,BDW *&element)
{
        Lisc->PDziecko = element;
        element->Rodzic = Lisc;
}
void SzukajMIN(BDW *&korzen)
{
BDW *pomoc = NULL;
        pomoc = korzen;
        MIN(pomoc);
        cout<<pomoc->tekst<<"\n";
}
void SzukajMAX(BDW *&korzen)
{
BDW *pomoc = NULL;
        pomoc = korzen;
        while(pomoc->PDziecko != NULL)
                pomoc = pomoc->PDziecko;
        cout<<pomoc->tekst<<"\n";
}
int WysokoscDrzewa(BDW *korzen)
{
int Lwysokosc = 0;
int Pwysokosc = 0;
 
        if(korzen == NULL)
                return 0;
        else{
                        Lwysokosc = WysokoscDrzewa(korzen->LDziecko);
                        Pwysokosc = WysokoscDrzewa(korzen->PDziecko);
                        if(Lwysokosc >= Pwysokosc) return Lwysokosc+1;
                        else return Pwysokosc+1;
                }
}
 
void WypiszOdMIN(BDW *&korzen)
{
BDW *pomocMIN = NULL;
int licznik = 0;
        pomocMIN = korzen;
 
        InorderMIN(pomocMIN,licznik);
}
void MIN(BDW *&korzen)
{
        while(korzen->LDziecko != NULL)
                        korzen = korzen->LDziecko;
}
void InorderMIN(BDW *&element,int &licznik)
{
BDW *pomoc = NULL;
                pomoc = element;
                if(pomoc != NULL)
                {
                        InorderMIN(pomoc->LDziecko,licznik);
                        if(licznik%2 == 0) cout<<pomoc->tekst <<" ";
                        licznik++;
                        InorderMIN(pomoc->PDziecko,licznik);
                        pomoc = pomoc->Rodzic;
                }
}
void WypiszInO2(BDW *&korzen)
{
BDW *pomocMAX = NULL;
int licznik = 0;
        pomocMAX = korzen;
 
        InorderO2(pomocMAX,licznik);
}
void InorderO2(BDW *&element,int &licznik)
{
BDW *pomoc = NULL;
                pomoc = element;
                if(pomoc != NULL)
                {
                        InorderO2(pomoc->LDziecko,licznik);
                        if(licznik%2 == 1) cout<<pomoc->tekst <<" ";
                        licznik++;
                        InorderO2(pomoc->PDziecko,licznik);
                        pomoc = pomoc->Rodzic;
                }
}
