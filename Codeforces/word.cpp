#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,str1;
    cin>>str;
    int uppercase=0, lowercase=0,i;
    int size = str.length();

    for( i=0;i<size;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            uppercase++;
        }
        else{
            lowercase++;
        }       
    }
    for(i=0;i<size;i++){
        if(uppercase>lowercase){
        str1+=toupper(str[i]);
    }
        else if(uppercase<=lowercase){
        str1+=towlower(str[i]);
    }
    }
    
    cout<<str1<<endl;
}