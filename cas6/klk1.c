#include <stdio.h>
#include <ctype.h>

int main() {
    
    char op, a, b, c, d;
    scanf("%c %c%c%c%c", &op, &a, &b, &c, &d);
    
    if(op == 'C') {
        int pr = 1, br = 0;
        if(isdigit(a)) {
            br++;
            pr *= a - '0';
        }
        if(isdigit(b)) {
            br++;
            pr *= b - '0';
        }
        if(isdigit(c)) {
            br++;
            pr *= c - '0';
        }
        if(isdigit(d)) {
            br++;
            pr *= d - '0';
        }
        
        if(br > 0) {
            printf("%d\n", pr);
        }
        else {
            printf("0\n");
        }
    }
    else if(op == 'V') {
        int br = 0;
        if(isupper(a))
            br++;
        if(isupper(b))
            br++;
        if(isupper(c))
            br++;
        if(isupper(d))
            br++;
        printf("%d\n", br);
        
    }
    else {
        printf("-1\n");
    }
    
}
