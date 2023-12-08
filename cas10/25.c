#include <stdio.h>

#define MAX 100

void okreni_niz(int niz[], int n) {
    
    for(int i = 0, j = n-1; i != j; i++, j--) {
        int tmp = niz[i];
        niz[i] = niz[j];
        niz[j] = tmp;
    }
    
}

void rotiraj_levo(int niz[], int n) {
    
    int tmp = niz[0];
    
    for(int i = 1; i < n; i++)
        niz[i-1] = niz[i];
    niz[n-1] = tmp;
    
}

void rotiraj_za_k(int niz[], int n, int k) {

    // ako niz rotiramo za n mesta ulevo dobijamo pocetni niz, pa nema potrebe trositi vreme
    // zato rotiramo za k % n
    k = k % n;
    
    for(int i = 0; i < k; i++)
        rotiraj_levo(niz, n);
}

void ispisi(int niz[], int n) {
    
    for(int i = 0; i < n; i++)
        printf("%d ", niz[i]);
    printf("\n");
}

int main() {
  
    int n, k, niz[MAX];
  
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &niz[i]);
    
    scanf("%d", &k);
    
    okreni_niz(niz, n);
    ispisi(niz, n);
    rotiraj_levo(niz, n);
    ispisi(niz, n);
    rotiraj_za_k(niz, n, k);
    ispisi(niz, n);
    
    return 0;
}
