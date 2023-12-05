# Shortest path in an unweighted graph

### Problem Statement

The city of Ninjaland is analogous to the unweighted graph. The city has ‘N’ houses numbered from 1 to ‘N’ respectively and are connected by M bidirectional roads. If a road is connecting two houses ‘X’ and ‘Y’ which means you can go from ‘X’ to ‘Y’ or ‘Y’ to ‘X’. It is guaranteed that you can reach any house from any other house via some combination of roads. Two houses are directly connected by at max one road.

A path between house ‘S’ to house ‘T’ is defined as a sequence of vertices from ‘S’ to ‘T’. Where starting house is ‘S’ and the ending house is ‘T’ and there is a road connecting two consecutive houses. Basically, the path looks like this: (S , h1 , h2 , h3 , ... T). you have to find the shortest path from ‘S’ to ‘T’.

For Example:

In the below map of Ninjaland let say you want to go from S=1 to T=8, the shortest path is (1, 3, 8). You can also go from S=1 to T=8  via (1, 2, 5, 8)  or (1, 4, 6, 7, 8) but these paths are not shortest.

[![pic1-6747-1.png](https://i.postimg.cc/k4yw2SXQ/pic1-6747-1.png)](https://postimg.cc/k6BWZBSG)

### Detailed explanation:

#### Input Format:

- The first line of input will have a single positive integer ‘T’, denoting the number of test cases.
- For each test case:
  - The first line contains two positive integers ‘N’ and ‘M’ denoting the number of houses and the number of roads in Ninjaland.
  - The second line contains two integers ‘S’ and ‘T’ denoting the starting and ending house in the path.
  - Next M lines each contain two integers ‘X’ and ‘Y’ denoting a road between house ‘X’ and house ‘Y’.

#### Output Format:

- Return a vector of nodes denoting the shortest path starting from ‘S’ and ending in ‘T’.
- If there is more than one shortest path you can return any one of them.
- The output of each test case will be "Correct" if the correct answer is returned, else it will be "Incorrect".

#### Note:

You do not need to print anything, it has already been taken care of. Just implement the given function. 

#### Constraints:

- 1 <= T <= 100
- 2 <= N <= 10^3
- 1 <= M <= min( N *(N - 1) / 2 , 1000 )
- 1 <= S, T <= N

Time Limit: 1 sec

```
Sample Input:
1
4 4
1 4
1 2
2 3
3 4
1 3

Sample Output:

( 1 , 3 , 4 )

Explanation:

In the given graph, there are two ways to go from 1 to 4: (1, 2, 3, 4) and (1, 3, 4), but the second path is the shortest.
```
[![pic2-6748.png](https://i.postimg.cc/Gm0Y12bd/pic2-6748.png)](https://postimg.cc/zVj3CqLc)

```
Sample input 2 :

1
8 9
1 8
1 2
1 3
1 4
2 5
5 8 
3 8
4 6
6 7
7 8

Sample output 2 :

( 1 , 3 , 8 )
```

**Complete the following C++ function:**
```c++
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
	
}```