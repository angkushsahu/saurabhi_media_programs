# Output explanation for the code block provided below 👇🏻

```cpp
// Case 1
void swap1(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

// Case 2
void swap2(int *a, int *b) {
    int *t = a;
    a = b;
    b = t;
}

// Case 3
void swap3(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
   int i = 5,j = 6;
   // For case 1
   swap1(i,j); printf("%d %d",i,j);
   // For case 2
   swap2(&i,&j); printf("%d %d",i,j);
   // For case 3
   swap3(&i,&j); printf("%d %d",i,j);

   return 0;
}
```

## Explanations

- **Case 1:** In this case, the `swap1` function creates local copies of `i` and `j` in the variables `a` and `b` respectively, which are stored in a completely different memory address. Although, the values of `a` and `b` will be swapped, however, the values of `i` and `j` will remain intact.

- **Case 2:** Here, we are passing the addresses of `i` and `j`, and storing them in pointers `a` and `b` respectively. The function swaps the pointers `a` and `b`, however, their values remain unchanged. Therefore, the values of `i` and `j` will not be swapped.

- **Case 3:** In this case, the addresses of `i` and `j` will be passed to the pointers `a` and `b` respectively. The values present at the addresses which are stored by the pointers are being swapped directly. Therefore, the values of `i` and `j` will be swapped.

## Output

```cpp
5 6 // case 1:  ❌ no swapping occurs
5 6 // case 2: ❌ no swapping occurs
6 5 // case 3: ✅ swapping occurs successfully
```
