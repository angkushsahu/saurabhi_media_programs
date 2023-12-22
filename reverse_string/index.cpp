// No help from internet required

#include <string>
#include <iostream>

// reversing the string inplace for reducing extra memory
void reverse_string(std::string& str) {
   int start = 0, end = str.length() - 1;
   while (start < end) {
      const char ch = str[start];
      str[start] = str[end];
      str[end] = ch;

      start ++; end --;
   }
}

int main() {
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif

   std::string str; std::getline(std::cin, str);
   fflush(stdin); // clearing buffers

   reverse_string(str);
   std::cout << str << std::endl;

   return 0;
}
