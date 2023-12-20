#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 31

int pretvori_u_int(char s[]) {
    
    int znak, i = 1;
    if(s[0] == '-') {
        znak = -1;
    }
    else if(s[0] == '+') {
        znak = 1;
    }
    else {
        znak = 1;
        i = 0;
    }
    
    int broj = 0;
    for(; s[i]; i++) {
        broj *= 10;
        broj += s[i] - '0';
    }
    
    return znak * broj;
}

int main() {
    
    char s[MAX];
    scanf("%s", s);
    
    printf("%d\n", pretvori_u_int(s));
    printf("%d\n", atoi(s));
    
    return 0;
}
