#include<iostream>
using namespace std;
int main()
{
    int testcase,a,b,i,min_num;
    cin>>testcase;
    for(i = 0; i<testcase; i++)
    {
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            min_num = b-(a%b);
            cout<<min_num<<endl;
        }
        
    }
    return 0;
}