// No help from internet required

#include <string>
#include <iostream>

void swap_elements(int& a, int& b) {
   const int temp = a;
   a = b;
   b = temp;
}

int main() {
   /*
        * IGNORE
        * this piece of code ensures the input from input.txt and outputs in output.txt
    */
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
   /* IGNORE this block */

   int a, b;
   std::cin >> a >> b;


   swap_elements(a, b);
   std::cout << a << " " << b;

   return 0;
}
