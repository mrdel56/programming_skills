#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    while(true){
        year+=1;
        int a = year/1000;//get first digit
        int b = year/100%10;//get 2nd digit
        int c = year/10%10;//get 3rd digit
        int d = year%10;//get 4th digit

        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            cout<<year;
            break;
        }
    }
}