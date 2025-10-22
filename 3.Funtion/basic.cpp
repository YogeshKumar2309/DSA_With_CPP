#include <iostream>
using namespace std;

//? Calculate sum of numbers from 1 to N.
void CalSum(int n) {
  int sum = 0;
  for(int i = 0 ; i <= n ; i++){
      sum += i;
    }
    cout << sum;
}
 //? Calculate N Factorial
void CalNFact(int n) { 
    double fact = 1;
    for(int i = 1; i <= n; i++){
      fact *= i;
    }
    cout << fact;
}

//? Calculate sum of digits of a number.
void SumOfDigits(int digit) {
  int sumOfDigit = 0;
  while(digit > 0){
    int lastDigit = digit%10;
    sumOfDigit += lastDigit;
    digit /= 10;
  }
  cout << sumOfDigit;
}

//? Calculate nCr binomial coefficent for n & r
int fact(int n){
  double fact = 1;
  for(int i = 1; i <= n; i++){
    fact *= i;
  }
  return fact;
}

void nCr (int n, int r) {
  int factN = fact(n);
  int factR = fact(r);
  int factNR = fact(n -r);
  int NCR = factN/(factR * factNR);
  cout << NCR;  
}

int main () {
    // CalSum(10);
    // CalNFact(4);
    // SumOfDigits(2319);
    nCr(5,2);   
   
  return 0;
}