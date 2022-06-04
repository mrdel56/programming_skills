#include <stdio.h>

int main()
{
    int i,j,k,p,serial,n;
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        int s1=0,s2=0,s3=0;
        scanf("%d %d",&serial,&n);
        for(j=1;j<=n;j++){
            if(j>0){
                s1+=j;
            }
        }
        j=1;
        k=1;
        while(k<=n){
            if(j%2!=0){
                s2+=j;
                k++;
            }
            j++;
        }
        j=1;
        k=1;
        while(k<=n){
            if(j%2==0){
                s3+=j;
                k++;
            }
            j++;
        }
        printf("%d %d %d %d\n",i,s1,s2,s3);
    }
    return 0;
}