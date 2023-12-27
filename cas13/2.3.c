#include <stdio.h>

#define MAX 21
#define MAX2 50

typedef struct {
    
    char ime[MAX];
    float vitamini;
} Vocka;

int ucitaj(Vocka niz[]) {
    
    int i = 0;
    while(scanf("%s%f", niz[i].ime, &niz[i].vitamini) != EOF && i < MAX2) {
        i++;
    }
    
    return i;
}

Vocka max_vitamina(Vocka niz[], int n) {
    float max_vit = niz[0].vitamini;
    int max_idx = 0;
    
    for(int i = 1; i < n; i++) {
        if(niz[i].vitamini > max_vit) {
            max_vit = niz[i].vitamini;
            max_idx = i;
        }
    }
    
    return niz[max_idx];
}

int main() {
    
    Vocka niz[MAX2];
    int n = ucitaj(niz);
  
    Vocka max_vocka = max_vitamina(niz, n);
    printf("%s\n", max_vocka.ime);
    
    return 0;
}
