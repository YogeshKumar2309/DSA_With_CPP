/**
 * ? conditional statement
 *  syntex:
 *    if(condition){
 *        /block of code if condition is true
 *    }
 */

#include <iostream>
using namespace std;

int main () {
  //odd and even
  // int n ;
  // cout << "Enter the number : ";
  // cin >> n;
  // if( n % 2 == 0 ) {
  //   cout << "even";
  // } else {
  //   cout << "odd";
  // }

  //find the character lowercase or uppercase
  char ch;
  cout << "Enter the char : ";
  cin >> ch;

  if( ch <= 'A' && ch >= 'Z') {
    cout << "\"" << ch <<"\"" << " is the Upercase";
  } else {
    cout << "\"" << ch <<"\"" << " is the Lowercase";

  }
  
  return 0;
}