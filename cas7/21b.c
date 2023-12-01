#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Neispravan unos!\n");
        return 1;
    }
    
    if(n == 0) {
        printf("Nisu uneti brojevi!\n");
        return 0;
    }
    
    int broj, max, max_cifara = 0;
    
    for(int i =0; i < n; i++) {
        scanf("%d", &broj);
        
        int br_cifara = log10(abs(broj)) + 1;
        if(br_cifara > max_cifara) {
            max_cifara = br_cifara;
            max = broj;
        }
    }
    
    printf("Broj sa max cifara je: %d\n", max);
    
    return 0;
}
