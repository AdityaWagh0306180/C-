#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string s, string t)
{
    int i=0,j=0;
    while(i < s.length() && j < t.length())
    {
        if(s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return i==s.length();
}
int main()
{
    string s,t;
    cout<<"Enter the string 's': ";
    cin>>s;
    cout<<"Enter the string 't': ";
    cin>>t;

    if(isSubsequence(s,t))
    {
        cout<<"'"<<s<<"'is a subsequence'"<< t<<endl;

    }
    else
    {

        cout<<"'"<<s<<"'is not a subsequence of'"<<t<<endl;
    }
    return 0;
}
