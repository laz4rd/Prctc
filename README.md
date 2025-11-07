# 📘 DSA Basics in C – Quick Revision Notes

This repository contains 4 fundamental programs from **Data Structures and Algorithms (DSA)** in C.  
Perfect for **last-minute exam prep** — each code is short, commented, and easy to understand.

---

## ⚙️ Programs Included

| No. | Program Name | Concept | Description |
|-----|---------------|---------|--------------|
| 1️⃣ | **Stack (Array Implementation)** | Linear Data Structure | Stores elements in LIFO (Last In First Out) order. Supports `push`, `pop`, `display`. |
| 2️⃣ | **Queue (Array Implementation)** | Linear Data Structure | Follows FIFO (First In First Out). Supports `enqueue`, `dequeue`, `display`. |
| 3️⃣ | **Bubble Sort** | Sorting Algorithm | Repeatedly swaps adjacent elements if they are in the wrong order. Simple but slow (O(n²)). |
| 4️⃣ | **Selection Sort** | Sorting Algorithm | Selects the smallest element and places it at the beginning. Also O(n²) but fewer swaps. |

---

## 🧠 Quick Notes

### 🔹 Stack
- Uses **LIFO (Last In First Out)** principle.  
- Common operations:
  - `push()`: Insert element  
  - `pop()`: Remove element  
  - `display()`: Show all elements  
- Used in **function calls**, **expression evaluation**, **undo features**.

### 🔹 Queue
- Uses **FIFO (First In First Out)** principle.  
- Common operations:
  - `enqueue()`: Insert at rear  
  - `dequeue()`: Remove from front  
  - `display()`: Show all elements  
- Used in **CPU scheduling**, **buffer management**, **data transfer**.

### 🔹 Bubble Sort
- Repeatedly compares adjacent elements and swaps them.  
- **Best case:** O(n) (already sorted)  
- **Worst case:** O(n²)  
- Easy to implement, good for small arrays.

### 🔹 Selection Sort
- Finds the smallest element and places it in the correct position each pass.  
- **Always O(n²)** time complexity.  
- Makes fewer swaps than bubble sort.  
- Good for learning, not efficient for large data.

---

## 🧾 How to Run

```bash
gcc filename.c -o output
./output
