#include<stdio.h>
int main()
{
    int i,num;
    for(i=1;i<=10000;i++){
        scanf("%d",&num);
     if(num==2002){
        printf("Acesso Permitido\n");
        
    }
    else{
        printf("Senha Invalida\n");
    }
    }    
    return 0;
}