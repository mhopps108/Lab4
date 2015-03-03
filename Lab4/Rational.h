/* Matt Hopps
 * CECS 282 Lab 4
 * March 10th, 2015
 */
#ifndef __Rational_H
#define __Rational_H

class Rational {
private:
   int mNumerator;
   int mDenominator;
   // reduces the
   void Normalize();
   const int gcd(int n, int d) const;
public:
   // default constructor
   Rational();
   // constructor with arg, normalizes numerator and denominator
   Rational(int numerator, int denominator);
   // getter and setter for numerator
   const int &GetNumerator() const;
   void SetNumerator(const int &newNumerator);
   // getter and setter for denominator
   const int &GetDenominator() const;
   void SetDenominator(const int &newDenominator);
   
   //
   bool Equals(const Rational &other) const;
   // adds two rational numbers, returns a new Rational
   Rational Add(const Rational &other) const;
   //
   const std::string ToString() const;
};

#endif
