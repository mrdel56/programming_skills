#include<iostream>
using namespace std;
int main()
{
    int num,testcase,i,newNum;
    cin>>num;
    cin>>testcase;
    
    for(i=1;i<=testcase;i++){
        int last_digit=num%10;
        if(last_digit>0){
            num--;
        }
        else{
            num=num/10;
        }
    }
    cout<<num;
}    
    
     
