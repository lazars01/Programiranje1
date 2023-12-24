#include <stdio.h>


int main() {
    
    int n;
    scanf("%d", &n);
    
    int ukupno_kolona = 2 * (n - 1) + 1;
    for(int i = 0; i < n; i++) {
        
        int trenutno_zvezdica = 2*i + 1;
        int broj_belina_levo = (ukupno_kolona - trenutno_zvezdica) / 2;
        for(int j = 0; j < broj_belina_levo; j++)
            printf(" ");
        for(int j = 0; j < trenutno_zvezdica; j++)
            printf("*");
        
        printf("\n");
    }
    
    for(int i = (2*n - 1) / 2; i > 0; i--)
        printf(" ");
    printf("*");
    printf("\n");
    
    for(int i = 0; i < n - 2; i++) {
        
        int beline_izmedju = 2*i + 1;
        int beline_levo = (2*n - 1 - beline_izmedju - 2) / 2;
        for(int j = 0; j < beline_levo; j++)
            printf(" ");
        printf("*");
        for(int j = 0; j < beline_izmedju; j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    
    for(int i = 0; i < 5; i++)
        printf("* ");
    
    return 0;
}
