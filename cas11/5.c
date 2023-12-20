#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 21

int sadrzi_veliko(char s[]) {
    
    for(int i = 0; s[i]; i++) {
        if(isupper(s[i])) {
            return 1;
        }
    }
    
    return 0;
    
}

int main() {
    
    char s[MAX];
    scanf("%s", s);
    
    int sadrzi = sadrzi_veliko(s);
    if(sadrzi) {
        printf("Sadrzi!\n");
    }
    else {
        printf("Ne sadrzi!\n");
    }
    
    return 0;
}
