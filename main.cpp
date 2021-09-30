#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "How many characters do you need?:  ";
  cin >> n;
  char mass1[n];
  cout << "\n __________________________" << endl;

  for (int i=1; i < n+1; i++) {
    cin >> mass1[i];
  }

  cout << "\n __________________________" << endl;

  char x;
  cout << "\n Input character you're looking for:  ";
  cin >> x;
  int count=0;
  
  cout << "\n Character places:   ";
  for (int i=1; i < n+1; i++) {
    if (mass1[i] == x)
     { 
       count++;
       cout << i << "  ";
      }
  }
  cout << "\n Character amount: " << count;

}