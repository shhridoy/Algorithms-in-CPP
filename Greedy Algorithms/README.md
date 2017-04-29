# Greedy Algorithms Introduction
Greedy is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. Greedy algorithms are used for optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: At every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.<br>
If a Greedy Algorithm can solve a problem, then it generally becomes the best method to solve that problem as the Greedy algorithms are in general more efficient than other techniques like Dynamic Programming. But Greedy algorithms cannot always be applied. For example, Fractional Knapsack problem (See this) can be solved using Greedy, but 0-1 Knapsack cannot be solved using Greedy.

Following are some standard algorithms that are Greedy algorithms.
1) **Kruskal’s Minimum Spanning Tree (MST):** In Kruskal’s algorithm, we create a MST by picking edges one by one. The Greedy Choice is to pick the smallest weight edge that doesn’t cause a cycle in the MST constructed so far.
2) **Prim’s Minimum Spanning Tree:** In Prim’s algorithm also, we create a MST by picking edges one by one. We maintain two sets: set of the vertices already included in MST and the set of the vertices not yet included. The Greedy Choice is to pick the smallest weight edge that connects the two sets.
3) **Dijkstra’s Shortest Path:** The Dijkstra’s algorithm is very similar to Prim’s algorithm. The shortest path tree is built up, edge by edge. We maintain two sets: set of the vertices already included in the tree and the set of the vertices not yet included. The Greedy Choice is to pick the edge that connects the two sets and is on the smallest weight path from source to the set that contains not yet included vertices.
4) **Huffman Coding:** Huffman Coding is a loss-less compression technique. It assigns variable length bit codes to different characters. The Greedy Choice is to assign least bit length code to the most frequent character.

The greedy algorithms are sometimes also used to get an approximation for Hard optimization problems. For example, **Traveling Salesman Problem** is a NP Hard problem. A Greedy choice for this problem is to pick the nearest unvisited city from the current city at every step. This solutions doesn’t always produce the best optimal solution, but can be used to get an approximate optimal solution.

## Source
http://www.geeksforgeeks.org/greedy-algorithms-set-1-activity-selection-problem/

# More about Greedy Algorithms
Greedy algorithms are simple and straightforward. They are shortsighted in their approach in the sense that they take decisions on the basis of information at hand without worrying about the effect these decisions may have in the future. They are easy to invent, easy to implement and most of the time quite efficient. Many problems cannot be solved correctly by greedy approach. Greedy algorithms are used to solve optimization problems

## Greedy Approach
Greedy Algorithm works by making the decision that seems most promising at any moment; it never reconsiders this decision, whatever situation may arise later.

As an example consider the problem of **"Making Change"**.

    Coins available are:

        * dollars (100 cents)
        * quarters (25 cents)
        * dimes (10 cents)
        * nickels (5 cents)
        * pennies (1 cent)
**Problem: **    Make a change of a given amount using the smallest possible number of coins.

 

#### Informal Algorithm
* Start with nothing.
* at every stage without passing the given amount.
     add the largest to the coins already chosen.

#### Formal Algorithm
Make change for n units using the least possible number of coins.

**MAKE-CHANGE (n)**
        
        C ← {100, 25, 10, 5, 1}     // constant.
        Sol ← {};                         // set that will hold the solution set.
        Sum ← 0 sum of item in solution set
        WHILE sum not = n
            x = largest item in set C such that sum + x ≤ n
            IF no such item THEN
                RETURN    "No Solution"
            S ← S {value of x}
            sum ← sum + x
        RETURN S

**Example **   Make a change for 2.89 (289 cents) here n = 2.89 and the solution contains 2 dollars, 3 quarters, 1 dime and 4 pennies. The algorithm is greedy because at every stage it chooses the largest coin without worrying about the consequences. Moreover, it never changes its mind in the sense that once a coin has been included in the solution set, it remains there.


## Characteristics and Features of Problems solved by Greedy Algorithms

To construct the solution in an optimal way. Algorithm maintains two sets. One contains chosen items and the other contains rejected items.

The greedy algorithm consists of four (4) function.

1. A function that checks whether chosen set of items provide a solution.
2. A function that checks the feasibility of a set.
3. The selection function tells which of the candidates is the most promising.
4. An objective function, which does not appear explicitly, gives the value of a solution.

## Structure Greedy Algorithm

* Initially the set of chosen items is empty i.e., solution set.
* At each step
   * item will be added in a solution set by using selection function.
   * IF the set would no longer be feasible
      * reject items under consideration (and is never consider again).
   * ELSE IF set is still feasible THEN
      * add the current item.

## Source
http://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/Greedy/greedyIntro.htm
