#include <stdio.h>

#define MAX 1000

void ucitaj(int a[], int n) {
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void ispisi(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int suma(int a[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

float prosek(int a[], int n) {
    int s = suma(a, n);
    return (float) s / n;
}

int max(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int pozicija_min(int a[], int n) {
    
    int min = a[0], poz_min = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
            poz_min = i;
        }
    }
    
    return poz_min;
}

int main() {

    int n, niz[MAX];
    scanf("%d", &n);
    
    if(n <= 0 || n > MAX) {
    	printf("Greska!\n");
    	return 1;
    }
    
    ucitaj(niz, n);
    ispisi(niz, n);
    printf("Ukupno vreme trcanja je: %d\n", suma(niz, n));
    printf("Prosecno vreme trcanja je: %f\n", prosek(niz, n));
    printf("Najsporiji takmicar: %d min\n", max(niz, n));
    printf("Pozicija pobednika je: %d\n", pozicija_min(niz, n));
    
    return 0;
}
