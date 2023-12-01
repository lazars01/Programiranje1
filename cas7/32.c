#include <stdio.h>
#include <ctype.h>

int main() {
    
    int mala_slova = 0, velika_slova = 0, cifre = 0, beline = 0, zbir = 0;
    
    char c;
    while( ( c = getchar() ) != EOF) {
        if(islower(c))
            mala_slova++;
        if(isupper(c))
            velika_slova++;
        if(isspace(c))
            beline++;
        if(isdigit(c)) {
            cifre++;
            zbir += c - '0';
        }
    }
    
    printf("Mala: %d\nVelika: %d\nBeline: %d\nCifre: %d\nZbir: %d\n",
           mala_slova, velika_slova, beline, cifre, zbir);
    
    return 0;
}
