#  CSE 332 Studio Session on C++ Functions
## Part I: Required Exercises
### 3. Factorial by Loop and Recursion
Declare (in your new header file) and define (in your new source file) a function that takes an unsigned integer by value as its only argument, uses a loop to compute an unsigned integer that is the factorial (please see [wikipedia](http://en.wikipedia.org/wiki/Factorial)) of the argument that was passed to it, and returns that result by value. Call this function from your main function with several different input values and print out (and save a copy of) what the function’s inputs and outputs were. Rewrite the function so that instead of using a loop the function calls itself recursively to compute the factorial. Run the same set of trials using the new recursive version of the function, and as the answer to this exercise (1) show the inputs and outputs for both versions of the function, and (2) indicate whether or not they were the same. 

```c++
int factorial_loop(unsigned int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int factorial_recursion(unsigned int n) {
    if (n == 1) return 1;
    else return n * factorial_recursion(n - 1);
}
```

### 4. Pass result by reference
Rewrite the function from the previous exercise so that 

(1) instead of returning an unsigned integer by value it has a void return type

(2) in addition to taking an unsigned integer by value (which contains the number whose factorial is being computed) the function also takes a second argument of type unsigned integer by reference, and puts the result of the factorial computation into that second argument.

In your main function, declare an unsigned integer variable to hold the result, and call the function as you did in the previous exercises, but passing that variable as the second argument to the function. Please describe how you modified your function, and the value of that variable that was produced by each call to the function, with different inputs as in the previous exercise.

> The values of result produced by each call are the same. 

```c++
void factorial_ref(unsigned int n, unsigned int &res) {
    unsigned ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    res = ans;
}

int main(int argc, const char * argv[]) {
    unsigned int trials[5] = {4, 5, 6, 7, 8};
    for (int i = 0; i < 5; i++) {
        cout << "n = " << i << endl;
        cout << "recursion result = " << factorial_recursion(trials[i]) << endl;
        unsigned int res;
        factorial_ref(trials[i], res);
        cout << "by reference result = " << res << endl;
    }
    return 0;
}
```

### 5. Pass result by pointer
Modify your solution to the previous exercise so that for the second argument it takes a pointer to an unsigned integer by value, instead of taking an unsigned integer by reference. As the answer to this exercise, please explain what you had to do to make your solution work correctly.













