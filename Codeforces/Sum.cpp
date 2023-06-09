#include<iostream>
using namespace std;

int main(){
    int num,a,b,c,count=0;
    cin>>num;

    for(int i=1; i<=num; i++){
        cin>>a>>b>>c;
        if(a+b==c||a+c==b||b+c==a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
        return 0;
}