/* Matt Hopps
 * CECS 282 Lab 4
 * March 10th, 2015
 */
#include <iostream>
#include <string>
using namespace std;

#include "Rational.h"

Rational::Rational() : mNumerator(0), mDenominator(1) { }

Rational::Rational(int numerator, int denominator)
 : mNumerator(numerator), mDenominator(denominator) {
   Normalize();
}

const int &Rational::GetNumerator() const {
   return mNumerator;
}

void Rational::SetNumerator(const int &newNumerator) {
   mNumerator = newNumerator;
   Normalize();
}

const int &Rational::GetDenominator() const {
   return mDenominator;
}

void Rational::SetDenominator(const int &newDenominator) {
   mDenominator = newDenominator;
   Normalize();
}

void Rational::Normalize() {
   if (mDenominator < 0) {
      mNumerator *= -1;
      mDenominator *= -1;
   }
   
   if (mDenominator != 0) {
      int greatest = gcd(abs(mNumerator), abs(mDenominator));
      if (greatest != 1) {
         mNumerator /= greatest;
         mDenominator /= greatest;
      }
   }
}

const int Rational::gcd(int n, int d) const {
   return d == 0 ? n : gcd(d, n % d);
}

bool Rational::Equals(const Rational &other) const {
   return mNumerator == other.mNumerator && mDenominator == other.mDenominator;
}

Rational Rational::Add(const Rational &other) const {
   int n1 = mNumerator * other.mDenominator;
   int n2 = other.mNumerator * mDenominator;
   int d = mDenominator * other.mDenominator;
   return Rational(n1 + n2, d);
}

const string Rational::ToString() const {
   //return to_string(GetNumerator()) + " / " + to_string(GetDenominator());
   string str;
   str += to_string(GetNumerator());
   str += (GetDenominator() != 0 ? " / " + to_string(GetDenominator()) : "");
   return str;
}
