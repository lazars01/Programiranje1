#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 21

char sledeci(char c) {
    
    if(c == 'z')
        return 'a';
    if(c == 'Z')
        return 'A';
    
    return c+1;
}

void sifruj(char rec[], char sifra[]) {
    
    int j = 0;
    for(int i = 0; rec[i] != '\0'; i++, j+=3) {
        
        if(!isalpha(rec[i])) {
            sifra[j] = rec[i];
            j-=2;
            continue;
        }
        
        sifra[j] = sledeci(rec[i]);
        sifra[j+1] = sledeci(sifra[j]);
        sifra[j+2] = sledeci(sifra[j+1]);
    }
    
    sifra[j] = '\0';
}

int main() {
    
    char rec[MAX], sifra[3*MAX-2];
    
    scanf("%s", rec);
    
    sifruj(rec, sifra);
    printf("%s\n", sifra);
    
    return 0;
}
