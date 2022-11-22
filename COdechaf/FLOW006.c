#include<stdio.h>
int main(){
    int n,a,sum,d;
    scanf("%d",&n);
    while (n--)
    {
        sum=0;
        d=0;
        
        scanf("%d",&a);
       while (a>0)
       {
        
       d=a%10;
       a=a/10;
       sum=sum+d;

       }
       printf("%d\n",sum);
       
    }
    
}