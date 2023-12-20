#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 11

void konvertuj(char s[]) {
    
    // kraci zapis uslova - s[i]
    for(int i = 0; s[i] != '\0'; i++) {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        else if(islower(s[i]))
            s[i] = toupper(s[i]);
    }
    
}

int main() {
    
    char s[MAX];
    scanf("%s", s);
    
    konvertuj(s);
    printf("%s", s);
    
    return 0;
    
}
