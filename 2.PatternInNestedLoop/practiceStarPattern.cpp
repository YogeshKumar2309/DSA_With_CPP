#include <iostream>
using namespace std;

int main()
{
  /*
   0000
    111
     22
      3
  */
  // int n = 4;
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j <= i; j++){
  //     cout << " ";
  //   }
  //   for(int j = 1; j <= n-i; j++){
  //     cout << i;
  //   }
  //   cout << endl;

  // }

  /**
   * AAAA
   *  BBB
   *   CC
   *    D
   */
  // int n =4;
  // char ch = 'A';
  // for(int i = 0; i < n; i++){
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout << " ";
  //   }
  //   for (int j = n-i; j > 0; j--)
  //   {
  //     cout << ch;
  //   }
  //   cout << "\n";
  //   ch++;

  // }

  /**
   *    1
   *   123
   *  12321
   * 1234321
   */
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for(int j = 1; j <= n - i -1; j++){
  //     cout << " ";
  //   }
  //   for(int j = 1; j <= i; j++){
  //     cout << j;
  //   }
  //   if( i > 1){
  //     for(int j = i - 1; j > 0; j--){
  //       cout << j;
  //     }
  //   }
  //   cout << endl;
  // }

  //?
  // *      *
  // **    **
  // ***  ***
  // ********
  // ***  ***
  // **    **
  // *      *

  // int n = 4;
  // for(int i = 1; i <=n ; i++){
  //   for(int j = 1; j <= i; j++){
  //     cout << "*";
  //   }
  //   for(int j = 1; j <= 2*(n-i); j++){
  //     cout << " ";
  //   }
  //   for(int j = 1; j <= i; j++){
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // for(int i = n -1; i >= 1; i--){
  //   //fet stars
  //   for(int j = 1; j <= i; j++){
  //     cout << "*";
  //   }
  //   //space
  //   for(int j = 1; j <= 2 * (n - i); j++){
  //     cout << " ";
  //   }
  //   //right stars
  //   for(int j  = 1; j <= i; j++){
  //     cout << "*";
  //   }
  //   cout << endl;

  // }

  // hallow diamond pattern
  //?     *
  //?    * *
  //?   *   *
  //?  *     *
  //? *       *
  //?  *     *
  //?   *   *
  //?    * *
  //?     *
  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    // leading space
    for (int j = i; j < n; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= (2 * i) - 1; j++)
    {
      if (j == 1 || j == ((2 * i) - 1))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  // lower half
  for (int i = n - 1; i >= 1; i--)
  {
    // leading spaces
    for (int j = n; j > i; j--)
      cout << " ";

    // stars and hollow sapce
    for (int j = 1; j <= (2 * i) - 1; j++)
    {
      if (j == 1 || j == (2 * i) - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}