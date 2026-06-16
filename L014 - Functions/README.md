# L014 - Functions

This folder contains basic problems based on functions in C++. These programs helped me understand function creation, return values, parameter passing, and call by reference.

## Questions Solved

### 1. Prime Number and Factorial using Functions

Checks whether a number is prime and also calculates its factorial using separate functions.

**Logic:**

* Create a function to check divisibility and determine whether a number is prime.
* Create another function to calculate factorial using a loop.
* Call both functions from `main()` and display the results.

**What I learned:**

* Creating multiple functions in the same program.
* Returning values from functions.
* Code reusability.

**File:** `PrimeAndFactorial.cpp`

---

### 2. Sum of Two Numbers

Calculates the sum of two numbers using a function.

**Logic:**

* Pass two numbers as arguments.
* Add them inside the function.
* Return the result to the calling function.

**What I learned:**

* Function parameters and return values.
* Separating logic from `main()`.

**File:** `SumOfTwoNumbers.cpp`

---

### 3. Cube of a Number

Finds the cube of a number using a function.

**Logic:**

* Pass the number to the function.
* Multiply the number by itself three times.
* Return the cube.

**What I learned:**

* Mathematical operations inside functions.
* Returning computed values.

**File:** `CubeOfNumber.cpp`

---

### 4. Swap Two Numbers using Function

Swaps two numbers using call by reference.

**Logic:**

* Pass variables by reference using `&`.
* Store one value in a temporary variable.
* Exchange the values.
* Changes reflect directly in the original variables.

**What I learned:**

* Call by reference.
* Modifying original variables through functions.

**File:** `SwapTwoNumbers.cpp`

---

### 5. Cyclic Swap of Three Numbers

Moves the value of `a` into `b`, `b` into `c`, and `c` into `a`.

**Logic:**

* Store one value temporarily.
* Shift values in a cyclic manner.
* Update all three variables through references.

**What I learned:**

* Working with multiple reference parameters.
* Value rotation logic.

**File:** `CyclicSwap.cpp`

---

### 6. Swap Two Numbers without Extra Variable

Swaps two numbers without using a temporary variable.

**Logic:**

* Add both numbers and store the result in one variable.
* Use subtraction to recover the original values in reversed order.
* Print the swapped values.

**What I learned:**

* Swapping using arithmetic operations.
* Alternative approaches to common problems.

**File:** `SwapWithoutTemp.cpp`
