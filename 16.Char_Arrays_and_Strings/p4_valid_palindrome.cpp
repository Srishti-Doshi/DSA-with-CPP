//Valid Palindrome

#include<iostream>
#include<cstring>
using namespace std;

bool validPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        if(arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    char word1[] = "apple";
    cout<<validPalindrome(word1, strlen(word1))<<endl;
    
    char word2[] = "racecar";
    cout<<validPalindrome(word2, strlen(word2))<<endl;
    
    char word3[] = "madam";
    cout<<validPalindrome(word3, strlen(word3))<<endl;
    
    return 0;
}