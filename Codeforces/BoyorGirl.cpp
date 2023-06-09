#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str,ans;
    cin>>str;
    int size = str.length();
    int count=0;

    int i;
    sort(str.begin(), str.end());
    for(i=0;i<size;i++){
        if(str[i]!=str[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}