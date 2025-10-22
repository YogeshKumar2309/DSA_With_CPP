//!HomeWork

#include <iostream>
using namespace std;

//? WAF to check if a number is prime or not.
int checkPrime(int n){
  if(n <= 1) return 0;  
  for(int i = 2; i < n; i++){
    if(n%i == 0){
      return 0;
    }    
  }  
  return 1;
}

//? WAF to print all prime numbers from 2 to N.
void AllPrimeNo(int n){
  int count = 2;
  int primeCount = 0;
while(primeCount < n){
  if(checkPrime(count)){
    cout << count << " ";
    primeCount++;
  }
  count++;
}
}

//? WAF to print nth Fibonacci.
void nthFibonacci(int n){
  int first = 0;
  int second = 1;
  for(int i = 0; i < n; i++){
    cout << first << " ";
    int next = first + second;
    first = second;
    second = next;
  }
}

//? learn switch and one eg.
void printSundayMonday(int n){
  switch (n)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Suturday";
    break;
  case 7:
    cout << "Sunday";
    break;

  default:
    cout << "not match!";
    break;
  }
}

int main(){
  // bool prime = checkPrime(9);
  // if(prime){
  //   cout << "prime";
  // } else {
  //   cout << "NotPrime";
  // }

  // AllPrimeNo(10);

  // nthFibonacci(10);

  printSundayMonday(5);
  return 0;
}