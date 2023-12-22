// No help from internet required

#include <climits>
#include <iostream>

class Stack {
    private:
    static const int maximum_size = 100; // taking 100 elements to be the maximum size of the stack
    int arr[maximum_size];
    int top;

    public:
    Stack() {
        top = -1;
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top == maximum_size - 1;
    }

    void push(int value) {
        if (is_full()) {
            std::cout << "Stack overflow" << std::endl;
            return;
        }
        top ++;
        arr[top] = value;
    }

    int pop() {
        if (is_empty()) {
            std::cout << "Stack underflow. There are no elements present in the stack to be popped" << std::endl;
            return INT_MIN;
        }
        int popped_element = arr[top];
        top --;
        return popped_element;
    }

    int peek() {
        if (is_empty()) {
            std::cout << "Empty stack" << std::endl;
            return INT_MIN;
        }
        return arr[top];
    }
};

int main() {
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif

    Stack stack_instance;

    stack_instance.push(1);
    stack_instance.push(2);
    stack_instance.push(3);

    std::cout << "Top element: " << stack_instance.peek() << std::endl;

    stack_instance.pop();
    stack_instance.pop();

    std::cout << "Top element after two pops: " << stack_instance.peek() << std::endl;

    stack_instance.pop();
    stack_instance.pop(); // cannot pop any further -> "Stack underflow"

    return 0;
}
