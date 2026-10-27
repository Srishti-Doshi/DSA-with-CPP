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

int getVowelCount(string str)
{
    int vowCount = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowCount++;
        }
    }
    return vowCount;
}

int main()
{
    string str1 = "AppLe";
    cout<<countLowecaseVowels(str1, str1.length())<<"\n";
    cout<<getVowelCount(str1)<<"\n";

    string str2 = "abcDe";
    cout<<countLowecaseVowels(str2, str2.length())<<"\n";
    cout<<getVowelCount(str2)<<"\n";

    string str3 = "BaNaNaNaNa";
    cout<<countLowecaseVowels(str3, str3.length())<<"\n";
    cout<<getVowelCount(str3)<<"\n";

    return 0;
}