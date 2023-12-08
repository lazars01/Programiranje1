#include <stdio.h>
#include <ctype.h>

#define MAX1 10
#define MAX2 26

/*
Kako ne bismo tri puta pisali for petlje za ispis pojavljivanja odgovarajucih karaktera za 3 niza koja predstavljaju brojace,
pravimo funkciju za ispis. Karakter c prosledjujemo funkciji kako bismo znali kako da na osnovu pozicije u nizu dobijemo odgovarajuci karakter,
za koji je clan niza na toj poziciji brojac (zato sto drugaciju konstantu sabiramo na i za svaki od tri niza, neophodno nam je da prosledimo i c, kako bi pravljenje
jedinstvene funkcije za ispis bilo moguce). 
*/

void ispis(int niz[], int n, char c) {
    
    for(int i = 0; i < n; i++) {
        if(niz[i] != 0) {
            printf("Karakter %c se javlja %d puta!\n", i + c, niz[i]);
        }
    }
}

int main() {
    
    int cifre[MAX1], mala[MAX2], velika[MAX2];
    
    // Ovo smo takodje mogli da izdvojimo u posebnu funkciju, kojoj bi prosledili niz i velicinu a ona bi sve elemente postavila na 0.
    for(int i = 0; i < MAX1; i++)
        cifre[i] = 0;
    for(int i = 0; i < MAX2; i++) {
        mala[i] = 0;
        velika[i] = 0;
    }
    
    char c;
    while( (c = getchar()) != EOF) {
        if(isdigit(c))
            cifre[c - '0']++;
        if(isupper(c))
            velika[c - 'A']++;
        if(islower(c))
            mala[c - 'a']++;
    }
    
    ispis(cifre, MAX1, '0');
    ispis(mala, MAX2, 'a');
    ispis(velika, MAX2, 'A');
    
    return 0;
}
