#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int broj,max=-1,max_broj;
    if(n<=0){
        printf("-1\n");
        return 1;
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",&broj);
        if(abs(broj)>9999 || abs(broj)<1000){
            printf("-1\n");
            return 1;
        }
        int stotina=(abs(broj)/100)%10;
        if(stotina>=max){
            max=stotina;
            max_broj=abs(broj);
        }
        
    }
    
     int suma=0;
     while(max_broj>0){
       suma+=max_broj%10;
       max_broj/=10;
     }
     
     printf("%d\n",suma);
     return 0;
}
