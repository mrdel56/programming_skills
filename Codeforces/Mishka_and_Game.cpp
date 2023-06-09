#include<iostream>
using namespace std;

int main(){
    int test,count1=0,count2=0,m,c;
    cin>>test;

    for(int i=0;i<test;i++){
        cin>>m>>c;
        if(m>c){
            count1++;
        }
        else if(m<c){
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Mishka";
    }
    else if(count1<count2){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}