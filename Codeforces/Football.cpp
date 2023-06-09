#include<iostream>
#include<string>
using namespace std;

int main() {
    int count=0;
    string s;
    cin>>s;

    for(int i=0; i<s.size();i++){
        if(s[i]=='1'&&s[i+1]=='1'||s[i]=='0'&&s[i+1]=='0'){

            count++;
        }
        else{
            count = 0;
        }
        if(count>=6){
            break;
        }      
    }
    if(count>=6){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}