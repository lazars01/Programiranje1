#include <stdio.h>
#include <string.h>

#define MAX 21

int strcmp_klon(char s1[], char s2[]) {
    
    int i;
    for(i = 0; s1[i] == s2[i]; i++) {
            if(s1[i] == '\0')
                return 0;
    }
    
    return s1[i] - s2[i];
}

int main() {
    
    char s1[MAX], s2[MAX];
    scanf("%s%s", s1, s2);
    
    if(strcmp_klon(s1, s2) > 0) {
        printf("%s\n%s\n", s2, s1);
    }
    else if(strcmp_klon(s1, s2) < 0) {
        printf("%s\n%s\n", s1, s2);
    }
    else
        printf("%s\n", s1);
    
    return 0;
}
