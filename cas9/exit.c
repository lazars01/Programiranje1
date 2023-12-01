#include <stdlib.h>
#include <stdio.h>

int neparan_broj(int x) {
    
    if(x % 2 == 1) {
        return 1;
    }
    else {
        //exit(EXIT_SUCCESS);
        exit(EXIT_FAILURE);
        //exit(1);
    }
    
}

int main() {
    
    int x;
    scanf("%d", &x);
    
    int y = neparan_broj(x);
    printf("Nastavak!\n");
    
    return 0;
}
