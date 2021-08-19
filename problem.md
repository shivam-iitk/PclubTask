                                                                HIDDEN NUMBER
                                                         time limit per test: 1 second
                                                       memory limit per test: 256 megabytes
                                                            input: standard input
                                                            output: standard output


Naman and Raman play a game of numbers. Raman gives Naman two number N and K. There is a number g(g < N) given to him which is hidden to him. The challenge is to find g but he cannot move in linear way. Instead he can move in a modular fashion.

So first, he starts from indices i(0 <= i < N) and selects all indices i in increasing order(upto N-1) such that i mod K = 0 and tells number i to Raman, then all indices i(starting form i = 0) in increasing order(upto N-1) such that i mod K = 1, and tells number i to Raman again, and so on.

Given N, the index g that will work, and K, find after how many turns will Naman be able to guess the correct hidden number(g).


Input
The first line of the input contains a single integer x(1 <= x <= 10^5) that denotes the number of test cases. The description of x test cases will follow in next x lines.

The first and only line of each test case contains three space-separated integers N(1 <= N <= 10^9), g(0 <= g < N), and K(1 <= K <= 10^9).


Output
For each test case, print a single line containing one integer — after how many turns will Naman be able to guess the correct hidden number.
