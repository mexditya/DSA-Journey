# L006 - Pattern Printing Part 1

This folder contains some basic pattern printing problems using nested loops. These patterns helped me understand the relationship between rows, columns, and how loop variables control the output.

## Questions Solved

### 1. Square Star Pattern

```text
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

**Logic:**

* Use two nested loops.
* Outer loop controls the rows.
* Inner loop prints `*` n times in each row.

**What I learned:**

* Basics of nested loops.
* Creating a square pattern.

**File:** `SquareStarPattern.cpp`

---

### 2. Square Number Pattern

```text
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
```

**Logic:**

* Use nested loops.
* Print the constant value `10` in every column.
* Repeat for all rows.

**What I learned:**

* Printing fixed values using nested loops.

**File:** `SquareTenPattern.cpp`

---

### 3. Row Number Pattern

```text
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
```

**Logic:**

* Outer loop controls the row number.
* Print the current row number throughout the row.

**What I learned:**

* Using the outer loop variable inside the pattern.

**File:** `RowNumberPattern.cpp`

---

### 4. Column Number Pattern

```text
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```

**Logic:**

* Outer loop controls rows.
* Inner loop variable represents the column number.
* Print the column number in every row.

**What I learned:**

* Using the inner loop variable to generate patterns.

**File:** `ColumnNumberPattern.cpp`

---

### 5. Reverse Column Pattern

```text
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
```

**Logic:**

* Start the inner loop from n and move backwards to 1.
* Print the current value of the inner loop.

**What I learned:**

* Reverse traversal using loops.

**File:** `ReverseColumnPattern.cpp`

---

### 6. Square Number Squares Pattern

```text
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
```

**Logic:**

* Traverse columns from 1 to n.
* Print the square of each column number.

**What I learned:**

* Performing calculations while printing patterns.

**File:** `SquareValuesPattern.cpp`

---

### 7. Cube Values Pattern

```text
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
```

**Logic:**

* Traverse columns from 1 to n.
* Print the cube of each column number.

**What I learned:**

* Using mathematical expressions inside pattern problems.

**File:** `CubeValuesPattern.cpp`

---

### 8. Character Row Pattern

```text
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
```

**Logic:**

* Start from character `a`.
* Print the same character across the row.
* Move to the next character for the next row.

**What I learned:**

* Character handling in C++.
* ASCII values and type casting.

**File:** `CharacterRowPattern.cpp`

---

### 9. Character Column Pattern

```text
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
```

**Logic:**

* Each row remains the same.
* Print characters from `a` onwards in every row.

**What I learned:**

* Generating alphabet patterns using loops.

**File:** `CharacterColumnPattern.cpp`

---

### 10. Continuous Number Pattern

```text
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
```

**Logic:**

* Maintain a counter variable.
* Print the counter value.
* Increment it after every print.

**What I learned:**

* Using an external variable to maintain sequence across rows and columns.

**File:** `ContinuousNumberPattern.cpp`
