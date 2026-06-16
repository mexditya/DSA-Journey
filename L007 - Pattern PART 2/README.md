# L007 - Pattern Printing Part 2

This folder contains more pattern printing problems based on nested loops. These patterns focus on triangles, reverse triangles, and understanding how rows and columns change with each iteration.

## Questions Solved

### 1. Star Triangle Pattern

```text
*
* *
* * *
* * * *
* * * * *
```

**Logic:**

* The row number decides how many stars to print.
* In row 1 print 1 star, in row 2 print 2 stars, and so on.
* Continue until n rows are completed.

**What I learned:**

* Growing triangle patterns.
* Relationship between row number and column count.

**File:** `StarTriangle.cpp`

---

### 2. Increasing Number Triangle

```text
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

**Logic:**

* Each row starts from 1.
* Print numbers up to the current row number.
* The number of elements increases with each row.

**What I learned:**

* Using the inner loop variable to generate sequences.

**File:** `IncreasingNumberTriangle.cpp`

---

### 3. Repeated Row Number Triangle

```text
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
```

**Logic:**

* The row number decides both the value and the count of elements.
* Print the current row number repeatedly.

**What I learned:**

* Using the outer loop variable inside the pattern.

**File:** `RepeatedRowTriangle.cpp`

---

### 4. Reverse Number Triangle

```text
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
```

**Logic:**

* Start printing from the current row number.
* Move backwards until 1.
* Increase the starting number in every new row.

**What I learned:**

* Reverse counting inside nested loops.

**File:** `ReverseNumberTriangle.cpp`

---

### 5. Character Triangle

```text
a
b b
c c c
d d d d
e e e e e
```

**Logic:**

* Start with character 'a'.
* Print the same character throughout the row.
* Move to the next character after every row.

**What I learned:**

* Character patterns.
* Incrementing characters in C++.

**File:** `CharacterTriangle.cpp`

---

### 6. Inverted Star Triangle

```text
* * * * *
* * * *
* * *
* *
*
```

**Logic:**

* Start with n stars.
* Reduce the number of stars by one after every row.
* Continue until only one star remains.

**What I learned:**

* Inverted triangle patterns.
* Decreasing column count.

**File:** `InvertedStarTriangle.cpp`

---

### 7. Inverted Number Triangle

```text
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

**Logic:**

* Start by printing numbers from 1 to n.
* Reduce the number of elements by one in each row.
* Continue until only 1 remains.

**What I learned:**

* Reverse triangular patterns.
* Using formulas like `n - i + 1`.

**File:** `InvertedNumberTriangle.cpp`

---

### 8. Reverse Descending Triangle

```text
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
```

**Logic:**

* Every row starts from n.
* Print numbers in descending order.
* Increase the count of printed numbers with each row.

**What I learned:**

* Combining increasing rows with decreasing values.

**File:** `ReverseDescendingTriangle.cpp`

---

### 9. Reverse Number Square

```text
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
```

**Logic:**

* Print numbers from n to 1 in every row.
* Repeat the same sequence for all rows.

**What I learned:**

* Reusing a fixed pattern across multiple rows.

**File:** `ReverseNumberSquare.cpp`
