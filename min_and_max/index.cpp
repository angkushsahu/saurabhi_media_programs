// No help from internet required

#include <climits>
#include <iostream>
#define pair std::pair

pair<int, int> min_and_max(int arr[], const int& size) {
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < size; i ++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    pair<int, int> min_and_max_elements = { max, min };
    return min_and_max_elements;
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

   int size; std::cin >> size;
   int arr[size] = { 0 };
   for (int i = 0; i < size; i ++)
        std::cin >> arr[i];

    const pair<int, int> min_and_max_elements = min_and_max(arr, size);
    std::cout << "Max element: " << min_and_max_elements.first << "\n"
              << "Min element: " << min_and_max_elements.second << std::endl;

    return 0;
}
