struct BDW
{
char tekst[16];
int dl_tekstu;
BDW *PDziecko;
BDW *LDziecko;
BDW *Rodzic;
BDW(){tekst[0]='\0';PDziecko = NULL; LDziecko = NULL; Rodzic = NULL; dl_tekstu = 0;}
};
 
void program();
void DodajBDW(BDW *&korzen);
void WstawKorzen(BDW *&korzen,BDW *&element);
void WstawLisc(BDW *&Lisc,BDW *&element);
void DlTekstu(char tekst[],int &licznik);
void NaLewo(BDW *&Lisc,BDW *&element);
void NaPrawo(BDW *&Lisc,BDW *&element);
void SzukajMIN(BDW *&korzen);
void SzukajMAX(BDW *&korzen);
int WysokoscDrzewa(BDW *korzen);
void LewyKrzew(BDW *&Lisc,int &licznik);
void PrawyKrzew(BDW *&Lisc,int &licznik);
void MIN(BDW *&korzen);
void WypiszOdMIN(BDW *&korzen);
int Literuj(char tekst1[],char tekst2[],int dlugosc);
void InorderMIN(BDW *&element,int &licznik);
void WypiszInO2(BDW *&korzen);
void InorderO2(BDW *&element,int &licznik);
