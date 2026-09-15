#include<iostream>
using namespace std;

int main()
{
   /*
   Data types : bool, char, int, float,  double, long double, void
   Data Type Modifiers => alters the meaning of existing data types

   long
   short
   signed
   unsigned
   long long
   */

   //with int

   cout<<sizeof(int)<<endl;   // 4 bytes
   cout<<sizeof(long)<<endl; // int can be omitted => it mean same as long int
   cout<<sizeof(long int)<<endl;  // 4 bytes on windows else 8 bytes
   cout<<sizeof(long long int)<<endl;  // 8 bytes
   cout<<sizeof(short int)<<endl;   // 2 bytes
   cout<<sizeof(signed int)<<endl;  //same as int ( stores both +ve and -ve numbers)
   cout<<sizeof(unsigned int)<<endl;  // 4 bytes

   //with char
   cout<<sizeof(char)<<endl;           // 1 bytes
   cout<<sizeof(signed char)<<endl;    //1   // range -128(-2^7) to 127 (2^7 - 1)
   cout<<sizeof(unsigned char)<<endl;  //1   // 0 to 255(2^8)

   //with double
   cout<<sizeof(double)<<endl;  // 8
   cout<<sizeof(long double)<<endl;  // 8/12/16 bytes

}