# L017 - Array Operations

This folder contains array-based problems involving searching, reversing, rotation, and sequence generation. These programs helped me understand how to manipulate array elements efficiently and solve common array interview questions.

## Questions Solved

### 1. Search an Element in an Array

Checks whether a given element is present in the array.

**Logic:**

* Traverse the array from beginning to end.
* Compare each element with the target value.
* If found, print its index and position.
* Otherwise, print that the element is not present.

**What I learned:**

* Linear Search.
* Sequential traversal of arrays.

**File:** `SearchElement.cpp`

---

### 2. Reverse an Array using Extra Array

Reverses an array with the help of another array.

**Logic:**

* Store elements in a second array in reverse order.
* Copy the reversed elements back into the original array.
* Print the updated array.

**What I learned:**

* Array indexing.
* Reversing data using auxiliary space.

**File:** `ReverseArrayUsingExtraArray.cpp`

---

### 3. Reverse an Array without Extra Array

Reverses an array in-place.

**Logic:**

* Swap the first element with the last.
* Move towards the center from both ends.
* Continue until the middle of the array is reached.

**What I learned:**

* Two-pointer approach.
* In-place array manipulation.

**File:** `ReverseArray.cpp`

---

### 4. Find the Missing Element

Finds the missing number from an array containing distinct elements from 1 to n.

**Logic:**

* Calculate the sum of numbers from 1 to n.
* Subtract every array element from this sum.
* The remaining value is the missing element.

**What I learned:**

* Mathematical optimization.
* Using formulas to reduce unnecessary searching.

**File:** `MissingElement.cpp`

---

### 5. Fibonacci Number at a Given Position

Finds the Fibonacci number at a specified position using an array.

**Logic:**

* Store Fibonacci numbers in an array.
* Generate each next term using the previous two terms.
* Stop when the required position is reached.
* Print the value at that position.

**What I learned:**

* Dynamic sequence generation.
* Building values using previous results.

**File:** `FibonacciAtPosition.cpp`

---

### 6. Rotate an Array by One Position

Rotates an array by one position towards the right.

**Logic:**

* Store the last element temporarily.
* Shift all other elements one position to the right.
* Place the stored element at the beginning.

**What I learned:**

* Element shifting.
* Basic array rotation techniques.

**File:** `RotateArrayByOne.cpp`
