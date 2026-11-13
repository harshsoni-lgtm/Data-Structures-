# 📚 Data Structures and Algorithms in C

Welcome to my **Data Structures and Algorithms (DSA) in C** repository!

This repository documents my learning journey in DSA, starting from fundamental programming concepts to advanced data structures and algorithms.

It is designed to be **beginner-friendly**, covering basic C programming concepts alongside practical implementations of DSA.

The repository includes programs, explanations, and important concepts that help build a strong foundation in problem-solving and programming.

---

## 💡 Programming Tips

### 1. Use Functions to Structure Programs
Whenever possible, try to divide your program into smaller functions.

**Benefits:**
- Improves code readability and organization.
- Makes debugging easier.
- Allows individual functions to be tested independently.
- Reduces code repetition.

---

## 📌 Topics Covered

### 1. Insertion and Deletion in Arrays

**Practical 1:** Implementation of insertion and deletion operations on arrays.

**Key Concepts:**

1. **Dynamic Length Management:** The array length is incremented or decremented after each valid operation rather than only at the beginning or end of a function.
2. **Separate Choice Variables:** Variables such as `choice_1`, `choice_2`, and `choice_3` are used to avoid naming confusion and improve code clarity.

---

### 2. Operations on Arrays

This program demonstrates the addition of two 2-dimensional arrays using C.

**Key Concepts:**

- **Variable Length Arrays (VLA):** Used to define array dimensions based on user input.
- **2D Arrays:** Working with two-dimensional arrays and performing matrix addition.
- **Call by Reference:** Used in the `Validation()` function to update a variable through its address.
- **Input Validation:** Checks array dimensions to prevent inputs exceeding the specified maximum size.

#### Conditions for Matrix Addition

1. Both matrices must have the same number of rows and columns.
2. The resultant matrix will have the same dimensions as the input matrices.

#### Call by Reference

Call by reference is a method of passing the address of a variable to a function.

**Benefits:**
- Allows direct modification of the original variable.
- Avoids the need to return a modified value.
- Useful when a function needs to update multiple variables.

#### VLA vs FLA

| Feature | VLA (Variable Length Array) | FLA (Fixed Length Array) |
|---|---|---|
| Size | Determined at runtime | Defined beforehand |
| Dimensions | Based on user input or runtime values | Predefined |
| Flexibility | More flexible | Less flexible |
| Memory Utilization | Allows runtime-sized allocation | Uses predefined dimensions |

**Note:** VLA stands for Variable Length Array, while FLA refers to Fixed Length Array.

---
## 🔗 Singly Linked List – Insertion and Deletion

This program demonstrates the implementation of a **Singly Linked List in C** using dynamic memory allocation.

It allows users to perform insertion and deletion operations at different positions in a linked list. The program uses structures, pointers, functions, and dynamic memory allocation to manage nodes efficiently.

### 📌 Operations Performed

**1. Insertion**
- Insertion at the Beginning
- Insertion at the Ending
- Insertion at a Specific Position

**2. Deletion**
- Deletion from the Beginning
- Deletion from the Ending
- Deletion from a Specific Position

---

### 🧠 Key Concepts Used

**1. Structures (`struct`)**

A structure is used to create a node containing two members:
- `data`: Stores the value of the node.
- `next`: Stores the address of the next node.

**2. Dynamic Memory Allocation**

`malloc()` is used to allocate memory dynamically whenever a new node is created.

`free()` is used to release the memory occupied by a deleted node.

**3. Pointers**

Pointers are used to establish connections between different nodes and traverse the linked list.

**4. Call by Reference (Pointer to Pointer)**

The functions `Insertion()` and `Deletion()` accept `struct node **start` as an argument.

This allows the functions to modify the original head pointer whenever insertion or deletion takes place at the beginning.

**5. Traversal**

A temporary pointer (`temp`) is used to traverse the linked list and access the required nodes without modifying the head pointer.

**6. Modular Programming**

The program is divided into separate functions:
- `Display()` – Displays all the nodes.
- `Insertion()` – Performs insertion operations.
- `Deletion()` – Performs deletion operations.

---

### ⚙️ Working of the Program

1. The user enters the initial number of nodes.
2. The program creates the linked list using dynamic memory allocation.
3. A menu is displayed to select between insertion, deletion, and exit.
4. Based on the user's choice, the corresponding function is called.
5. The selected operation is performed on the linked list.
6. The updated linked list is displayed.
7. The menu continues until the user selects Exit.

---

### 💻 Compilation and Execution

**Compile the program:**

```bash
gcc LinkedList.c -o LinkedList
```

**Run the program:**

```bash
./LinkedList
```

For Windows:

```bash
LinkedList.exe
```

---

### 📷 Sample Output

```text
--- Linked List ---
Enter the initial number of nodes required:
3

Enter the data of the node: 10
Enter the data of the node: 20
Enter the data of the node: 30

1. Insertion
2. Deletion
3. Exit

Enter your choice: 1

--- Performing Insertion ---

1. Insertion at Beginning
2. Insertion at Ending
3. Insertion at Specific Position

Enter your choice: 1
Enter the data of the node: 5

--- List After Insertion ---
5    10    20    30
```

---

### 🎯 Learning Outcomes

Through this program, the following concepts can be understood:

- Implementation of a Singly Linked List.
- Dynamic memory allocation and deallocation.
- Working with structures and pointers.
- Insertion and deletion of nodes.
- Traversal and manipulation of linked lists.
- Passing pointers by reference to functions.

---

**Note:** This program is part of my journey of learning Data Structures and Algorithms using C. It focuses on understanding how linked lists work through practical implementation.

## 🎯 Repository Goals

- Strengthen fundamental C programming concepts.
- Understand data structures through practical implementation.
- Improve logical thinking and problem-solving skills.
- Progress from beginner-level programs to advanced DSA concepts.

---

**Learning is a continuous process. This repository will be updated as I explore and implement more concepts in C and Data Structures & Algorithms.**
