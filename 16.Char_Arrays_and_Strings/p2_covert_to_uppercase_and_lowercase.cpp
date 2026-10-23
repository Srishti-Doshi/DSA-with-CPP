#include<iostream>
#include<cstring>   // for strlen()
using namespace std;

void toUpper(char arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')  //Lowercase
        {
            //convert to uppercase
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

void toLower(char arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 'A' && arr[i] <= 'Z')  //Uppercase
        {
            //convert to lowercase
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main()
{
    char word[] = "ApPle";
    toUpper(word, strlen(word));
    cout<<word<<endl;                //APPLE

    char word1[] = "Ap@le";
    toUpper(word1, strlen(word1));
    cout<<word1<<endl;               //AP@LE

    char word2[] = "ApP1e";
    toUpper(word2, strlen(word2));
    cout<<word2<<endl;               //APP1E

    char word3[] = "ApPle";
    toLower(word3, strlen(word3));
    cout<<word3<<endl;                //apple

    char word4[] = "Ap@le";
    toLower(word4, strlen(word4));
    cout<<word4<<endl;               //ap@le

    char word5[] = "ApP1e";
    toLower(word5, strlen(word5));
    cout<<word5<<endl;               //app1e

    return 0;
}