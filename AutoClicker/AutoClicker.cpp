#include <iostream>
using namespace std;
int main()
{
   int total = 0; // current total
   int number = 0; // number of values
   int value  // current value
   // display prompt
   cout << "Enter the number of values to be summed " 
      << "followed by the values: \n";
   cin >> number; // input number of values
   // loop number times
   for ( int i = 1; i <= number; ++i ) 
   {
      cin >> value;
      total += value;
   } // end for 
   // display total
   cout << "Sum of the " << number << " values is " << total << endl;
} // end main
