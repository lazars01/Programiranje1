#include <stdio.h>
#include <ctype.h>

void ucitaj(int* tacka, int* zarez) {
    char c;
    while( (c = getchar()) != EOF) {
        if(c == '.')
            (*tacka)++;
        if(c == ',')
            *zarez += 1;
    }
}

int main() {
    
    int tacka = 0, zarez = 0;
    ucitaj(&tacka, &zarez);
    
    printf("Broj tacaka: %d\nBroj zareza: %d\n", tacka, zarez);
    
    return 0;
}
