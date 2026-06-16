# L012 - Number System Conversions

This folder contains programs related to number system conversions. The problems focus on converting numbers between Binary, Decimal, and Octal representations using loops and basic arithmetic operations.

## Questions Solved

### 1. Decimal to Binary

Converts a decimal number into its binary equivalent.

**Logic:**

* Divide the number by 2 repeatedly.
* Store each remainder.
* Build the binary number using powers of 10.
* Continue until the number becomes 0.

**What I learned:**

* Decimal to binary conversion process.
* Using remainders to construct a new number system.

**File:** `DecimalToBinary.cpp`

---

### 2. Binary to Decimal

Converts a binary number into its decimal equivalent.

**Logic:**

* Extract digits from right to left.
* Multiply each digit by the corresponding power of 2.
* Add all contributions to get the decimal value.

**What I learned:**

* Positional value system in binary.
* Using powers of the base during conversion.

**File:** `BinaryToDecimal.cpp`

---

### 3. Decimal to Octal

Converts a decimal number into its octal equivalent.

**Logic:**

* Divide the number by 8 repeatedly.
* Store the remainders.
* Build the octal number using powers of 10.

**What I learned:**

* Base-8 number system.
* Similarity between decimal-to-binary and decimal-to-octal conversion.

**File:** `DecimalToOctal.cpp`

---

### 4. Binary to Octal

Converts a binary number into its octal equivalent.

**Logic:**

* First convert the binary number into decimal.
* Then convert the decimal number into octal.
* Print the final result.

**What I learned:**

* Multi-step number system conversions.
* Reusing conversion logic.

**File:** `BinaryToOctal.cpp`

---

### 5. Binary to Decimal using For Loop

Converts a binary number into decimal using a `for` loop.

**Logic:**

* Extract digits one by one.
* Multiply each digit with the appropriate power of 2.
* Add the values to get the decimal equivalent.

**What I learned:**

* Using `for` loops for conversions.
* Alternative implementation of the same algorithm.

**File:** `BinaryToDecimalFor.cpp`

---

### 6. Decimal to Binary using For Loop

Converts a decimal number into binary using a `for` loop.

**Logic:**

* Divide the number by 2 repeatedly.
* Store the remainders.
* Construct the binary representation.

**What I learned:**

* Loop flexibility in conversion problems.
* Rewriting existing logic using different loop structures.

**File:** `DecimalToBinaryFor.cpp`

---

### 7. Decimal to Octal using For Loop

Converts a decimal number into octal using a `for` loop.

**Logic:**

* Repeatedly divide the number by 8.
* Store remainders.
* Build the octal number digit by digit.

**What I learned:**

* Base conversion using `for` loops.
* Similar patterns across number systems.

**File:** `DecimalToOctalFor.cpp`

---

### 8. Octal to Decimal

Converts an octal number into its decimal equivalent.

**Logic:**

* Extract digits from right to left.
* Multiply each digit by the corresponding power of 8.
* Add all values to get the decimal result.

**What I learned:**

* Octal positional value system.
* Converting from another base to decimal.

**File:** `OctalToDecimal.cpp`

---

### 9. Binary to Octal (Alternative Implementation)

Converts a binary number into octal by first converting it into decimal.

**Logic:**

* Convert Binary → Decimal.
* Convert Decimal → Octal.
* Display the final octal value.

**What I learned:**

* Breaking complex conversions into smaller steps.
* Reusing previously learned algorithms.

**File:** `BinaryToOctalAlternative.cpp`

---

### 10. Octal to Binary

Converts an octal number into its binary equivalent.

**Logic:**

* Convert Octal → Decimal.
* Convert Decimal → Binary.
* Print the binary representation.

**What I learned:**

* Chained number system conversions.
* Using decimal as an intermediate representation.

**File:** `OctalToBinary.cpp`
