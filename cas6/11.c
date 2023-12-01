#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Greska: pogresan unos!\n");
        return 1;
    }
    
    int suma = 0;
    int i = n;
    while(i > 0) {
        suma += i % 10;
        i /= 10;
    }
    
    if(n % suma == 0) {
        printf("Broj %d je deljiv sa %d\n", n, suma);
    }
    else 
        printf("Broj nije deljiv!\n");
    
    return 0;
}
