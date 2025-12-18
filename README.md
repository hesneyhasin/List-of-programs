# List of Programs

A comprehensive collection of first-year university C programming exercises and projects. This repository contains fundamental programming concepts and practical applications designed to help students master core C programming skills.

## 📚 Table of Contents

- [Conditional Statements](#conditional-statements)
- [Functions](#functions)
- [Loops](#loops)
- [Practical Applications](#practical-applications)
- [Getting Started](#getting-started)
- [Compilation & Execution](#compilation--execution)

---

## Conditional Statements

Conditional statements are fundamental control structures that allow programs to make decisions based on specified conditions. This section covers basic decision-making in C.

### Topics Covered:
- **if statements**: Execute code blocks when conditions are true
- **if-else statements**: Choose between two code paths based on a condition
- **else-if statements**: Handle multiple conditions sequentially
- **switch statements**: Select from multiple options based on a single expression
- **Ternary operator**: Compact conditional expressions for simple decisions

### Example Programs:
- Simple number comparison (positive, negative, zero)
- Grade calculation and evaluation systems
- Leap year determination
- Temperature range classification
- Menu-driven applications with conditional logic

### Key Concepts:
- Relational operators (`<`, `>`, `==`, `!=`, `<=`, `>=`)
- Logical operators (`&&`, `||`, `!`)
- Boolean logic and truth tables
- Nested conditional structures

---

## Functions

Functions are reusable blocks of code that perform specific tasks. This section demonstrates how to write, call, and manage functions effectively.

### Topics Covered:
- **Function declaration and definition**: Creating reusable code blocks
- **Function parameters**: Passing data to functions
- **Return values**: Getting results back from functions
- **Call by value vs. call by reference**: Different parameter passing mechanisms
- **Scope and lifetime**: Understanding variable accessibility
- **Recursion**: Functions calling themselves

### Example Programs:
- Basic mathematical functions (addition, subtraction, multiplication, division)
- Factorial calculation using recursion
- Fibonacci sequence generation
- Prime number checking
- Greatest common divisor (GCD) and least common multiple (LCM)
- String manipulation functions
- Array processing functions

### Key Concepts:
- Function prototypes and declarations
- Local and global variables
- Stack memory management
- Function modularity and code reusability

---

## Loops

Loops enable repetitive execution of code blocks until specified conditions are met. This section covers iteration techniques.

### Topics Covered:
- **while loops**: Repeat code while a condition is true
- **do-while loops**: Execute code at least once, then repeat based on condition
- **for loops**: Controlled iteration with initialization, condition, and increment
- **Nested loops**: Loops within loops for complex iterations
- **Loop control**: break and continue statements

### Example Programs:
- Number series generation (arithmetic and geometric progressions)
- Multiplication tables
- Pattern printing (triangles, pyramids, diamonds)
- Sum and average calculation of series
- Searching and sorting algorithms
- Table generation and data processing

### Key Concepts:
- Loop counters and accumulators
- Infinite loop prevention
- Loop optimization techniques
- Nested loop efficiency

---

## Practical Applications

Real-world projects that demonstrate how conditional statements, functions, and loops work together in practical scenarios.

### 1. **Telephone Directory System**

A contact management system that demonstrates file handling and data organization principles.

#### Features:
- **Add Contact**: Store name, phone number, and email
- **Search Contact**: Find contacts by name or phone number
- **View All Contacts**: Display the complete contact list
- **Update Contact**: Modify existing contact information
- **Delete Contact**: Remove contacts from the directory
- **Save/Load**: Persist data between program runs

#### Programming Concepts Used:
- Structures (struct) for organizing contact data
- Arrays and dynamic memory management
- File I/O operations
- String manipulation
- Conditional statements for menu navigation
- Functions for modular code organization
- Loops for data iteration

#### Sample Output:
```
========== TELEPHONE DIRECTORY ==========
1. Add Contact
2. Search Contact
3. View All Contacts
4. Update Contact
5. Delete Contact
6. Exit
Enter your choice: 
```

### 2. **Coffee Shop Management System**

A point-of-sale and inventory management system for a coffee shop.

#### Features:
- **Menu Display**: Show available items with prices
- **Order Management**: Process customer orders
- **Billing System**: Calculate total bills with tax
- **Payment Processing**: Handle multiple payment methods
- **Inventory Tracking**: Monitor stock levels
- **Sales Report**: Generate daily/weekly sales summaries
- **Special Discounts**: Apply promotional pricing

#### Programming Concepts Used:
- Conditional statements for menu selection and discounts
- Functions for order processing and calculations
- Loops for item selection and inventory iteration
- Arrays for storing menu items and inventory
- Structures for order and product data
- Mathematical operations for billing
- Data persistence for sales records

#### Sample Output:
```
===== COFFEE SHOP MANAGEMENT SYSTEM =====
MENU:
1. Espresso - $2.50
2. Cappuccino - $3.50
3. Latte - $3.50
4. Mocha - $4.00
5. Americano - $2.75

Enter item number (0 to finish): 
```

### Key Program Flow:
1. **Initialization**: Load menu items, prices, and inventory
2. **Customer Interaction**: Process orders through a loop
3. **Validation**: Check stock availability with conditionals
4. **Calculation**: Compute subtotal, tax, and final amount
5. **Finalization**: Update inventory and record the transaction

---

## Getting Started

### Prerequisites
- GCC compiler or any C compiler (gcc, clang, etc.)
- Text editor or IDE (Code::Blocks, Visual Studio Code, Dev C++, etc.)
- Basic understanding of C syntax

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/hesneyhasin/List-of-programs.git
   cd List-of-programs
   ```

2. **Navigate to your desired program:**
   ```bash
   cd conditional-statements
   # or
   cd functions
   # or
   cd loops
   # or
   cd practical-applications
   ```

---

## Compilation & Execution

### Compiling a C Program

**Basic compilation:**
```bash
gcc -o program_name program_name.c
```

**With debugging symbols:**
```bash
gcc -g -o program_name program_name.c
```

**With warnings enabled:**
```bash
gcc -Wall -Wextra -o program_name program_name.c
```

### Running the Program

**On Linux/macOS:**
```bash
./program_name
```

**On Windows (Command Prompt):**
```bash
program_name.exe
```

**Example - Compiling and Running:**
```bash
gcc -o telephone_directory telephone_directory.c
./telephone_directory
```

---

## Learning Outcomes

Upon completing these programs, you will be able to:

✅ Master conditional logic and decision-making in code  
✅ Write and utilize functions for code modularity  
✅ Implement various loop structures for repetitive tasks  
✅ Combine fundamental concepts into practical applications  
✅ Manage data structures and organize information efficiently  
✅ Handle user input and output effectively  
✅ Debug and optimize C programs  
✅ Develop real-world software solutions  

---


## Tips for Learning

1. **Start Simple**: Begin with basic conditional statements before moving to complex nested structures
2. **Practice Consistently**: Regular coding practice reinforces concepts
3. **Understand the Logic**: Don't just memorize; understand why code works
4. **Debug Methodically**: Use print statements and debuggers to trace program flow
5. **Refactor Code**: Improve your code as you learn new concepts
6. **Read Others' Code**: Learn from different coding styles and approaches
7. **Build Projects**: Apply multiple concepts in practical projects

---

## Common Errors and Solutions

| Error | Cause | Solution |
|-------|-------|----------|
| Syntax error | Typo in code | Check brackets, semicolons, and spelling |
| Segmentation fault | Accessing invalid memory | Check array bounds and pointer usage |
| Infinite loop | Incorrect loop condition | Review loop condition and increment |
| Wrong output | Logic error | Trace through code with test values |
| Compilation error | Missing header files | Ensure all necessary libraries are included |

---


## Resources

### Online Compilers & Tools
- [OnlineGDB](https://www.onlinegdb.com/)
- [Ideone](https://ideone.com/)
- [Tutorialspoint Compiler](https://www.tutorialspoint.com/compile_c_online.php)

### Learning Materials
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)
- [TutorialsPoint C](https://www.tutorialspoint.com/cprogramming/index.htm)
- [C Programming - Bjarne Stroustrup's Guide](https://www.cplusplus.com/reference/cstdlib/)

---




