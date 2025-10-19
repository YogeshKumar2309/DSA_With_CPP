//? Sum of all numbers from 1 to N which are divisible by 3.
// #include <iostream>
// using namespace std;

// int main() {
//   int n = 10;
//   int sum = 0;
//   for(int i = 1; i <= n; i++){
//     if( i % 3 == 0) {
//       sum += i;
//     }
//   }
//   cout << sum;
//   return 0;
// }
//? Print Factorial of a number N
#include <iostream>
using namespace std;

int main() {
  int n = 0;
  double fact = 1;
  if( n == 0) fact = 0;
  for(int i= 2; i <= n; i++){
    fact *= i;
  }
  cout << "fact: " << fact;
  return 0;
}