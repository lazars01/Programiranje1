#include <stdio.h>

int main() {
    
    int broj, proizvod = 1, br_poz = 0, br_neg = 0;
    while(1) {
        scanf("%d", &broj);
        if(broj == 0)
            break;
        br_neg = 1;
        if(broj > 0) {
            proizvod *= broj;
            br_poz = 1;
        }
    }
    
    if(br_poz != 0)
        printf("Proizvod pozitivnih je: %d\n", proizvod);
    else if(br_neg != 0) {
    	printf("Svi su negativni!\n");
    }
    else
        printf("Nije unet nijedan broj!\n");
    
    /*for(;;) {
        
    }*/
    
    /*do {
        
        
    }while(1);*/
    
    return 0;
}
