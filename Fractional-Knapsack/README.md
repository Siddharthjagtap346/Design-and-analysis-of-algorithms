# **Fractional Knapsack (Greedy Algorithm)**

---

## **1. Problem Theory**

The **Fractional Knapsack problem** is about:

* **Goal:** Maximize the total value of items that can fit into a knapsack of limited capacity.
* **Twist:** Unlike the 0/1 Knapsack, here you **can take fractions** of items. For example, if an item weighs 10 units but only 5 units of capacity are left, you can take **half the item**.

**Greedy strategy works optimally here** because:

1. We want **maximum value per unit weight**.
2. So, we pick items based on **value-to-weight ratio (`v/w`)**.
3. Keep adding items until the knapsack is full.

   * If a full item cannot fit, we take a **fraction** of it.

---

## **2. Algorithm Steps (High-level)**

### **Step 1: Input Items and Capacity**

* Ask the user for **number of items `n`**.
* For each item, input **value** and **weight**.
* Input the **knapsack capacity `w`**.
* Store items as a `vector<pair<int,int>>` → `(value, weight)`.

### **Step 2: Compute Value-to-Weight Ratio and Sort**

* Use a **comparator function** to compute `value/weight` for each item.
* Sort all items in **descending order of ratio** so that the most valuable per unit weight comes first.

### **Step 3: Initialize Total Value**

* Create `ans = 0.0` to **store total value** collected in knapsack.
* `w` keeps track of **remaining capacity**.

### **Step 4: Greedy Item Selection**

* Iterate over sorted items:

  * **If item fits fully:**

    * Add its full value to `ans`
    * Reduce `w` by its weight
  * **If item doesn’t fit:**

    * Take fraction: `(value/weight) * remaining capacity`
    * Add fractional value to `ans`
    * Stop loop as knapsack is now full

### **Step 5: Output Maximum Value**

* Print `ans` with **2 decimal places** using `setprecision(2)`
* This is the **maximum value achievable** in the knapsack

---

## **Time Complexity**

* Sorting: `O(n log n)`
* Iterating through items: `O(n)`
* **Overall:** `O(n log n)`

---

## **3. Sample Input/Output**

```
Items: (value, weight) → (60, 10), (100, 20), (120, 30)
Knapsack Capacity: 50

Maximum value in Knapsack = 240.00
```

**Screenshot:** <img width="780" height="276" alt="Fractional Knapsack Screenshot" src="https://github.com/user-attachments/assets/6159c9b8-d348-4993-b184-97bbf5addd83" />

**Explanation:**

* Take **60 from 60/10 item** → full
* Take **100 from 100/20 item** → full
* Take **80 from 120/30 item** → partial (20/30 fraction)
* **Total = 60 + 100 + 80 = 240**

---

## **4. Key Observations**

* Fractional knapsack allows **splitting items**.
* **Greedy works optimally** here (unlike 0/1 Knapsack).
* **Time complexity:** `O(n log n)` due to sorting.

---

## **5. Learning Points**

* Understand **greedy algorithm applicability**.
* Practice **sorting by ratio**.
* Learn **fractional contribution calculation**.
* Useful for **resource allocation problems** in real life.

---
