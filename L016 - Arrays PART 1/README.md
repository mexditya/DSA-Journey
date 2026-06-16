# L016 - Arrays Basics

This folder contains introductory array problems. These programs helped me understand array traversal, searching, finding extreme values, and working with multiple elements efficiently.

## Questions Solved

### 1. Find the Minimum Element in an Array

Finds the smallest element along with its index and position.

**Logic:**

* Assume the first element is the minimum.
* Traverse the array and compare each element with the current minimum.
* Update the minimum value, index, and position whenever a smaller element is found.

**What I learned:**

* Array traversal.
* Tracking minimum values.

**File:** `MinimumElement.cpp`

---

### 2. Find the Maximum Element in an Array

Finds the largest element along with its index and position.

**Logic:**

* Assume the first element is the maximum.
* Traverse the array and compare each element with the current maximum.
* Update the maximum whenever a larger element is found.

**What I learned:**

* Array traversal.
* Tracking maximum values.

**File:** `MaximumElement.cpp`

---

### 3. Sum of Array Elements

Calculates the sum of all elements in an array.

**Logic:**

* Initialize a sum variable as 0.
* Traverse the array.
* Add each element to the running sum.

**What I learned:**

* Accumulation using arrays.
* Input and traversal together.

**File:** `ArraySum.cpp`

---

### 4. Average of Array Elements

Calculates the average of all elements in an array.

**Logic:**

* Find the sum of all array elements.
* Divide the sum by the number of elements.
* Store the result in a floating-point variable.

**What I learned:**

* Working with averages.
* Type casting and floating-point division.

**File:** `ArrayAverage.cpp`

---

### 5. Linear Search

Searches for a given element in an array.

**Logic:**

* Traverse the array from beginning to end.
* Compare each element with the target value.
* If found, print its index.
* Otherwise, indicate that the element is not present.

**What I learned:**

* Linear search.
* Sequential searching in arrays.

**File:** `LinearSearch.cpp`

---

### 6. Store and Print Alphabets using Array

Stores characters from 'a' to 'z' in an array and prints them.

**Logic:**

* Create a character array of size 26.
* Fill it with letters from 'a' to 'z'.
* Traverse the array and print each character.

**What I learned:**

* Character arrays.
* ASCII-based character generation.

**File:** `AlphabetArray.cpp`

---

### 7. Second Largest Element

Finds the second largest element in an array of unique elements.

**Logic:**

* Initialize largest and second largest values.
* Traverse the array.
* Update both values whenever a larger element is found.
* Keep track of the second largest separately.

**What I learned:**

* Maintaining multiple extreme values.
* Single-pass array processing.

**File:** `SecondLargest.cpp`

---

### 8. Third Smallest Element

Finds the third smallest element in an array of unique elements.

**Logic:**

* Initialize smallest, second smallest, and third smallest values.
* Traverse the array.
* Update the values whenever a smaller element is encountered.
* Maintain the correct ordering throughout the traversal.

**What I learned:**

* Tracking multiple minimum values.
* Careful value shifting during updates.

**File:** `ThirdSmallest.cpp`
