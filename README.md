# C-Strings-and-Array-

## **Experiment 7: Strings and Arrays in C++**

**Title of the Experiment:**
To study and implement different operations on strings and arrays in C++.

---

**Objective / Aim:**
To understand and perform basic operations on:

* **Arrays** – Searching, finding minimum and maximum, calculating sum and average.
* **Strings** – Initialization, concatenation, reversing, palindrome checking, and other manipulations.

---

**Tools Used:**

* Code::Blocks IDE or Visual Studio Code
* GCC Compiler (MinGW or g++)
* Operating System: Windows or Linux

---

**Theory:**
In C++, **arrays** are fixed-size collections of elements of the same type stored in contiguous memory locations. Elements are accessed using indices starting from `0`.
**Strings** are sequences of characters used to store and manipulate text. C++ provides:

* **Character arrays** (`char[]`) for basic string handling.
* **`std::string`** for advanced operations like concatenation, reversal, searching, and formatting.

Arrays and strings are essential for storing and processing sequences of data in programs.

---

## **Programs Covered**

---

### **1. Searching for an Element in an Array**

**Algorithm:**

1. Start
2. Declare and initialize an integer array of size 5
3. Input the element to search (`num`)
4. Loop through the array
5. If element matches `num`, display index and exit
6. If not found after loop, display "Number not found"
7. Stop

---

### **2. Finding Minimum and Maximum in an Array**

**Algorithm:**

1. Start
2. Declare and initialize an integer array
3. Set first element as `min` and `max`
4. Loop through the rest of the elements
5. If element < `min`, update `min`
6. If element > `max`, update `max`
7. Display `min` and `max`
8. Stop

---

### **3. Calculating Sum and Average of Array Elements**

**Algorithm:**

1. Start
2. Initialize an array with numbers
3. Initialize `sum = 0`, `count = 0`
4. Loop through elements, add each to `sum` and increment `count`
5. Calculate `average = sum / count`
6. Display sum and average
7. Stop

---

### **4. String Initialization Methods**

**Algorithm:**

1. Start
2. Demonstrate different ways to initialize strings:

   * Default initialization
   * From string literal
   * With repeated characters
   * Copy from another string
   * From user input (`getline`)
   * Using `stringstream`
   * Using `to_string()`
   * Using `assign()`
3. Display results of each method
4. Stop

---

### **5. String Concatenation**

**Algorithm:**

1. Start
2. Declare and initialize strings
3. Use `+` operator to concatenate strings and literals
4. Display concatenated strings
5. Stop

---

### **6. Reversing a String**

**Algorithm:**

1. Start
2. Declare and initialize a string
3. Use a reversing method (loop or built-in) to reverse it
4. Display reversed string
5. Stop

---

### **7. Palindrome Check in a String**

**Algorithm:**

1. Start
2. Declare and initialize a string
3. Get length of string (`n`)
4. Assume it is a palindrome (`isPalindrome = true`)
5. Loop from `0` to `n/2`:

   * If character at `i` != character at `n-i-1`, set `isPalindrome = false` and break
6. If `isPalindrome` is true, display "Palindrome", else display "Not Palindrome"
7. Stop

---

**Flowchart (Text Description):**
Start → Input (array/string if needed) → Processing (loop, condition, function) → Output → End

---

**Conclusion:**
In this experiment, we implemented multiple programs to work with **arrays** (searching, min/max finding, sum & average) and **strings** (initialization, concatenation, reversal, palindrome check). This strengthened our understanding of data storage, sequential access, and common operations in C++.

---
