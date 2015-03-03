/* Matt Hopps
 * CECS 282 Lab 4
 * March 10th, 2015
 */
#include <iostream>
using namespace std;
#include "Rational.h"

int main(int argc, const char * argv[]) {
   Rational r1;
   const Rational r2(5, 12);
   
   Rational r3(3, 0);
   cout << "r3 = " << r3.ToString() << endl;
   
   cout << "r2 = " << r2.ToString() << endl;
   
   r1.SetNumerator(48);
   r1.SetDenominator(36);
   
   cout << "r1 = " << r1.ToString() << endl;
   
   cout << "r1 = r2: " << (r1.Equals(r2) ? "True" : "False") << endl;
   
   cout << "r1 + r2 = " << r1.Add(r2).ToString() << endl;
   return 0;
}
