#include<iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3, 4};
    cout<<arr1[4]<<endl;  //0
    cout<<arr1[5]<<endl;  //4201136  => some random number

    char arr2[5] = {'a', 'b'};
    cout<<arr2[3]<<endl;  // \n
    cout<<arr2[4]<<endl;  // \n

    char word[20];
    cin >> word;  //Reads one word; stops at whitespace
    cout<<"your word: "<<word<<endl;

    cin.ignore(); // skips one character from the input buffer.

    char sentence[50];
    cin.getline(sentence, 50);   //Reads an entire line, including spaces, until Enter is pressed
    cout<<"your sentence: "<<sentence<<endl;

    char para[50];
    cin.getline(para, 50, ',');   //Reads an entire line, including spaces, until comma(,) is pressed
    cout<<"your para: "<<para<<endl;

    return 0;
}