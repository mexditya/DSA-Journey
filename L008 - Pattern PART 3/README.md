# L008 - Pattern Printing Part 3

This folder contains right-aligned pattern printing problems. These patterns introduced the concept of combining spaces and values together to control alignment.

## Questions Solved

### 1. Right-Aligned Star Triangle

```text
        *
      * *
    * * *
  * * * *
* * * * *
```

**Logic:**

* Print spaces first to shift the stars towards the right.
* Number of spaces decreases with every row.
* Number of stars increases with every row.
* Use separate loops for spaces and stars.

**What I learned:**

* Right alignment using spaces.
* Combining multiple loops in a single pattern.

**File:** `RightAlignedStarTriangle.cpp`

---

### 2. Right-Aligned Repeated Number Triangle

```text
      1
    2 2
  3 3 3
4 4 4 4
```

**Logic:**

* Print leading spaces before every row.
* Print the current row number repeatedly.
* Spaces decrease and numbers increase as the rows progress.

**What I learned:**

* Combining alignment with number patterns.
* Using the row number as the printed value.

**File:** `RightAlignedRepeatedNumberTriangle.cpp`

---

### 3. Right-Aligned Increasing Number Triangle

```text
      1
    1 2
  1 2 3
1 2 3 4
```

**Logic:**

* Print spaces first for alignment.
* Print numbers from 1 up to the current row number.
* Increase the number of printed values in every row.

**What I learned:**

* Using the inner loop variable to generate sequences.
* Right-aligned number patterns.

**File:** `RightAlignedIncreasingNumberTriangle.cpp`

---

### 4. Right-Aligned Alphabet Triangle

```text
        A
      A B
    A B C
  A B C D
A B C D E
```

**Logic:**

* Print spaces before every row.
* Start printing from 'A'.
* Print characters up to the current row length.
* Increase the number of characters in each row.

**What I learned:**

* Character patterns with alignment.
* Using ASCII values and character loops.

**File:** `RightAlignedAlphabetTriangle.cpp`

---

### 5. Right-Aligned Reverse Number Triangle

```text
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
```

**Logic:**

* Print leading spaces for alignment.
* Start from the current row number.
* Print numbers in decreasing order until 1.
* Increase the count of numbers in every row.

**What I learned:**

* Reverse counting inside patterns.
* Combining alignment and descending sequences.

**File:** `RightAlignedReverseNumberTriangle.cpp`
