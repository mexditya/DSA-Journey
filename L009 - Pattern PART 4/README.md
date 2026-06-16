# L009 - Pattern Printing Part 4

This folder contains advanced pattern printing problems involving pyramids, reverse pyramids, butterfly patterns, and diamonds. These patterns helped me understand how spaces and symbols work together to create symmetric designs.

## Questions Solved

### 1. Full Star Pyramid

```text
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
```

**Logic:**

* Print spaces first to center the pyramid.
* Number of spaces decreases with every row.
* Number of stars follows the pattern `2*i - 1`.
* Stars increase in odd numbers: 1, 3, 5, 7, ...

**What I learned:**

* Center alignment.
* Odd-number growth patterns.

**File:** `FullStarPyramid.cpp`

---

### 2. Palindrome Number Pyramid

```text
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
```

**Logic:**

* Print leading spaces.
* Print numbers in increasing order up to the row number.
* Then print numbers in decreasing order back to 1.
* Together they form a palindrome pattern.

**What I learned:**

* Symmetric patterns.
* Combining increasing and decreasing sequences.

**File:** `PalindromeNumberPyramid.cpp`

---

### 3. Inverted Full Star Pyramid

```text
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
```

**Logic:**

* Start with the maximum number of stars.
* Reduce stars by 2 in each row.
* Increase spaces after every row.
* Stars follow the pattern `2*i - 1`.

**What I learned:**

* Reverse pyramid construction.
* Decreasing odd-number patterns.

**File:** `InvertedFullStarPyramid.cpp`

---

### 4. Butterfly Pattern

```text
* * * * * * * *
* * *     * * *
* *         * *
*             *
* *         * *
* * *     * * *
* * * * * * * *
```

**Logic:**

* Divide the pattern into upper and lower halves.
* Print stars on both sides.
* Print spaces in the middle.
* Increase and decrease the gap symmetrically.

**What I learned:**

* Mirror patterns.
* Splitting a pattern into multiple sections.

**File:** `ButterflyPattern.cpp`

---

### 5. X Pattern

```text
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
```

**Logic:**

* Build the upper half by increasing stars and decreasing spaces.
* Build the lower half by reversing the process.
* Keep both sides symmetric around the center.

**What I learned:**

* Symmetry in pattern printing.
* Combining expansion and contraction.

**File:** `XPattern.cpp`

---

### 6. Diamond Pattern

```text
      *
    * *
  * * *
* * * *
* * * *
  * * *
    * *
      *
```

**Logic:**

* Create the upper triangle first.
* Create the lower inverted triangle afterwards.
* Spaces decrease and then increase.
* Stars increase and then decrease.

**What I learned:**

* Building complex patterns from simpler triangles.
* Dividing problems into multiple halves.

**File:** `DiamondPattern.cpp`
