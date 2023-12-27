#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char* argv[]) {
    
    if(argc != 2) {
        printf("Greska!\n");
        return 1;
    }
    
    for(int i = 0; argv[1][i] != '\0'; i++)
        if(!isdigit(argv[1][i])) {
            printf("Greska!\n");
            return 1;
        }
    
    int n = atoi(argv[1]);
    printf("%d\n", n);
    
    for(int i = -n; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    
    return 0;
}
