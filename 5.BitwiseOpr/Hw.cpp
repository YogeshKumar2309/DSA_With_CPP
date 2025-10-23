//? Sove for
/**
 * 6 & 10 = 2
 * 1 | 10 = 11
 * 6 ^ 10 = 12
 *
 * 10 << 2 = 40
 * 10 >> 1 = 5
 */

#include <iostream>
using namespace std;

//? Figure out how to find if a number is power of 2 wihtout any loop.
bool isPowerOf2(int n){
  return (n > 0) && ((n & (n - 1)) == 0);
}

//? WAF to reverse an Integer n.
int reverseInteger(int n){
  int rev = 0;
  while(n != 0){
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
  }
  return rev;
}

int main()
{
  int n = 8;

  if (isPowerOf2(n))
    cout << n << " is a power of 2" << endl;
  else
    cout << n << " is NOT a power of 2" << endl;

  // cout << reverseInteger(54321);
  return 0;
}
