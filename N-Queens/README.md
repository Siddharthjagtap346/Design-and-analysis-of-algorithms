
## **5. N-Queens Problem (Backtracking)

## **Theory**
- Place N queens on an N×N board such that **no two attack each other**  
- Constraints:  
  - No two queens on same row/column/diagonal  
- Uses **backtracking** to explore all possibilities  

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
screenshot-
<img width="622" height="287" alt="image" src="https://github.com/user-attachments/assets/5b15e506-145d-44e7-8ab7-b22ad90db8b8" />

---

## **Key Observations**
- Backtracking **prunes invalid paths**  
- Efficient for **constraint-based problems**  

---

## **Learning**
- Understood **recursion + safety checks**  
- Practiced **backtracking strategy**
```
