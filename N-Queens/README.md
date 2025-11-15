
## 5. N-Queens Problem (Backtracking)

Sure! I can extend your **N-Queens Theory** section to be a bit more detailed and explanatory, while keeping it readable for a README. Here’s a polished version:

---


## **Theory (N-Queens Problem)**

* **Goal:** Place `N` queens on an `N×N` chessboard such that **no two queens attack each other**.

* **Constraints:**

  * No two queens can be on the **same row**.
  * No two queens can be on the **same column**.
  * No two queens can be on the **same diagonal**.

* **Approach:** Uses **backtracking** to explore all possible placements:

  1. Place a queen in the first row, then move to the next row.
  2. Check if the current placement is **safe** (no conflicts in column or diagonals).
  3. If safe, move to the next row; else, try next column in the same row.
  4. If no columns are safe in a row, **backtrack** to the previous row and try a different position.

* **Outcome:** Generates **all valid arrangements** of `N` queens.

* **Time Complexity:**

  * Worst case: `O(N!)` because each row can try up to `N` columns.

* **Space Complexity:**

  * `O(N)` for storing positions of queens in the board/array.

**Key Observations:**

* Backtracking **prunes invalid paths early**, so it’s more efficient than brute-force placement.
* The problem is a classic example to **understand recursion, backtracking, and constraint satisfaction**.

---

## **Example Diagram (4×4 Board)**

**Safe Placement:**

```
. Q . .
. . . Q
Q . . .
. . Q .
```

* `Q` → Queen
* `.` → Empty / Safe Cell

**Explanation:**

* No two queens share the same row, column, or diagonal.
* Each `Q` is placed **safely** with respect to others.

---

**Unsafe Placement Example:**

```
Q . . .
. Q . .   <- Unsafe: same diagonal as first Q
. . . Q
. . Q .
```

* The second queen conflicts **diagonally** with the first queen, so this configuration is invalid.

---

## **Code Overview**
- Recursive function to **place queen row by row**  
- Checks **column and diagonals** for safety  
- Prints **all solutions**  

---

## **Sample Input/Output**
```

Enter N: 4

Solution 1:
. Q . .
. . . Q
Q . . .
. . Q .

Solution 2:
. . Q .
Q . . .
. . . Q
. Q . .
Total Solutions = 2

```
**Screenshot:**
<img width="622" height="287" alt="image" src="https://github.com/user-attachments/assets/5b15e506-145d-44e7-8ab7-b22ad90db8b8" />

---

## **Key Observations**
- Backtracking **prunes invalid paths**  
- Efficient for **constraint-based problems**  

---

## **Learning**
- Understood **recursion + safety checks**  
- Practiced **backtracking strategy**
