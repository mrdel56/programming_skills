#include<iostream>
using namespace std;
int main()
{
    int stops,i,enter,exit,max=0,capacity=0;
    cin>>stops;

    for(i=0;i<stops;i++){
        cin>>exit>>enter;

        capacity = (enter - exit) + capacity;
        if(max<capacity){
            max = capacity;
        }
             
    }
    cout<<max;
    
}