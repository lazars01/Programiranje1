#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    float broj, prethodni;
    int br_promena = 0;
    
    scanf("%f", &prethodni);
    
    int i = 1;
    while(i < n) {
        
        scanf("%f", &broj);
        
        if(prethodni == 0 && broj < 0 || prethodni < 0 && broj == 0) {
            br_promena++;
        }
        
        if(prethodni * broj < 0)
            br_promena++;
        
        prethodni = broj;
        
        i++;
    }
    
    printf("Broj promena je: %d\n", br_promena);
    
    return 0;
}
