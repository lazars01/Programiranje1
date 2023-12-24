#include <stdio.h>

#define MAX 50

float trag(float a[][MAX], int n) {
    
    float suma = 0;
    for(int i = 0; i < n; i++)
        suma += a[i][i];
    return suma;
}

float suma_sporedna(float a[][MAX], int n) {
    
    // i + j = n - 1 - element je na sporednoj => j = n - 1 - i => ne treba dupla petlja
    float suma = 0;
    for(int i = 0; i < n; i++)
        suma += a[i][n - 1 - i];
    return suma;
}

float suma_iznad(float a[][MAX], int n) {
    
    float suma = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            suma += a[i][j];
        }
    }
    return suma;
}

float suma_ispod(float a[][MAX], int n) {
    
    float suma = 0;
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; i + j >= n; j--) {
            suma += a[i][j];
        }
    }
    return suma;
}

int main() {
    
    int n;
    float matrica[MAX][MAX];
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%f", &matrica[i][j]);
    
    printf("Trag: %f\nSuma glavna: %f\nSuma iznad sporedne: %f\nSuma ispod sporedne: %f\n", 
            trag(matrica, n), suma_sporedna(matrica, n), suma_iznad(matrica, n), suma_ispod(matrica, n)
    );
        
    return 0;
}
