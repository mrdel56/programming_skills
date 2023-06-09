#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    string s = "hello";
    int index=0,count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==s[index]){
            index++;
            count++;
        }
    }
    if(count==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}