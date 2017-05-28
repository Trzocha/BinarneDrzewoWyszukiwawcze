#include <iostream>
#include "funkcje.h"
 
using namespace std;
 
int main()
{
        program();
return 0;
}
void program()
{
char znak;
BDW *korzen = NULL;
        while(cin>>znak)
        {
                switch(znak)
                {
                case '+':
                        DodajBDW(korzen);
                        break;
                case '<':
                        SzukajMIN(korzen);
                        break;
                case '>':
                        SzukajMAX(korzen);
                        break;
                case 'h':
                        cout<<WysokoscDrzewa(korzen)<<"\n";
                        break;
                case '1':
                        WypiszOdMIN(korzen);
                        break;
                case '2':
                        WypiszInO2(korzen);
                        break;
 
                }
        }
}
