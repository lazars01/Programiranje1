#include <stdio.h>

int main(int argc, char* argv[]) {
    
    for(int i = 1; i < argc; i++) {
        
        if(argv[i][0] == '-') {
            for(int j = 1; argv[i][j]; j++)
                printf("%c ", argv[i][j]);
        }
        
    }
    printf("\n");
    
    return 0;
}
