## 2. Huffman Encoding 

---

## **Theory**

* **Huffman Encoding** is a **lossless data compression** algorithm that reduces the total number of bits needed to store or transmit data.

* **Basic Idea:**

  1. Compute the **frequency** of each character in the input.
  2. Assign **variable-length binary codes**:

     * **Frequent characters → shorter codes**
     * **Infrequent characters → longer codes**
  3. Construct a **binary tree (Huffman Tree)** where each leaf represents a character.
  4. Generate codes by traversing the tree:

     * Left edge → `0`
     * Right edge → `1`
  5. Ensure all codes are **prefix-free**, meaning no code is a prefix of another.

* **How it works:**

  * Use a **min-heap** (priority queue) to always combine the **two least frequent nodes**.
  * Repeat until only **one node remains**, which becomes the root of the Huffman tree.
  * Traverse the tree recursively to generate **binary codes** for each character.

* **Why it’s efficient:**

  * Frequently used characters get **shorter codes**, saving space.
  * Infrequent characters get longer codes, minimizing waste.
  * Guarantees **optimal prefix-free codes** using a **greedy approach**.

* **Time Complexity:**

  * Building the heap: `O(n)`
  * Extracting min and combining nodes: `O(n log n)`
  * Overall: `O(n log n)` (n = number of unique characters)

* **Key Concepts Practiced:**

  * Greedy algorithm
  * Tree and heap data structures
  * Encoding and decoding logic

---

## **Huffman Tree Diagram (Example)**

**Input:**
Characters: `A, B, C, D`
Frequencies: `23, 12, 34, 10`

**Huffman Tree:**

```
           (*79)
          /    \
       (*34)    C:34
      /    \
   B:12     (*22)
           /    \
        D:10    A:12
```

**Generated Huffman Codes:**

| Character | Code |
| --------- | ---- |
| C         | 1    |
| B         | 00   |
| D         | 010  |
| A         | 011  |

**Explanation:**

* Traverse from root to each leaf: left = `0`, right = `1`
* Ensures **prefix-free codes**
* Shorter codes assigned to **frequent characters**
* Huffman encoding **reduces overall storage bits** significantly.

---

## **Code Overview**
- Builds **min-heap** of character frequencies  
- Generates **Huffman Codes** recursively  
- Can **encode and decode strings**  
- Compares original and encoded **bit length**

---

## **Sample Input/Output**
```

Characters: A, B, C, D
Frequencies: 23, 12, 34, 10

Huffman Codes:
A : 10
B : 110
C : 0
D : 111

Original text: ABCD
Encoded text: 101100111
Decoded text: ABCD

Original bits (8-bit ASCII): 32
Encoded bits (Huffman): 9

```

---

## **Key Observations**
- Huffman coding reduces **overall storage bits**.  
- Encodes frequently used letters with **shorter codes**.  
- Tree construction ensures **prefix-free codes** (no code is prefix of another).  

---

## **Learning**
- Applied **greedy algorithm**  
- Understood **tree and heap structures**  
- Practiced **encoding & decoding logic**
