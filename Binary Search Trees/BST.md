## BST
                30
        15              50
    19       20     40      60

* BST is the type of binary tree where all the elements on the left child nodes are smaller than its parent and all elements
on the right child nodes are greater than its parent
* Search time depends on height of tree.

## BST Properties
* No duplications
* Inorder traversal of BST gives sorted order: 
    Inorder: 10 15 20 30 40 50 60
* No. of BST for 'n' nodes:
    n = 3 -> 10 20 30
    Inorder: 10 20 30

    ### Formula
    Inorder:  T(n) = 2nCn / (n+1)  -> Catalan Number__
    https://cdn.discordapp.com/attachments/763862219649450025/1021361985167839283/unknown.png?size=4096

