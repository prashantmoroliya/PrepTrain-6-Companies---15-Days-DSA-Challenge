# Check Identical Trees

### Problem Statement:
You are given two binary trees with 'n' and 'm' nodes respectively.

You need to return true if the two trees are identical. Otherwise, return false.

Example:
[![example-5496.png](https://i.postimg.cc/9QzkcFJg/example-5496.png)](https://postimg.cc/dhP6BvMG)

The given trees are identical as:-
1. The number of nodes in both trees is the same. 
2. The number of edges in both trees is the same. 
3. The data for root for both the trees is the same i.e 5. 
4. The data of root -> left (root’s left child) for both the trees is the same i.e 2.
5. The data of root -> right (root’s right child) for both the trees is the same i.e 3.
6. The data of root -> right -> left ( left child of root’s right child) for both the trees is the same i.e 6.
7. Nodes with data 2 and 6 are the leaf nodes for both the binary trees.

### Detailed explanation:

#### Input format:
The first line of input contains elements in the level order form for the first binary tree. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

The second line of input contains elements in the level order form for the second tree. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

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
Print in a single line either “True” (if the two trees are identical) or “False” otherwise.

#### Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.

```
Sample input 1 :

5 2 3 -1 6 -1 -1 -1 -1
5 2 3 -1 6 -1 -1 -1 -1

Sample output 1 :

True

Explanation for Sample Input 1 :

Refer to the example given above in the problem description.

Sample input 2 :

1 -1 2 -1 -1
1 2 -1 -1 -1  

Sample output 2 :

False

Explanation for Sample Input 2 :
```
[![example2-5498.png](https://i.postimg.cc/ry07r9Wy/example2-5498.png)](https://postimg.cc/LhSydLNG)
```
Although the following conditions satisfy:

The number of nodes in both trees is the same.
The number of edges in both trees is the same. 
The data for root for both the trees is the same i.e 1.

It’s visible from the pictorial representation that the trees are not identical. Reason being:
In Binary tree 1, root’s right is NULL but it’s not true for Binary tree 2. 
In Binary tree 1, root’s left is not NULL but it’s not true for Binary tree 2. 

Expected time complexity:

The expected time complexity is O(min(n,m)).

Constraints :

0 <= 'n' <= 10^6
0 <= 'm' <= 10^6
1 <= Node Data <= 10^9 

Time limit: 1 sec

```

**Complete the following C++ function:**
```c++
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

    class BinaryTreeNode {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
		
        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 
}
```


