#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX1 51
#define MAX2 100

typedef struct {
    
    char sr[MAX1];
    char en[MAX1];
} ParReci;

void ucitaj_recenicu(char recenica[]) {
    int i = 0;
    char  c;
    while( (c = getchar()) != '\n' && i < MAX2) {
        recenica[i] = c;
        i++;
    }
    recenica[i] = '\0';
}

void ispisi_prevedenu_rec(char rec_za_prevod[], ParReci niz[], int n) {
    for(int i = 0; i < n; i++) {
        if(strcmp(rec_za_prevod, niz[i].sr) == 0) {
            printf("%s ", niz[i].en);
            return;
        }
    }
    
    for(int i = 0; rec_za_prevod[i]; i++) {
        printf("*");
    }
    printf(" ");
}

int main() {
    
    ParReci niz[MAX2];
    
    char rec[MAX1];
    int i = 0;
    while(1) {
        
        scanf("%s", rec);
        if(strcmp(rec, "kraj") == 0)
            break;
        strcpy(niz[i].sr, rec);
        scanf("%s", niz[i].en);
        i++;
    }
    int n = i;
    
    // kada sa scanf("%s", rec) ucitana rec bude "kraj", novi red koji smo pritisnuli kako bi presli na unos recenice ostaje na standardnom ulazu,
    // posto recenicu ucitavamo karakter po karakter do novog reda, na novi red nailazimo odmah i necemo ucitati nista, ukoliko pre ucitvanja
    // recenice ne uradimo getchar()
    getchar();
    char recenica[MAX2 + 1];
    ucitaj_recenicu(recenica);
    
    char rec_za_prevod[MAX1];
    int j = 0;
    for(i = 0; recenica[i]; i++) {
        
        if(isspace(recenica[i])) {
            rec_za_prevod[j] = '\0';
            j = 0;
            ispisi_prevedenu_rec(rec_za_prevod, niz, n);
        }
        else
            rec_za_prevod[j++] = recenica[i];
    }
    rec_za_prevod[j] = '\0';
    ispisi_prevedenu_rec(rec_za_prevod, niz, n);
    
    return 0;
}
