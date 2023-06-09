#include<iostream>
using namespace std;

int main(){
    int test,count=0;
    cin>>test;
    int arr[test];
    for(int i = 0; i<test; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<test; i++){
        if(arr[i]==1){
            count++;
        }
    }
    if(count>=1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    
}