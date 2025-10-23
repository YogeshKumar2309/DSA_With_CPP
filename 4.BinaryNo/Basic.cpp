#include <iostream>
using namespace std;

//? Decimal to Binary
void DecimalToBinary(int decimal)
{
  int binary[32];
  int index = 0;

  if (decimal == 0)
  {
    cout << "0";
    return;
  }

  while(decimal > 0){
    binary[index] = decimal % 2;
    decimal /= 2;
    index++;
  }

  //print the reverse order
  for(int i = index -1; i >= 0; i--){
    cout << binary[i];
  }
}

//? Binary to Decimal
void BinarytoDecimal(long long binary){
  int decimal = 0;
  int base = 1;

  while(binary > 0){
    int lastDigit = binary % 10;
    decimal += (lastDigit * base);
    base *= 2;
    binary /= 10;
  }

  cout << "Decimal: " << decimal;
}

//? Convert -8 to binary & reverse.
void DecimalToNegativeBinary(int num){
    if (num >= 0) {
        cout << "Please enter a negative number only!";
        return;
    }

    int bits = 8;
    int posValue = (1 << bits) + num; // 2^bits + num  → Two's complement

    int binary[32];
    int index = 0;

    while(posValue > 0){
      binary[index++] = posValue % 2;
      posValue /= 2;
    }

    //if bits not completed then fill 0
    while( index < bits) {
      binary[index++] = 0;
    }

    cout << "Binary (" << bits << "-bit): ";
    for(int i = bits - 1; i >= 0; i--){
      cout << binary[i];
    } 
  }


int main()
{
  // DecimalToBinary(105);
  // BinarytoDecimal(101);
  DecimalToNegativeBinary(-5);

  return 0;
}