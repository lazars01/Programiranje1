#include <stdio.h>

int main() {
    
    int a;
    scanf("%d", &a);
    
    if(a < 0) {
        printf("Greska: neispravan unos!\n");
        return 1;
    }
    
    if(a > 22) {
        printf("Greska: doci ce do prekoracenja!\n");
        return 1;
    }
    
    unsigned long faktorijel = 1;
    
    for(int i = 2; i <= a; i++) {
        faktorijel *= i;
    }
    
    printf("Faktorijel je: %lu\n", faktorijel);
    
    return 0;
}
