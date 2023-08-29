#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    bool Isanagram;

    if(s1.length()==s2.length())
    {
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s1.length();j++)
            {
                if(s1[i]==s2[j])
                {
                    Isanagram=true;
                    break;
                }
                else
                {
                    Isanagram=false;
                }

            }
            if(Isanagram==false)break;
        }
        if(Isanagram==true)
            cout<<"This is anagram ";
        else
            cout<<"This is not anagram";
    }
    else
    {
        cout<<"Two string are not same So this not anagram..";
    }
}
