// squere pattarn
#include <iostream>
using namespace std;

int main()
{
  // int n = 14;
  // for(int i = 0; i < n; i++){
  //   char ch = 'A';
  //   for(int j = 0; j < n; j++){
  //     cout << ch << " ";
  //     ch++;
  //   }
  //   cout << "\n";
  // }

  // int n = 3;
  // int num = 1;
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < n; j++){
  //     cout << num << " " ;
  //     num++;
  //   }
  //   cout << "\n";
  // }
  // int n = 3;
  // char ch = 'A';
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++){
  //     cout << ch << " " ;
  //     ch++;
  //   }
  //   cout << "\n";
  // }

  // int n = 5;
  // for(int i = 0; i < n; i++){
  //   for(int j =0; j < i + 1; j++){
  //     cout << "* ";
  //   }
  //   cout << "\n";
  // }

  // int n = 5;
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < i + 1; j++){
  //     cout << i+1;
  //   }
  //   cout << "\n";
  // }

  // int n = 5;
  // char ch = 'A';
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j <= i; j++){
  //     cout << ch << " ";
  //   }
  //   cout << "\n";
  //   ch++;
  // }

  // int n = 5;
  // for(int i = 1; i <= n; i++){
  //   for(int j = 1; j <= i ; j++){
  //     cout << j << " ";
  //   }
  //   cout << "\n";
  // }

  // int n = 5;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j > 0; j--)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << "\n";
  // }

  //? Floyd's Triangle Pattern
  // int n = 5;
  // int num = 1;
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j <= i; j++ ){
  //     cout << num << " ";
  //     num++;
  //   }
  //   cout << "\n";
  // }

  // int n = 5;
  // char ch = 'a';
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j <= i; j++){
  //     cout << ch << " ";
  //     ch++;
  //   }
  //   cout << "\n";
  // }

  int n = 5;
  for (int i = 0; i < n; i++)
  {
    if (i != 0)
    {
      for (int j = 0; j <= i; j++)
      {
        cout << " ";
      }
   
    for (int j = 0; j < n - i; j++)
    {
      cout << i;
    }
     }
    cout << "\n";
  }

  return 0;
}
