#include <stdio.h>
#include <ctype.h>

int main() {
    
    char a, b, c;
    
    scanf("%c%c%c", &a, &b, &c);
    
    if(!isalpha(a) && !isdigit(a)) {
        printf("Greska! Neispravan karakter je %c\n", a);
        return 1;
    }
    if(!isalpha(b) && !isdigit(b)) {
        printf("Greska! Neispravan karakter je %c\n", b);
        return 1;
    }
    if(!isalpha(c) && !isdigit(c)) {
        printf("Greska! Neispravan karakter je %c\n", c);
        return 1;
    }
    
    if(isupper(a))
        a = tolower(a);
    if(isupper(b))
        b = tolower(b);
    if(isupper(c))
        c = tolower(c);
    
    printf("Kod je: %c%c%c\n", a, b, c);
    
    return 0;
}
