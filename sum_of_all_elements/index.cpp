// No help from internet required

#include <iostream>

void compute_sum(int a[], int b[], const int& size) {
    int sum = 0;
    for (int i = 0; i < size; i ++)
        sum += a[i];

    for (int i = 0; i < size; i ++)
        b[i] = sum - a[i];
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

    // start here
   int size; std::cin >> size;
   int a[size] = { 0 };
   for (int i = 0; i < size; i ++)
        std::cin >> a[i];

   int b[size] = { 0 };

   compute_sum(a, b, size);
   for (int i = 0; i < size; i ++)
      std::cout << b[i] << ' ';
    std::cout << std::endl;

    return 0;
}
