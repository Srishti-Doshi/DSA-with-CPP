/*
Buddy Strings

You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) amd swap the characaters of these indices.

Return true if possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

Example:
Input: s1 = "bank", s2 = "knab"
Output: true

Examples:
1. Strings already equal:
   s1 = "abc", s2 = "abc"
   Output: true

2. One mismatch:
   s1 = "abc", s2 = "abd"
   Output: false

3. Two mismatches that can be fixed by swapping:
   s1 = "ab", s2 = "ba"
   Output: true

4. Two mismatches that cannot be fixed by swapping:
   s1 = "ab", s2 = "cc"
   Output: false

5. More than two mismatches:
   s1 = "abc", s2 = "bca"
   Output: false

Note: At most one swap means zero or one swap is allowed.

The question wants to check whether two strings can become equal by swapping two characters in only one of the strings, using at most one swap.
*/

#include <iostream>
using namespace std;

//brute force approach => TC : O(n*n)
bool isBuddy(string str1, string str2, int n, int m)
{
    if(n != m)
    {
        return false;
    }

    if(str1 == str2)
    {
        return true;
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            swap(str1[i], str1[j]);
            if(str1 == str2)
            {
                return true;
            }
            else
            {
                swap(str1[i], str1[j]);
            }
        }
    }

    return false;
}

int main()
{
    string str1 = "abc";
    string str2 = "acb";

    cout<<isBuddy(str1, str2, str1.length(), str2.length())<<"\n";

    string str3 = "abc";
    string str4 = "acd";

    cout<<isBuddy(str3, str4, str3.length(), str4.length())<<"\n";

    string str5 = "ab";
    string str6 = "ba";

    cout<<isBuddy(str5, str6, str5.length(), str6.length())<<"\n";

    return 0;
}
