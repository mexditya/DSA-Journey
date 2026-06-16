# L004 - If Else

This folder contains basic problems based on conditional statements in C++. These programs helped me understand how decision-making works using `if`, `else if`, and `else`.

## Questions Solved

### 1. Age Check

Takes age as input and categorizes a person into different age groups.

**Logic:**

* Take age as input.
* Compare it with different age ranges.
* Print the appropriate category:

  * Baby
  * Toddler
  * Child
  * Teenager
  * Adult

**What I learned:**

* Using multiple `else if` conditions.
* Working with ranges of values.

**File:** `AgeCheck.cpp`

---

### 2. Even or Odd

Checks whether a number is even or odd.

**Logic:**

* Divide the number by 2 using the modulus operator (`%`).
* If the remainder is 0, the number is even.
* Otherwise, it is odd.

**What I learned:**

* Modulus operator.
* Basic conditional statements.

**File:** `EvenOdd.cpp`

---

### 3. Greater Than

Checks whether A is greater than B.

**Logic:**

* Compare A and B.
* If A is greater than B, print "Yes".
* If A is smaller than B, print "No".
* Otherwise, print "Equal".

**What I learned:**

* Comparison operators.
* Handling multiple outcomes.

**File:** `GreaterThan.cpp`

---

### 4. Package Acceptance

Checks whether a package is accepted based on a minimum requirement of 12 LPA.

**Logic:**

* Take the package value as input.
* If the package is greater than or equal to 12 LPA, accept it.
* Otherwise, reject it.

**What I learned:**

* Applying conditions to real-world scenarios.
* Using comparison operators.

**File:** `Package.cpp`

---

### 5. Pass or Fail

Checks whether a student has passed or failed.

**Logic:**

* Take marks as input.
* If marks are greater than or equal to 33, print "Pass".
* Otherwise, print "Fail".

**What I learned:**

* Decision-making based on cutoff values.
* Simple `if-else` statements.

**File:** `PassFail.cpp`

---

### 6. Positive, Negative or Zero

Determines whether a number is positive, negative, or zero.

**Logic:**

* If the number is less than 0, it is negative.
* If the number is greater than 0, it is positive.
* Otherwise, it is zero.

**What I learned:**

* Number classification using conditions.
* Multi-way decision making.

**File:** `PositiveNegativeZero.cpp`

---

### 7. Sum of Two Numbers

Takes two numbers as input and prints their sum.

**Logic:**

* Take two numbers from the user.
* Add them together.
* Print the result.

**What I learned:**

* Taking multiple inputs.
* Performing arithmetic operations.

**File:** `SumTwoNumbers.cpp`

---

### 8. Vowel or Consonant

Checks whether the entered character is a vowel or a consonant.

**Logic:**

* Compare the character with all vowels (`a`, `e`, `i`, `o`, `u`).
* Check both uppercase and lowercase cases.
* If it matches a vowel, print "Vowel".
* Otherwise, print "Consonant".

**What I learned:**

* Character comparison.
* Using logical OR (`||`) operator.

**File:** `VowelConsonant.cpp`

---

### 9. Days of the Week

Prints the corresponding day of the week based on a number entered by the user.

**Logic:**

* Take a number between 1 and 7.
* Match the number with its corresponding day.
* Print the day name.
* If the number is outside the valid range, print "Invalid Input".

**What I learned:**

* Long `if-else if` chains.
* Mapping values to specific outputs.

**File:** `WeekDays.cpp`
