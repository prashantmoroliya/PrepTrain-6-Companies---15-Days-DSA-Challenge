# Maximum Sum Path Of A Binary Tree

### Problem Statement
You are given a binary tree having 'n' nodes. Each node of the tree has an integer value.

Your task is to find the maximum possible sum of a simple path between any two nodes (possibly the same) of the given tree.

A simple path is a path between any two nodes of a tree, such that no edge in the path is repeated twice. The sum of a simple path is defined as the summation of all node values in a path.

### Detailed explanation

#### Input Format:
The only line of input contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

For example, the input for the tree depicted in the below image would be :

[![0000000000004189.png](https://i.postimg.cc/vZ21Yn7v/0000000000004189.png)](https://postimg.cc/pm8Vkp69)

```
1
2 3
4 -1 5 6
-1 7 -1 -1 -1 -1
-1 -1
```

Explanation:

```
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

The first not-null node(of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level, and so on.
The input ends when all nodes at the last level are null(-1).
```

**Note:**

The above format was just to provide clarity on how the input is formed for a given tree. 
The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:

1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1

#### Output Format:
Print the maximum sum of a simple path between any two nodes of the given tree.

#### Note:
You don’t need to print anything; It has already been taken care of.

```
Sample Input 1:
1 2 3 4 -1 -1 -1 -1 -1

Sample Output 1:
10

Explanation For Sample Input 1:
The tree looks as follows:
                        1
                       / \
                      2   3 
                     /
                    4
The path between Node 3 (with value 3) and Node 4 (with value 4) produces the maximum sum, i.e., 10. Hence, the maximum possible sum is 10 in this case.

Sample Input 2:
2 4 -1 3 6 -1 -1 -1 -1 

Sample Output 2:
13

Explanation For Sample Input 2:
The tree looks as follows:
                        2
                       / 
                      4    
                     / \   
                    3   6
The path between Node 3 (with value 3) and Node 4 (with value 6) produces the maximum sum, i.e., 13. Hence, the maximum possible sum is 13 in this case.

Expected time complexity:
The expected time complexity is O(n).


Constraints:
1 <= 'n' <= 10^6
-10^5 <= 'data' <= 10^5 and 'data' !=-1

Where ‘n’ is the total number of nodes in the binary tree, and 'data' is the value of the binary tree node

Time Limit: 1 sec
```

**Complete the following C++ function:**
```c++
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int maxPathSum(BinaryTreeNode<int> *root)
{
    // Write your code here

}
```


