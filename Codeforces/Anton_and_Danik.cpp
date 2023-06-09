#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n;
    cin>>str;
    int count1=0,count2=0;
    for(int i = 0; i<str.size();i++){
        if(str[i]=='A'){
            count1++;
        }
        else if(str[i]=='D'){
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Anton"<<endl;
    }
    else if(count1<count2){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}