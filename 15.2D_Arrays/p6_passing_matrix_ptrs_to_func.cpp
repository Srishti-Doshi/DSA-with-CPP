//Passing Matrix Pointers to Functions

#include<iostream>
using namespace std;

void func(int mat[][3])
{
 cout<<*(*(mat+1)+2)<<endl;  //6
}

void fun(int (*mat)[3])
{
 cout<<*(*mat)<<endl;  //1
 cout<<*(*(mat+1)+2)<<endl;  //6
}

int main()
{
    int mat[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    func(mat);
    fun(mat);

    return 0;
}