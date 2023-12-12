# Top View Of Binary Tree

### Problem Statement
You are given a Binary Tree of 'n' nodes.

The Top view of the binary tree is the set of nodes visible when we see the tree from the top.

Find the top view of the given binary tree, from left to right.

**Example:**

Input: Let the binary tree be:

[![top-view-5246.png](https://i.postimg.cc/wTJxz4gR/top-view-5246.png)](https://postimg.cc/4mfRb5KX)

Output: [10, 4, 2, 1, 3, 6]

Explanation: Consider the vertical lines in the figure. The top view contains the topmost node from each vertical line.

### Detailed explanation

#### Input Format:
The first line of input contains elements in the level order form for the first binary tree. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

**Input format explanation:**

The level order input for the tree depicted in the below image would be 

[![0000000000004189.png](https://i.postimg.cc/vZ21Yn7v/0000000000004189.png)](https://postimg.cc/pm8Vkp69)

```
1
2 3
4 -1 5 6
-1 7 -1 -1 -1 -1
-1 -1

The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:

1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1

Explanation :
Level 1 :
The root node of the tree is 1

Level 2 :
Left child of 1 = 2
Right child of 1 = 3

Level 3 :
Left child of 2 = 4
Right child of 2 = null (-1)
Left child of 3 = 5
Right child of 3 = 6

Level 4 :
Left child of 4 = null (-1)
Right child of 4 = 7
Left child of 5 = null (-1)
Right child of 5 = null (-1)
Left child of 6 = null (-1)
Right child of 6 = null (-1)

Level 5 :
Left child of 7 = null (-1)
Right child of 7 = null (-1)

The first not-null node (of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level, and so on.
The input ends when all nodes at the last level are null (-1).
```

#### Output Format:
Print the vector/list of all the elements of the top view of the given tree from left to right.

#### Note:
You do not need to print anything; it has already been taken care of. Just implement the given function.

```
Sample Input 1:
1 2 3 4 5 -1 6 -1 7 -1 -1 8 -1 9 -1 -1 11 10 -1 -1 -1 -1 -1

Sample Output 1:
10 4 2 1 3 6

Explanation of Sample Output 1:
The binary tree is:
```
[![top-view-5246.png](https://i.postimg.cc/wTJxz4gR/top-view-5246.png)](https://postimg.cc/4mfRb5KX)
```
Consider the vertical lines in the figure. The top view contains the topmost node from each vertical line.
In test case 1,

Sample Input 2:
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

Sample Output 2:
8 4 2 1 3 7

Explanation of Sample Output 2:
The binary tree is:
```
[![topview-5245.png](https://i.postimg.cc/Ghz74dcW/topview-5245.png)](https://postimg.cc/vcgLjRxh)
```
From left to right, the top view of the tree will be [8,4,2,1,3,7], where 9, 5 and 6 will be hidden when we see from the top of the tree.

Expected time complexity :
The expected time complexity is O(n * log(n)).

Constraints:
1 <= 'n' <= 10000
1 <= data in any node <= 10 ^ 6

Time limit: 1 sec
```

**Complete the following C++ function:**
```c++
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
}
```
