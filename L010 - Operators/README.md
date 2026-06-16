# L010 - Logical Operators

This folder contains basic problems based on logical operators in C++. These programs helped me understand how conditions can be combined using `&&` (AND) and `||` (OR) to make decisions.

## Questions Solved

### 1. Swimming Temperature Check

Checks whether the given temperature is suitable for swimming.

**Logic:**

* Take temperature as input.
* Check if it is greater than 70 and less than 90.
* If both conditions are true, print that it is suitable for swimming.
* Otherwise, print that it is not suitable.

**What I learned:**

* Using the logical AND (`&&`) operator.
* Checking whether a value lies within a range.

**File:** `SwimmingTemperature.cpp`

---

### 2. Positive Even Number Check

Checks whether a number is both positive and even.

**Logic:**

* Check if the number is divisible by 2.
* Check if the number is greater than or equal to 0.
* If both conditions are true, print "YES".
* Otherwise, print "NO".

**What I learned:**

* Combining multiple conditions using `&&`.
* Applying more than one check in a single `if` statement.

**File:** `PositiveEven.cpp`

---

### 3. Teenager Check

Checks whether a person's age falls in the teenager category.

**Logic:**

* Take age as input.
* Check if age lies between 13 and 19 (inclusive).
* If true, print "Teenager".
* Otherwise, print "Not Teenager".

**What I learned:**

* Range-based conditions.
* Inclusive boundary checking.

**File:** `Teenager.cpp`

---

### 4. Greater Than Either Number

Checks whether `a` is greater than `b` or `c`.

**Logic:**

* Take three numbers as input.
* Check if `a > b` OR `a > c`.
* If either condition is true, print "YES".
* Otherwise, print "NO".

**What I learned:**

* Using the logical OR (`||`) operator.
* Understanding situations where only one condition needs to be true.

**File:** `GreaterThanEither.cpp`
