#include<stdio.h>
int main(){
    int a,re,m,sum=0,n;
    scanf("%d",&n);
    while (n--)
    {
         scanf("%d",&a);
    while (a>0)
    {
        re=a%10;
        sum=sum*10+re;
        a=a/10;
    }
    printf("%d\n",sum);
    sum=0;
    }
    
   
    
}