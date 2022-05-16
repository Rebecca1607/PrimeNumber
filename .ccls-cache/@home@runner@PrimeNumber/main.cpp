#include <iostream>
#include <ctime>

using namespace std;
int main() {

int x, y;
bool isPrime = true;

// Check whether a number is prime or not
cout << "\nEnter an interger:  ";
cin >> x;
if (x==0 || x==1) {
  isPrime = false;
}
else {
  for (y = 2; y <=x / 2; ++y) {
    if (x % y == 0) {
      isPrime = false;

    }
  }
}
if (isPrime) 
  cout << x << " is a prime number\n";
else
  cout << x << " is not a prime number\n";
}
