# Range Query
Range Query problems are very interesting problems to learn.</br>
Generally Query problems are two types : </br>
* offline</br>
* online</br>

In solving Range query Problems with given range(L,R) and queries(Q) time-complexity will be O(N.Q) where N represents length of range and Q represents number of queries.</br>

Here we are trying to reduce the time complexity  O(N.Q) in order of O(Q.1) or O(Q.sqrt(N)) by using below methods. 

Comming to difference between offline and online Range Queries problems is that in offline range query problems we are given all queries before hand while in online we do not know what is the next query.

Here we gonna discuss about the offline queries using following methods:
* Prefix Array
* Square Root Decomposition
* Mo's Algorithm
* Sparse Table

**Prefix Array**
Suppose we want to compute a function F(L,R) for subarray A[L...R] of an array A.
If we can write F(L,R)=F(1...R) @ F(1...L-1) where @ can be any operator(+,-,x,^,& ...etc), then we can preprocess A to compute prefix funtion p(i)=F(1...i) for all i and use prefix funtion p(1...N) to compute F(L,R) in constant time using.

**F(L,R)=p(R) @ p(L-1)**

Take Away:
* we can use Prefix Array technique for range based query involving sum, multiplication(excluding "0"), Xor operations.

