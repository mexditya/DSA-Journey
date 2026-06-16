# L013 - Number Problems

This folder contains a collection of number-based problems involving digit manipulation, mathematical properties, binary operations, and common interview questions.

## Questions Solved

### 1. Add Digits Until a Single Digit Remains

Given a number, repeatedly add its digits until only one digit remains.

**Logic:**

* Find the sum of all digits of the number.
* Replace the original number with the obtained sum.
* Repeat the process until the number becomes a single digit.

**What I learned:**

* Nested loops.
* Repeated digit extraction using modulus and division.

**File:** `AddDigits.cpp`

---

### 2. Leap Year Check

Checks whether a given year is a leap year.

**Logic:**

* If the year is divisible by 400, it is a leap year.
* Otherwise, if it is divisible by 4 but not by 100, it is a leap year.
* In all other cases, it is not a leap year.

**What I learned:**

* Applying multiple conditions together.
* Real-world use of logical operators.

**File:** `LeapYear.cpp`

---

### 3. Reverse Integer

Reverses the digits of an integer.

**Logic:**

* Extract digits one by one from the end.
* Build the reversed number.
* Check for overflow before updating the result.
* Return 0 if the reversed value exceeds the 32-bit integer range.

**What I learned:**

* Integer reversal.
* Handling overflow using `INT_MAX` and `INT_MIN`.

**File:** `ReverseInteger.cpp`

---

### 4. Power of Two

Checks whether a number is a power of 2.

**Logic:**

* Start with the value 1.
* Keep multiplying by 2.
* If the generated value becomes equal to the given number, it is a power of 2.
* If it exceeds the number, it is not.

**What I learned:**

* Generating powers using loops.
* Mathematical property checking.

**File:** `PowerOfTwo.cpp`

---

### 5. Square Root of a Number

Finds the integer square root of a non-negative number.

**Logic:**

* Compare the given number with consecutive square values.
* Find the largest integer whose square is less than or equal to the number.
* Return that integer.

**What I learned:**

* Working with square numbers.
* Brute force searching.

**File:** `SquareRoot.cpp`

---

### 6. Palindrome Number

Checks whether a number reads the same forward and backward.

**Logic:**

* Reverse the number.
* Compare the reversed value with the original value.
* If both are equal, the number is a palindrome.

**What I learned:**

* Reusing integer reversal logic.
* Comparing transformed data with the original value.

**File:** `PalindromeNumber.cpp`

---

### 7. Number Complement

Finds the complement of a non-negative integer.

**Logic:**

* Convert the decimal number to binary.
* Flip every bit (0 becomes 1 and 1 becomes 0).
* Convert the complemented binary number back to decimal.
* Print the final result.

**What I learned:**

* Binary manipulation.
* Multi-step number system conversions.
* Understanding bit complements.

**File:** `NumberComplement.cpp`
