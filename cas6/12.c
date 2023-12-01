#include <stdio.h>

int main() {
    
    int t;
    scanf("%d", &t);
    
    if(t < 0) {
        printf("Greska: pogresan ulaz!\n");
        return 1;
    }
    
    if(t == 0) {
        printf("Nema transakcija!\n");
        return 1;
    }
    
    int transakcija;
    int prihod = 0, rashod = 0, zarada;
    for(int i = 0; i < t; i++) {
        scanf("%d", &transakcija);
        if(transakcija > 0)
            prihod += transakcija;
        else
            rashod += transakcija;
    }
    
    zarada = prihod + rashod;
    
    printf("Prihod je: %d\n", prihod);
    printf("Rashod je: %d\n", rashod);
    if(zarada >= 0)
        printf("Zarada je: %d\n", zarada);
    else
        printf("Gubitak je: %d\n", -zarada);
    
    return 0;
}
