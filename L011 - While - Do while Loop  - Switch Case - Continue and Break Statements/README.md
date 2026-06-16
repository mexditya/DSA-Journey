# L011 - While Loop, Do-While Loop & Switch Case

This folder contains problems based on `while` loops, `do-while` loops, `switch` statements, and control flow statements like `break` and `continue`.

## Questions Solved

### 1. Print Numbers from 1 to n

Prints all numbers from 1 to n using a while loop.

**Logic:**

* Start from 1.
* Print the current number.
* Increment it until it reaches n.

**What I learned:**

* Basic usage of the `while` loop.
* Loop initialization and termination.

**File:** `Print1ToN.cpp`

---

### 2. Multiplication Table

Prints the multiplication table of a given number.

**Logic:**

* Start a counter from 1.
* Multiply the number by the counter.
* Repeat until 10 multiples are printed.

**What I learned:**

* Repetition using loops.
* Generating number sequences.

**File:** `MultiplicationTable.cpp`

---

### 3. Factors of a Number

Prints all factors of a given number.

**Logic:**

* Check every number from 1 to n.
* If the number divides n completely, print it.
* Continue until all possible factors are checked.

**What I learned:**

* Divisibility checks.
* Loop-based searching.

**File:** `Factors.cpp`

---

### 4. Odd and Even Numbers from 1 to n

Prints all odd numbers and all even numbers separately.

**Logic:**

* Traverse numbers from 1 to n.
* Check each number using the modulus operator.
* Print odd and even numbers in separate loops.

**What I learned:**

* Filtering values using conditions.
* Reusing loop variables.

**File:** `OddEvenNumbers.cpp`

---

### 5. Print Numbers from 1 to n using Do-While

Prints numbers from 1 to n using a do-while loop.

**Logic:**

* Print the current number first.
* Increment the counter.
* Continue while the condition remains true.

**What I learned:**

* Difference between `while` and `do-while`.
* Guaranteed first execution in a do-while loop.

**File:** `Print1ToNDoWhile.cpp`

---

### 6. Days of the Week using Switch Case

Prints the day corresponding to a given number.

**Logic:**

* Take a number between 1 and 7.
* Use a switch statement to match the value.
* Print the corresponding day.

**What I learned:**

* Using `switch` as an alternative to long if-else chains.
* Importance of the `break` statement.

**File:** `WeekDaysSwitch.cpp`

---

### 7. Even Numbers using While and Do-While

Prints all even numbers from 1 to n using both loops.

**Logic:**

* Traverse from 1 to n.
* Check whether a number is divisible by 2.
* Print even numbers using both approaches.

**What I learned:**

* Comparing while and do-while loops.
* Reusing the same logic with different loop structures.

**File:** `EvenNumbersWhileDoWhile.cpp`

---

### 8. Factorial using While and Do-While

Calculates the factorial of a number using both loops.

**Logic:**

* Start with factorial = 1.
* Multiply it by every number from 1 to n.
* Repeat once using a while loop and once using a do-while loop.

**What I learned:**

* Accumulation patterns.
* Practical use of loops in calculations.

**File:** `FactorialWhileDoWhile.cpp`

---

### 9. Numbers Not Divisible by 3 and 5

Prints numbers from 1 to n that are not divisible by 3 or 5.

**Logic:**

* Traverse all numbers from 1 to n.
* Skip numbers divisible by 3 or 5 using `continue`.
* Print the remaining numbers.

**What I learned:**

* Using the `continue` statement.
* Controlling loop execution flow.

**File:** `NotDivisibleBy3And5.cpp`

---

### 10. Month Name using Switch Case

Prints the corresponding month name for a given number.

**Logic:**

* Take a number between 1 and 12.
* Match it using a switch statement.
* Print the corresponding month.
* Print an error message for invalid inputs.

**What I learned:**

* Large switch-case structures.
* Handling invalid cases using `default`.

**File:** `MonthName.cpp`

---

### 11. Print Capital and Small Letters

Prints all uppercase letters followed by all lowercase letters.

**Logic:**

* Start from 'A' and continue till 'Z'.
* Start from 'a' and continue till 'z'.
* Print each character using a while loop.

**What I learned:**

* Character iteration.
* Character ordering in ASCII.

**File:** `AlphabetSeries.cpp`

---

### 12. Prime Number Check using While Loop

Checks whether a number is prime or not.

**Logic:**

* Check divisibility from 2 to n-1.
* If any divisor is found, stop the loop using `break`.
* If no divisor is found, the number is prime.

**What I learned:**

* Using `break` for early termination.
* Prime number validation.

**File:** `PrimeCheck.cpp`
