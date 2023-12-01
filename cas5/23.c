#include <stdio.h>
#include <ctype.h>

int main() {
    
    char c;
    scanf("%c", &c);
    
    c = tolower(c);
    
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Uneti karakter jeste samoglasnik!\n");
            break;
        default:
            printf("Uneti karakter nije samoglasnik!\n");
    }
    
    return 0;
}
