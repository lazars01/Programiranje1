#include <stdio.h>

#define MAX 100

int sadrzi_m(int niz[], int n, int m) {
    
    for(int i = 0; i < n; i++) {
        if(niz[i] == m)
            return 1;
    }
        
    return 0;
}

int pozicija_m(int niz[], int n, int m) {
    
    for(int i = 0; i < n; i++) {
        if(niz[i] == m)
            return i;
    }
    
    return -1;
}

int posl_pozicija_m(int niz[], int n, int m) {
    
    for(int i = n-1; i >= 0; i--) {
        if(niz[i] == m)
            return i;
    }
    
    return -1;
}


int main() {
    
    int n, m, niz[MAX];
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Greska!\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++)
        scanf("%d", &niz[i]);
    
    scanf("%d", &m);
  
    if(sadrzi_m(niz, n, m)) {
        printf("Niz sadrzi vrednost: %d\n", m);
        printf("Prvo pojavljivanje je na poziciji %d\n", pozicija_m(niz, n, m));
        printf("Poslednje pojavljivanje je na poziciji %d\n", posl_pozicija_m(niz, n, m));
    }
    else {
        printf("Nemamo trazenu vrednost!\n");
    }
    
    return 0;
}
