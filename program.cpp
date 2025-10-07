#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci using if-else
int fibonacci(int x) {
   if (x == 0 || x == 1) {
       return x; 
   } else {
       return fibonacci(x - 1) + fibonacci(x - 2); 
   }
}

int main() {
   
   int terms = 10; 
   cout << "Fibonacci Series using recursion and if-else: ";
   for (int i = 0; i < terms; i++) {
       cout << fibonacci(i) << " ";
   }

   return 0;
}