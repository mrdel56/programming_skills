#include<iostream>
using namespace std;

int main(){
    int n,live,capcisity,free,count=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>live  >> capcisity;
        
        free = capcisity - live;
        if(free>=2){
            count++;
        }       
    }
    cout<<count;
    return 0;
}