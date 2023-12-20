#include<stdio.h>
#include<string.h>

#define MAX 30

void strcpy_copy(char t[], char s[]) {
    
    int i;
    for(i = 0; s[i]; i++) {
        t[i] = s[i];
    }
    t[i] = '\0';
    
}

void strcat_copy(char t[], char s[]) {
    
    int i, j;
    for(i = strlen(t), j = 0; s[j]; i++, j++)
        t[i] = s[j];
    t[i] = '\0';
}

int main() {
    
    char s[MAX+1], nadovezana[3*MAX + 1];
    scanf("%s", s);
    
    strcpy_copy(nadovezana, s);
    strcat_copy(nadovezana, s);
    strcat(nadovezana, s);
  
    printf("%s", nadovezana);
    
    return 0;
}
