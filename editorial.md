PROBLEM

We are given N, K and g. First, Naman tries all indices from 0 to N-1 one by one, such that i mod K = 0 in increasing order, then all indices with i mod K = 1 and so on.
We have to find number of turns after which he reaches a given index g.

Explanation

1. We group the indices having same value of i mod K, we get K different groups. Now, these groups are processed one by one.
2. We can get the group in which g is present by computing g mod K.
3. First, N mod K groups have (N/K)+1 elements, and rest (K-N) mod K groups have N/K elements.
4. We have to count all elements in first g mod K groups ,and then we have to count the number of indices in the group same as that of g, which will be tested before g.
