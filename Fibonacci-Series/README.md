
---

## **Theory**
Fibonacci series is a sequence where each number is the sum of the two preceding ones:  
0, 1, 1, 2, 3, 5, 8…  
Three common methods to compute Fibonacci numbers:

1. **Recursive Approach**  
   - Uses function calling itself  
   - Easy to implement  
   - High time complexity (O(2^n))  

2. **Iterative Approach**  
   - Uses loops  
   - Linear time complexity (O(n))  
   - Efficient and less memory use  

3. **Binet's Formula (Non-recursive)**  
   - Direct formula using golden ratio  
   - Constant time O(1)  
   - Less intuitive but very fast  

---

## **Code Overview**
- Counts **steps** for each method.  
- Measures **execution time** using `<chrono>`.  
- Compares recursive, iterative, and formula methods.  

---

## **Sample Input/Output**
```

Enter Fibonacci number index (n): 5

Fibonacci Series (Recursive): 0 1 1 2 3 5
Recursive Steps: 15
Time Taken (Recursive): 10 microseconds

Fibonacci Series (Iterative): 0 1 1 2 3 5
Iterative Steps: 7
Time Taken (Iterative): 2 microseconds

Fibonacci Series (Non-Recursive using Binet's Formula): 0 1 1 2 3 5
Formula Steps: 6
Time Taken (Formula): 1 microsecond

```

---

## **Key Observations**
- Recursive approach is elegant but **inefficient** for large n.  
- Iterative is **practical for real applications**.  
- Binet’s formula is **fastest**, but can have floating-point inaccuracies.  

---

## **Learning**
- Understood **time complexity differences**  
- Practiced **step counting** for algorithms  
- Learned trade-offs between **simplicity vs efficiency**
