#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Memory: " << sizeof(int) * 8 << " bits" << endl;

    cout << "Range: "
         << numeric_limits<int>::min()
         << " to "
         << numeric_limits<int>::max()
         << endl;

    return 0;
}