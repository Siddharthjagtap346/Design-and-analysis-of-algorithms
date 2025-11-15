## **0-1 Knapsack (Dynamic Programming)**


## **Theory**

* **0-1 Knapsack Problem:**

  * Each item can either be **taken completely or not taken at all** (no fractions).
  * Goal: Maximize total **profit/value** while staying within knapsack capacity.

* **Dynamic Programming Approach:**

  * Use a **DP table** to store solutions of **subproblems**.
  * Let `dp[i][w]` = maximum profit using the **first i items** with **capacity w**.
  * Recurrence Relation:

    ```
    dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i]] + value[i])
    ```

    * **dp[i-1][w]** → don’t include item i
    * **dp[i-1][w-weight[i]] + value[i]** → include item i

* **Why DP Works:**

  * Handles **overlapping subproblems** efficiently.
  * Guarantees **optimal solution** for all capacities and items.

* **Time Complexity:** `O(n * W)` (n = number of items, W = knapsack capacity)

* **Space Complexity:** `O(n * W)` (can be optimized to `O(W)` with 1D array)

---

## **DP Table Visualization (Example)**

**Input:**
Items `(value, weight) = (60,10), (100,20), (120,30)`
Knapsack Capacity = `50`

```
      0   10   20   30   40   50
---------------------------------
0 |   0    0    0    0    0    0
1 |   0   60   60   60   60   60
2 |   0   60  100  160  160  160
3 |   0   60  100  160  180  220
```

* **Rows:** Items considered (0 = none)
* **Columns:** Knapsack capacity
* **Cells:** Maximum profit achievable
* **Maximum Profit:** `dp[3][50] = 220`

---

## **Sample Input/Output**

```
Items (value, weight): (60,10), (100,20), (120,30)
Knapsack Capacity: 50

Maximum Profit = 220
```

**Screenshot:** <img width="1187" height="350" alt="0-1 Knapsack DP Table" src="https://github.com/user-attachments/assets/c3c2227c-bb71-485a-afc8-24151d229acd" />


---

## **Code Overview**
- Input: weights, profits, and knapsack capacity  
- Builds **DP table iteratively**  
- Returns **maximum profit**  

---

## **Key Observations**

* Dynamic Programming guarantees **optimal solution**.
* Efficiently handles **overlapping subproblems**.
* Can be compared with **Fractional Knapsack**, which uses a **greedy approach**.
* Time complexity: O(n * capacity)  

---

## **Learning Points**

* Practiced **tabulation method in DP**.
* Learned to **fill and trace the DP table**.
* Compared **0-1 vs fractional knapsack strategies**.
