#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 101

void izbaci_beline(char s[]) {
    
    int i;
    for(i = strlen(s) - 1; isspace(s[i]); i--) {
        
    }
    s[i+1] = '\0';
}

void ucitaj_recenicu(char s[]) {
    
    char c;
    int i = 0;
    while( (c = getchar()) != '\n' && c != EOF && i < MAX - 1) {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
}

int main() {
    
    char s[MAX];
    ucitaj_recenicu(s);
    
    izbaci_beline(s);
    
    printf("****%s****", s);
    
    
    return 0;
}
