#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Neispravan unos!\n");
        return 1;
    }
    
    int suma_kubova = 0;
    
    for(int i = 1; i <= n; i++) {
        suma_kubova += pow(i, 3);
    }
    
    printf("Suma kubova je: %d\n", suma_kubova);
    
    return 0;
}
