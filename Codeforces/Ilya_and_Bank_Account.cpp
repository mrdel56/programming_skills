#include<iostream>
using namespace std;

int main(){
    long long int num;
    cin>>num;
    if(num>=0){
        cout<<num;
    }
    else{
        int lastdigit = num%10;
        int dlt_lastdigit = num/10;//deleted last digit
        
        int last_prevdigit = dlt_lastdigit-(dlt_lastdigit%10)+lastdigit;//deleted last previous digit
        
        if(dlt_lastdigit>last_prevdigit){
            cout<<dlt_lastdigit;
        }
        else{
            cout<<last_prevdigit;
        }
    }
}