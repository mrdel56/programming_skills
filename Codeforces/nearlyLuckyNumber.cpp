#include<iostream>
using namespace std;
int main()
{
    long long num;
    int last_digit,count=0;
    cin>>num;

     while (num != 0) 
    {              
        last_digit=num%10;
        if(last_digit==4||last_digit==7)
        {
            count++;
        }
        num = num / 10;
    }
     if(count==4||count==7){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
}