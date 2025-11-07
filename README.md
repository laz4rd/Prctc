# 📘 DS Notes [36]

**Use this repository to study for the Lab Examination, the folder named `Premade` includes the 4 files from `ChatGPT` and the folder named `Redone` includes the 4 files written by me.**

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

```c
for(i=0;i<a;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
```
### 🔹 Selection Sort
- Finds the smallest element and places it in the correct position each pass.  
- **Always O(n²)** time complexity.  
- Makes fewer swaps than bubble sort.  
- Good for learning, not efficient for large data.
```c
for(i = 0; i < a - 1; i++) {
    minIndex = i;
    for(j = i + 1; j < a; j++) {
        if(arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}
```
---