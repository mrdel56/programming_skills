#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cout<<endl;
    cin>>t;
    cout<<endl;
    reverse(t.begin(),t.end());

    if(s==t){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}