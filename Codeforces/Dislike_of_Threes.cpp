#include<iostream>
using namespace std;

int main(){
    int test;
    cin>> test;

    while(test--){
        int k;
        cin>>k;
        for(int i = 0; i<=1666; i++){
            if(i%3==0 || i%10==3){
                continue;
            }
            else{
                --k;
                if(k==0){
                    cout<<i<<endl;
                }
            }
        }
        
    }
    return 0;
}