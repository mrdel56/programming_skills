#include<iostream>
using namespace std;

int main(){
    int num,a,b,c,d;
    cin>>num;

    for(int i =0; i<num; i++){
        cin>>a>>b>>c>>d;
        int count1=0;
        if(a<b){
            count1++;
        }
        if(a<c){
            count1++;
        }
        if(a<d){
            count1++;
        }
        cout<<count1<<endl;
    }
    return 0;
}