#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 81

int ucitaj_liniju(char s[], int n) {
    
    char c;
    int i = 0;
    while( (c = getchar()) != '\n' && c != EOF && i < n) {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int main() {
    
    char s[MAX], max_s[MAX];
    int duzina_najduze = -1;
    
    int duzina;
    while( (duzina = ucitaj_liniju(s, MAX-1)) != 0) {
        if(duzina > duzina_najduze) {
            duzina_najduze = duzina;
            strcpy(max_s, s);
        }
    }
    
    printf("%s\n", max_s);
    
    return 0;
}
