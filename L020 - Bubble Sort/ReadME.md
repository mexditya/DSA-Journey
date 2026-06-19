# L021 - Bubble Sort

This folder contains problems based on the Bubble Sort algorithm. These programs helped me understand how elements are repeatedly compared and swapped until the array becomes sorted.

## Questions Solved

### 1. Bubble Sort (Ascending Order)

Sorts an integer array in increasing order using Bubble Sort.

**Logic:**

* Compare adjacent elements.
* If the left element is greater than the right element, swap them.
* After each pass, the largest element moves to its correct position at the end.
* Repeat until the entire array becomes sorted.
* Use a `swapped` flag to stop early if the array is already sorted.

**What I learned:**

* Working with adjacent comparisons.
* Using swaps to sort elements.
* Optimizing Bubble Sort using a flag.

**File:** `BubbleSortAscending.cpp`

---

### 2. Bubble Sort (Descending Order)

Sorts an integer array in decreasing order using Bubble Sort.

**Logic:**

* Compare adjacent elements.
* If the left element is smaller than the right element, swap them.
* After each pass, larger values move towards the beginning of the array.
* Continue until the array is sorted in descending order.

**What I learned:**

* Modifying comparison conditions.
* Sorting arrays in reverse order.

**File:** `BubbleSortDescending.cpp`

---

### 3. Bubble Sort on Character Array

Sorts a character array in ascending order.

**Logic:**

* Compare adjacent characters using their ASCII values.
* Swap characters whenever they are out of order.
* Continue until all characters are arranged alphabetically.

**What I learned:**

* Character comparison using ASCII values.
* Applying Bubble Sort to different data types.

**File:** `BubbleSortCharacters.cpp`

---

### 4. Bubble Sort (Ascending Order from Right to Left)

Sorts an integer array in increasing order by moving the smallest element towards the beginning in each pass.

**Logic:**

* Start comparisons from the end of the array.
* Compare adjacent elements while moving towards the left.
* Swap whenever the current element is smaller than the previous element.
* After every pass, the smallest element reaches its correct position at the beginning.

**What I learned:**

* Bubble Sort can be implemented from both directions.
* Understanding how smallest and largest elements move during sorting.

**File:** `BubbleSortReverseTraversal.cpp`

---

## Bubble Sort Overview

### How Bubble Sort Works

* Compare adjacent elements.
* Swap them if they are in the wrong order.
* Repeat this process for multiple passes.
* After each pass, one element reaches its correct position.

### Example

Initial Array:

```text
5 1 4 2 8
```

Pass 1:

```text
1 4 2 5 8
```

Pass 2:

```text
1 2 4 5 8
```

Pass 3:

```text
1 2 4 5 8
```

Sorted Array:

```text
1 2 4 5 8
```

### Optimization Using `swapped`

If no swaps occur during a pass:

```cpp
if(swapped == false)
    break;
```

it means the array is already sorted, so there is no need to continue further passes.

### Time Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n)            |
| Average Case | O(n²)           |
| Worst Case   | O(n²)           |

### Space Complexity

```text
O(1)
```

Bubble Sort is an in-place sorting algorithm because it sorts the array without using extra memory.

### Notes

* For an array of `n` elements, Bubble Sort requires at most `n - 1` passes.
* The largest element moves to the end after each pass in the standard implementation.
* Bubble Sort is simple to understand and implement, but it is not efficient for large datasets.
* Using the `swapped` flag significantly improves performance on already sorted arrays.
