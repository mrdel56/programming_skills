#include<iostream>
#include<string>

using namespace std;
int main(){
    string str,str1;
    cin>>str;
    int i;
    int size = str.length();
    for(i=0;i<size;i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
                continue;
        }
         
        else{
            str1+='.';
            str1+=tolower(str[i]);
        }
    }
    cout<<str1<<endl;
}