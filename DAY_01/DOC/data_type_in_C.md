
C provides several data types, which can be classified into **basic data types**, **derived data types**, and **void type**.

## 1. Basic Data Types
These are the fundamental types provided by C.

### **Integer Types**:
- **`int`**: Represents integers (whole numbers).
    - Size: Typically 4 bytes.
    - Range: Depends on the system, but commonly `-2,147,483,648` to `2,147,483,647`.

- **`short`**: A smaller version of `int`.
    - Size: Typically 2 bytes.
    - Range: `-32,768` to `32,767`.

- **`long`**: A larger version of `int`.
    - Size: Typically 8 bytes (on 64-bit systems).
    - Range: Larger than `int`.

- **`long long`**: An even larger version of `long`.
    - Size: Typically 8 bytes.
    - Range: Even larger than `long`.

- **`unsigned`**: Can be applied to `int`, `short`, `long`, or `long long` to allow only positive numbers.
    - Example: `unsigned int`

### **Floating-Point Types**:
- **`float`**: Used for decimal (floating-point) numbers.
    - Size: Typically 4 bytes.
    - Range: About 3.4e−38 to 3.4e+38.

- **`double`**: A more precise version of `float`.
    - Size: Typically 8 bytes.
    - Range: About 1.7e−308 to 1.7e+308.

- **`long double`**: Offers even greater precision than `double`.
    - Size: Typically 8 or 16 bytes.
    - Range: More precise than `double`.

### **Character Type**:
- **`char`**: Represents single characters.
    - Size: Typically 1 byte.
    - Range: `-128` to `127` (or `0` to `255` for `unsigned char`).

### **Void Type**:
- **`void`**: Represents the absence of a data type. Typically used for functions that do not return a value or for pointers.

---

## 2. Derived Data Types
Derived types are based on the basic types and can represent more complex structures.

- **Arrays**: A collection of elements of the same type.
    - Example: `int arr[10];`

- **Pointers**: A variable that stores the memory address of another variable.
    - Example: `int *ptr;`

- **Structures**: A collection of variables (can be of different types) grouped together.
    - Example:
      ```c
      struct Person {
          char name[50];
          int age;
      };
      ```

- **Unions**: Similar to structures, but with shared memory locations for all members.
    - Example:
      ```c
      union Data {
          int i;
          float f;
          char str[20];
      };
      ```

- **Enumerations**: A user-defined type consisting of a set of named integer constants.
    - Example:
      ```c
      enum Day { Sunday, Monday, Tuesday };
      ```

---

## 3. Tree Structure of Data Types

![C Data Types Tree](https://raw.githubusercontent.com/Ashu-45/C-With-Me/refs/heads/main/IMG/datatype_in_c.png)

---
