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

    return 0;
}