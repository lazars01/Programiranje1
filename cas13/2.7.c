// Studentski kod sa konsultacija
// Autor: Matija Jovanovic

#include<stdio.h>

#define MAX 31
#define max 2000

typedef struct{
    char ime[MAX];
    char prezime[MAX];
    char smer;
    double prosek;
}student;


int main () {

    int n;
    scanf("%d", &n);

    if(n < 1 || n > max){
        printf("Greska\n");
        return 1;
    }

    student niz[max];

    for(int i = 0 ; i < n ; i++){

        scanf("%s%s %c %lf", niz[i].ime, niz[i].prezime, &niz[i].smer, &niz[i].prosek);
        if(niz[i].smer != 'I' && niz[i].smer != 'M' && niz[i].smer != 'R' && niz[i].smer != 'V' && niz[i].smer != 'N' && niz[i].smer != 'T'){
            printf("Greska\n");
            return 1;
        }
        if(niz[i].prosek > 10 || niz[i].prosek < 6){
            printf("Greska\n");
            return 1;
        }
    }
    getchar();
    char smer;
    printf("Unesite smer: ");
    scanf("%c", &smer);

    for(int i = 0 ; i < n ; i++){

        if(niz[i].smer == smer){
            printf("%s %s\n", niz[i].ime, niz[i].prezime);
        }

    }
    printf("- - - - - - - - - - - - - - -\n");
    double max_prosek = niz[0].prosek;
    for(int i = 1 ; i < n ; i++){
        if(max_prosek < niz[i].prosek){
            max_prosek = niz[i].prosek;
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(niz[i].prosek == max_prosek){
            printf("%s %s %c %lf\n", niz[i].ime, niz[i].prezime, niz[i].smer, niz[i].prosek);
        }
    }

    return 0;
}
