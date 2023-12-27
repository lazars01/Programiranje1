#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void ucitaj(int a[][MAX], int n) {
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
}

int main() {
    
    int n, a[MAX][MAX];
    scanf("%d", &n);
    
    if(n <= 0 || n > MAX) {
        printf("Greska!\n");
        exit(EXIT_FAILURE);
    }
    
    ucitaj(a, n);
    
    int max_zbir = 0;
    for(int i = 0; i < n; i++)
        max_zbir += a[i][0];
    int redni_br_najvece = 0;
    
    for(int j = 1; j < n; j++) {
        int trenutna_suma = 0;
        for(int i = 0; i < n; i++) {
            trenutna_suma += a[i][j];
        }
        
        if(trenutna_suma > max_zbir) {
            max_zbir = trenutna_suma;
            redni_br_najvece = j;
        }
    }
    
    printf("%d\n", redni_br_najvece);
    
    exit(EXIT_SUCCESS);
}
