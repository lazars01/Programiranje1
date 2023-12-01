#include <stdio.h>

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
    
    int broj, desetica = -1, max;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &broj);
        
        int d = abs(broj) / 10 % 10;
        if(d > desetica) {
            max = broj;
            desetica = d;
        }
    }
    
    printf("Trazeni broj je: %d\n", max);
    
    
    return 0;
}
