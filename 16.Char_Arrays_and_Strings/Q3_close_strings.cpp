/*
Determine if Two Strings Are Close

Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb

Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)

You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.



Example 1:
Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"

Example 2:
Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.

Example 3:
Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"


Constraints:
1 <= word1.length, word2.length <= 105
word1 and word2 contain only lowercase English letters.
*/

#include <iostream>
using namespace std;

#include <algorithm> //for sort()

bool isStrClose(string word1, string word2)
{
    // check if length of word1 and word2 is equal
    if (word1.length() != word2.length())
    {
        return false;
    }

    // check if both words contain same characters
    bool present1[26] = {false};
    bool present2[26] = {false};

    for (int i = 0; i < word1.length(); i++)
    {
        present1[word1[i] - 'a'] = true;
        present2[word2[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (present1[i] != present2[i])
        {
            return false;
        }
    }

    // check frequencies of chracters
    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < word1.length(); i++)
    {
        freq1[word1[i] - 'a']++;
        freq2[word2[i] - 'a']++;
    }

    sort(freq1, freq1 + 26); // sort(start, end)  => end is the position just after the last element to sort.
    sort(freq2, freq2 + 26);

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }

    return true;
}
/*
logic:

Check lengths: If the lengths differ, return false.

Check character presence: present1 and present2 ensure both strings contain the same distinct characters.

Count frequencies: freq1 and freq2 store the frequency of each letter.

Sort frequencies: Sorting allows frequencies to match even when their associated characters differ.

Compare sorted frequencies: If any frequency differs, return false. Otherwise, return true.
*/

// TC = O(n), SC = O(1)

// Improved version: combine check
bool closeStrings(string word1, string word2)
{
    // Step 1: Both strings must have the same length
    if (word1.length() != word2.length())
    {
        return false;
    }

    // Step 2: Count the frequency of each character (a-z)
    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < word1.length(); i++)
    {
        freq1[word1[i] - 'a']++;
        freq2[word2[i] - 'a']++;
    }

    // Step 3: Check whether both strings contain the same characters
    for (int i = 0; i < 26; i++)
    {
        if ((freq1[i] == 0) != (freq2[i] == 0))
        {
            return false;
        }
    }

     // Step 4: Sort both frequency arrays
    sort(freq1, freq1 + 26);
    sort(freq2, freq2 + 26);

     // Step 5: Compare the sorted frequency collections
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string word1 = "abc", word2 = "bca";
    cout << isStrClose(word1, word2) << "\n";
    cout << closeStrings(word1, word2) << "\n";

    string word3 = "a", word4 = "aa";
    cout << isStrClose(word3, word4) << "\n";
    cout << closeStrings(word3, word4) << "\n";

    string word5 = "cabbba", word6 = "abbccc";
    cout << isStrClose(word5, word6) << "\n";
    cout << closeStrings(word5, word6) << "\n";

    return 0;
}