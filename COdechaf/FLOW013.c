#include<stdio.h>
int main(){
    int T,B,A,C,sum;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d %d %d",&A,&B,&C);
        sum=A+B+C;
        if (sum==180)
        {
            printf("YES\n");
        }
        else
        {
           printf("NO\n");
        }
        
    }
    
}