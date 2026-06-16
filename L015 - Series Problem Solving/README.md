# L015 - Functions Practice

This folder contains function-based problems involving strings, mathematical properties, chessboard logic, and game theory. These problems helped me practice breaking larger problems into smaller reusable functions.

## Questions Solved

### 1. Convert a Sentence to Lowercase

Converts all characters of a sentence into lowercase letters.

**Logic:**

* Read the complete sentence using `getline()`.
* Traverse every character in the string.
* Convert each character to lowercase using `tolower()`.

**What I learned:**

* Working with strings.
* Character-wise traversal.
* Using built-in character functions.

**File:** `LowerCaseSentence.cpp`

---

### 2. Convert Character to Uppercase without Inbuilt Function

Converts a lowercase character to uppercase without using `toupper()`.

**Logic:**

* Check whether the character is already uppercase.
* Use the ASCII difference between lowercase and uppercase letters.
* Convert the character manually.

**What I learned:**

* ASCII character manipulation.
* Character arithmetic.

**File:** `UpperCaseCharacter.cpp`

---

### 3. Armstrong Number Check

Checks whether a number is an Armstrong number.

**Logic:**

* Count the number of digits.
* Extract each digit of the number.
* Raise each digit to the power of total digits.
* Add all values and compare the result with the original number.

**What I learned:**

* Function decomposition.
* Digit manipulation.
* Using the `pow()` function.

**File:** `ArmstrongNumber.cpp`

---

### 4. Count Trailing Zeroes

Finds the number of trailing zeroes in an integer.

**Logic:**

* Start checking digits from the right.
* Count consecutive zeroes.
* Stop when a non-zero digit is found.

**What I learned:**

* Digit extraction using modulus.
* Handling edge cases.

**File:** `TrailingZeroes.cpp`

---

### 5. Rectangle Validation

Checks whether four given sides can form a rectangle.

**Logic:**

* Compare all possible side pair combinations.
* If two sides are equal and the remaining two sides are also equal, a rectangle can be formed.
* Otherwise, it is invalid.

**What I learned:**

* Working with multiple conditions.
* Geometry-based validation problems.

**File:** `RectangleValidation.cpp`

---

### 6. Bishop Moves on a Chessboard

Calculates the total number of moves a bishop can make from a given position.

**Logic:**

* Find the maximum moves possible in all four diagonal directions:

  * Top Left
  * Top Right
  * Bottom Left
  * Bottom Right
* Add the moves from all directions.
* Display the total count.

**What I learned:**

* Problem decomposition using multiple helper functions.
* Coordinate-based calculations.

**File:** `BishopMoves.cpp`

---

### 7. Nim Game

Determines whether the first player can win the Nim Game.

**Logic:**

* Observe the pattern of winning and losing positions.
* If the number of stones is divisible by 4, the first player loses.
* Otherwise, the first player can force a win.

**What I learned:**

* Mathematical pattern recognition.
* Introduction to game theory problems.

**File:** `NimGame.cpp`
