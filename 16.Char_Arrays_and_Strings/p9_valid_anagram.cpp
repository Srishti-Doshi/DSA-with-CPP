/*  Valid Anagram
An anagram is a word or phrase formed by rearranging the letters of another word or phrase, using every letter exactly the same number of times.

listen, silent  => true

heart, earth => true

rat, tar => true

cat, car => false

apple, maple => false
*/

#include<iostream>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if(str1.length() != str2.length())
    {
        cout<<"no valid anagram\n";
        return false;
    }

    int count[26] = {0};

    for(int i = 0; i<str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }

    for(int i = 0; i<str2.length(); i++)
    {
        if(count[str2[i] - 'a'] == 0)
        {
            cout<<"not valid anagram\n";
            return false;
        }

        count[str2[i] - 'a']--;
    }

    cout<<"Valid anagram\n";
    return true;
}
// TC = O(n)


int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    isAnagram(str1, str2);

    string str3 = "cat";
    string str4 = "car";
    isAnagram(str3, str4);

    string str5 = "listen";
    string str6 = "silent";
    isAnagram(str5, str6);

    return 0;
}