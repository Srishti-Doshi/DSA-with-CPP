// Count how many times lowercase vowels occurred in a String entered by the user

#include<iostream>
using namespace std;

int countLowecaseVowels(string str, int n)
{
    int count = 0;

    for(char ch: str)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}
//TC: O(n)

int main()
{
    string str1 = "AppLe";
    cout<<countLowecaseVowels(str1, str1.length());

    string str2 = "abcDe";
    cout<<countLowecaseVowels(str2, str2.length());

    string str3 = "BaNaNaNaNa";
    cout<<countLowecaseVowels(str3, str3.length());

    return 0;
}