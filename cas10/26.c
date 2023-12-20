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

void ukrsti(int a[], int b[], int n, int c[]) {
    
    for(int i = 0, j = 0; i < n; i++, j+=2) {
        c[j] = a[i];
        c[j+1] = b[i];
    }
    
}

int main() {
    
    int n, a[MAX], b[MAX], c[2*MAX];
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Greska!\n");
        exit(EXIT_FAILURE);
    }
    
    ucitaj(a, n);
    ucitaj(b, n);
    
    ukrsti(a, b, n, c);
    ispisi(c, 2*n);
  
    exit(EXIT_SUCCESS);
}
