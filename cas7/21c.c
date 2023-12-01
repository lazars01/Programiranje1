#include <stdio.h>
#include <math.h>
#include <stdlib.h>


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
    
    int broj, max, max_vodeca = -1;
    
    int i = 0;
    while(i < n) {
        
        scanf("%d", &broj);
        
        if(broj == 0 && n == 1) {
            printf("Maksimalni vodeci je: %d\n", broj);
            return 0;
        }
        
        int cifra = abs(broj) / pow(10, (int)log10(abs(broj)));
        if(cifra > max_vodeca) {
            max_vodeca = cifra;
            max = broj;
        }
        
        i++;
    }
  
    printf("Maksimalni vodeci broj je: %d\n", max);
    
    return 0;
}
