#include <stdio.h>
int main()

{
    int i,n,ex,C=0,R=0,S=0,total=0;
    char c;
    double a,b,d;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %c",&ex,&c);
        if(c=='C'){
            C+=ex;
        }        
       else if (c=='R'){
           R+=ex;
       }
       else{
           S+=ex;
       }
      total = C+R+S;
    a=(C*100.00)/total;
    b=(R*100.00)/total;
    d=(S*100.00)/total; 
    }
    
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %\n",a);
    printf("Percentual de ratos: %.2lf %\n",b);
    printf("Percentual de sapos: %.2lf %\n",d);   
    return 0;
 }