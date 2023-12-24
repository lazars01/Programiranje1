#include <stdio.h>
#include <string.h>

#define MAX 21

char* strchr_klon(char s[], char c) {
    
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == c)
            return &s[i];
    }
    
    return NULL;
}

int main() {
    
    char s[MAX], c;
    scanf("%s %c", s, &c);
    
    
    char* prvi_put = strchr_klon(s, c);
    if(prvi_put == NULL) {
        printf("-1\n");
        return 1;
    }
    
    printf("%ld\n", prvi_put - s);
    return 0;
}
