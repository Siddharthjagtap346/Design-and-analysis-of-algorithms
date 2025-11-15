## **6. QuickSort (Deterministic & Randomized)**

---

## **Theory**

* **QuickSort** is a **Divide & Conquer** sorting algorithm that sorts an array efficiently.

* **Basic Idea:**

  1. Choose a **pivot element** from the array.
  2. **Partition** the array so that:

     * All elements **less than pivot** go to the left.
     * All elements **greater than pivot** go to the right.
  3. Recursively apply the same process to **left and right subarrays** until the array is sorted.

* **Types of QuickSort:**

  1. **Deterministic QuickSort:** Always picks a fixed element (commonly the **last element**) as pivot.
  2. **Randomized QuickSort:** Picks a **random element** as pivot.

     * Reduces the chance of hitting the **worst-case scenario** (already sorted or repeated elements).
     * Helps ensure **average-case performance** is consistently good.

* **Why it works efficiently:**

  * Each partition **splits the array** into smaller subarrays, which are easier to sort.
  * Recursion continues until the base case (subarray of size 1 or 0).
  * Randomized pivot helps avoid **O(n²) worst-case** that occurs in deterministic pivot selection with certain input patterns.

* **Time Complexity:**

  * Average Case: `O(n log n)`
  * Worst Case: `O(n²)` (rare with randomized pivot)

* **Space Complexity:**

  * `O(log n)` for recursion stack (in-place sorting)

* **Key Concepts Practiced:**

  * Recursion
  * Partitioning arrays
  * Divide & Conquer strategy

---

## **Code Overview**
- Functions: `partition()`, `quickSort()`, `randomPartition()`, `randomizedQuickSort()`  
- Main function tests **sorting of an integer array**  
- Randomized improves performance on **sorted or repeating elements**  

---

## **Sample Input/Output**
```

Input array: 23, 34, 54, 123, 34, 56, 67676, 112
Sorted array: 23 34 34 54 56 112 123 67676

```

---

## **Key Observations**
- QuickSort is **fast and memory-efficient**  
- Randomized pivot **reduces worst-case scenarios**  
- Time complexity: O(n log n) average, O(n^2) worst-case  

---

## **Learning**
- Practiced **recursion and partitioning**  
- Learned **divide & conquer strategy** in sorting
