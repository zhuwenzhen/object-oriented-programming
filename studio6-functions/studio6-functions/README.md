#  CSE 332 Studio Session on C++ Functions
## Part I: Required Exercises
### 3
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
