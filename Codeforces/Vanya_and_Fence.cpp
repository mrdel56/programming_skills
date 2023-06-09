#include<iostream>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;
    int count1=0,count2=0;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]<=h){
            count1++;
        }
        else if(arr[i]>h){
            count2+=2;
        }
    }
    cout<<count1+count2;
}