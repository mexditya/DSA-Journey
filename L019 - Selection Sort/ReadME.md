# L019 - Selection Sort

This folder contains problems based on the Selection Sort algorithm. These programs helped me understand how Selection Sort works by repeatedly selecting either the smallest or largest element from the unsorted portion of the array and placing it in its correct position.

## Questions Solved

### 1. Selection Sort (Ascending Order)

Sorts an integer array in increasing order using Selection Sort.

**Logic:**

* Assume the current position contains the smallest element.
* Search the remaining unsorted portion of the array for the actual smallest element.
* Swap it with the current position.
* Repeat for all positions until the array is sorted.

**What I learned:**

* Working with nested loops.
* Dividing an array into sorted and unsorted portions.
* Basic sorting algorithm implementation.

**File:** `SelectionSortAscending.cpp`

---

### 2. Selection Sort (Descending Order)

Sorts an integer array in decreasing order using Selection Sort.

**Logic:**

* Assume the current position contains the largest element.
* Search the remaining unsorted portion for a larger element.
* Update the index of the largest element whenever found.
* Swap the largest element into its correct position.
* Repeat until the array is sorted.

**What I learned:**

* Modifying sorting logic for descending order.
* Finding maximum elements instead of minimum elements.

**File:** `SelectionSortDescending.cpp`

---

### 3. Selection Sort (Ascending Order using Largest Element)

Sorts an integer array in increasing order by repeatedly placing the largest element at the end of the unsorted portion.

**Logic:**

* Find the largest element in the unsorted part of the array.
* Swap it with the last element of the unsorted portion.
* After every pass, the sorted portion grows from the right side.
* Continue until the entire array becomes sorted.

**What I learned:**

* Selection Sort can be implemented in more than one way.
* Understanding sorted and unsorted portions of an array.
* Building a sorted array from right to left.

**File:** `SelectionSortUsingMaximum.cpp`

---

### 4. Selection Sort on Character Array

Sorts an array of characters in ascending order.

**Logic:**

* Treat characters just like numbers.
* Find the smallest character in the unsorted portion.
* Swap it with the current position.
* Repeat until all characters are sorted alphabetically.

**What I learned:**

* Sorting character arrays.
* Character comparison using ASCII values.
* Applying the same algorithm to different data types.

**File:** `SelectionSortCharacters.cpp`

---

## Selection Sort Overview

### How Selection Sort Works

* Divide the array into two parts:

  * Sorted Portion
  * Unsorted Portion

* In every pass:

  * Find the smallest (or largest) element in the unsorted portion.
  * Place it in its correct position using a swap.

### Example

Initial Array:

```text
12 4 9 20 7
```

Pass 1:

```text
4 12 9 20 7
```

Pass 2:

```text
4 7 9 20 12
```

Pass 3:

```text
4 7 9 20 12
```

Pass 4:

```text
4 7 9 12 20
```

Sorted Array:

```text
4 7 9 12 20
```

### Time Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n²)           |
| Average Case | O(n²)           |
| Worst Case   | O(n²)           |

### Space Complexity

```text
O(1)
```

Selection Sort is an in-place sorting algorithm because it does not require any extra array.

### Notes

* For an array of `n` elements, Selection Sort requires `n - 1` passes.
* Selection Sort is simple to understand but not the most efficient sorting algorithm for large datasets.
* It performs fewer swaps than Bubble Sort, but the overall time complexity remains O(n²).
