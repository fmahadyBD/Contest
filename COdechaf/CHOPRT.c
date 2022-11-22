#include<stdio.h>

int main(){
    int k,b,a;
    scanf("%d",&k);
    while (k--)
    {
        scanf("%d %d",&a,&b);
        if(a>b){
        printf(">\n");
    }
     if(a<b){
        printf("<\n");
    }
     if(a==b){
        printf("=\n");
    }
        
    }
    
}