#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a = 0, b = 0, i;
    string s;
    cin >> s;

    for (i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            a++;
        }
    }
    
    for (i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            b++;
        }
    }
    if (islower(s[0]) && a == 0)
    {
        s[0] = toupper(s[0]);
        for (i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }

        ++-
    }
    if (b == s.size())
    {
        for (i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s;
    }
    else
    {
        cout << s;
    }
}