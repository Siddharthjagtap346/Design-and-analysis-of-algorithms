## **2. Huffman Encoding **

---

## **Theory**
Huffman Encoding is a **lossless data compression** algorithm:  
- Uses **frequency of characters** to assign variable-length codes  
- **Frequent characters → shorter codes**  
- **Infrequent characters → longer codes**  
- Builds a **binary tree (Huffman Tree)**  

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
```

