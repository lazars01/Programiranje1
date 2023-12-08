#include <stdio.h>

#define MAX 100

float suma(float a[], int n) {
    float s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int main() {
    
    int n, k;
    float niz[MAX];
    scanf("%d%d", &n, &k);
    
    if(k < 1) {
        printf("Nedovoljan broj pozitivnih za sabiranje!\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        scanf("%f", &niz[i]);
    }
    
    float poz[MAX];
    
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(niz[i] > 0) {
            poz[j] = niz[i];
            j++;
        }
    }
    
    if(k > j)
        printf("Nema dovoljno pozitivnih\n");
    else {
        printf("Suma je %f\n", suma(poz, k));
    }
    
    return 0;
}
