#include <stdio.h>

int main() {
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int suma;
    
    if(a > 0)
        suma = suma + a;
    if(b > 0) {
        suma += b;
    }
    if(c > 0)
        suma += c;
    
    printf("Suma je: %d\n", suma);
    
    return 0;
}
