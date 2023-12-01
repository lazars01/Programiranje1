#include <stdio.h>
#include <stdlib.h>


float aritmeticka_sredina(int n) {
    n = abs(n);
    
    int suma = 0, br = 0;
    for(; n > 0; n /= 10) {
        suma += n % 10;
        br++;
    }
    
    return (float) suma / br;
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    printf("%.3f\n", aritmeticka_sredina(n));
    
    return 0;
}
