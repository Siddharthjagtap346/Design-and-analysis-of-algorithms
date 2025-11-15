
## **4. 0-1 Knapsack (`README.md`)**

```markdown
# 0-1 Knapsack (Dynamic Programming)
**Roll No:** -  
**Subject:** DAA_LA1  

---

## **Theory**
- Items **cannot be divided** (take full or nothing)  
- Uses **Dynamic Programming** to find **max profit**  
- DP table: `dp[i][w] = max profit using first i items with capacity w`

---

## **Code Overview**
- Input: weights, profits, and knapsack capacity  
- Builds **DP table iteratively**  
- Returns **maximum profit**  

---

## **Sample Input/Output**
```

Items (value, weight): (60,10), (100,20), (120,30)
Knapsack Capacity: 50

Maximum Profit = 220

```

---

## **Key Observations**
- DP ensures **optimal solution**  
- Handles **overlapping subproblems** efficiently  
- Time complexity: O(n * capacity)  

---

## **Learning**
- Practiced **tabulation method in DP**  
- Compared **fractional vs 0-1 knapsack**
```

---
