// Reverse a char array

#include<iostream>
using namespace std;
#include<cstring>

//TC: O(n/2) = O(n)
void reverse(char word[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<end)
    {
        // swap(word[start], word[end]);
        // start++;
        // end--;
        
        swap(word[start++], word[end--]);
    }
}

int main()
{
    char word1[50] = "apple";
    reverse(word1, strlen(word1));
    cout<<word1<<endl;
    
    char word2[50] = "code";
    reverse(word2, strlen(word2));
    cout<<word2<<endl;

    char word3[50] = {'h', 'e', 'l', 'l', 'o'};
    reverse(word3, strlen(word3));
    cout<<word3<<endl;

    return 0;
}