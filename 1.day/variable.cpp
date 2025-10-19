/*
! data types(primitive)
? int 4bytes
? char 
? float
? bool
? double

  ?type casting
  1.inplicite casting (conversion)
  2. explicit casting
     double(5) //5.0

  ? take input
  int age;
  cin >> age;

  ? Operator
  1. Arithmatic (+,-,*,/,%)
    int/int = int
    int/float = float
  2. Relational (<, <=, >, >=, ==, !=)
  3. Logical (||, &&, !)
  4.Unary Operators 
    .Increment++,
    .Decremen--
*/

#include <iostream>
using namespace std;

int main () {
  double num = 10.7;
  cout << sizeof(num);  
  return 0;
}