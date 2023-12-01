#include <stdio.h>

int main() {
    
    double cena;
    double suma = 0;
    int br_artikala = 0;
    
    while(1) {
        scanf("%lf", &cena);
        
        if(cena < 0) {
            printf("Neispravan unos!\n");
            return 1;
        }
        
        if(cena == 0)
            break;
        
        suma += cena;
        br_artikala++;
    }
    
    if(br_artikala == 0) {
        printf("Nisu uneti artikli!\n");
        return 1;
    }
    
    printf("Prosecna cena je: %f\n", suma / br_artikala);
    
    return 0;
}
