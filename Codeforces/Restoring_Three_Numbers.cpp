#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,arr[4],i;
    int max = arr[0];
    for( i = 0; i<4; i++){
        cin>>arr[i];          
    }
     sort(arr,arr+4);
    //  for(i=0; i<4;i++){
    //      cout<< arr[i] << " ";
    //  }
     c= arr[3]-arr[0];
     b= arr[3]-arr[2];
     a= arr[3]-arr[1];
     cout<<a<< " "<<b<<" "<<c;       
    return 0;
}
