#include<stdio.h>
int main(){
int b;

scanf("%d",&b);
int a[b];
int aa[b];
for(int i=0;i<b;i++){

    scanf("%d",&a[i]);
}
int k=b-1;
for(int j=0;j<b;j++){
  
aa[k]=a[j];
k--;

}
for(int i=0;i<b;i++){
    printf("%d ",aa[i]);;
}



}