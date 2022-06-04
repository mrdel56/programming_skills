#include<stdio.h>
int main()
{
    int i,testCase,my_possition,lift_position,Waiting_time,position;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        scanf("%d %d",&my_possition,&lift_position);
        if(lift_position>=my_possition)
        {
            Waiting_time = 4*(lift_position)+3*3+5*2;
            printf("Case %d: %d\n",i,Waiting_time);
        }
        else if(my_possition>lift_position)
        {
            position = (my_possition-lift_position)*2+lift_position;
            Waiting_time = (4*position)+3*3+5*2;
            printf("Case %d: %d\n",i,Waiting_time);         
        }
    }
    return 0;
}
