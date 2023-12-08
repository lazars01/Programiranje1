#include <stdio.h>

#define MAX 100

void ucitaj(int niz[], int n) {
    for(int i = 0; i < n; i++)
        scanf("%d", &niz[i]);
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    int a[MAX], b[MAX];
    ucitaj(a, n);
    ucitaj(b, n);
    
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += a[i] * b[i];
    }
    
    printf("Suma je: %d\n", suma);
    
    return 0;
}
