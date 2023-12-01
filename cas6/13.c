#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Greska: neispravan unos!");
        return 1;
    }
    
    int i = 0, suma = 0, broj;
    while(i < n) {
        scanf("%d", &broj);
        if(broj < 0 && broj % 2 != 0)
            suma += broj;
        i++;
    }
    
    printf("Zbir neparnih i negativnih: %d\n", suma);
    
    return 0;
}
