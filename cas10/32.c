#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ucitaj(int niz[], int n) {
    
    for(int i = 0; i < n; i++)
        scanf("%d", &niz[i]);
    
}

void ispisi(int niz[], int n) {
    
    for(int i = 0; i < n; i++)
        printf("%d ", niz[i]);
    printf("\n");
}

int eliminisi(int niz[], int n) {
    
    int j = 0;
    for(int i = 0; i < n; i++) {
        int cifra = niz[i] % 10;
        if(cifra == 0 || niz[i] % cifra == 0) {
            niz[j] = niz[i];
            j++;
        }
    }
    
    return j;
}

int main() {
        
    int n, niz[MAX];
    scanf("%d", &n);
    
    if(n < 1) {
        printf("Greska!\'n");
        return 1;
    }
    
    ucitaj(niz, n);
    
    int dim = eliminisi(niz, n);
    ispisi(niz, dim);
    
    exit(EXIT_SUCCESS);
}
