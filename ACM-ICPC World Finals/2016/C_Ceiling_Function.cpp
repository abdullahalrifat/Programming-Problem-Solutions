// C program to demonstrate insert operation in binary search tree
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}
bool equalTrees(struct node* lhs, struct node* rhs)
{
    // Empty trees are equal
    if (lhs == NULL && rhs == NULL)
        return true;

    // Empty tree is not equal to a non-empty one
    if (lhs == NULL) return false;
    if (rhs == NULL) return false;


    // otherwise check recursively
    return equalTrees(lhs->left, rhs->left)
           && equalTrees(lhs->right, rhs->right);
}
// Driver Program to test above functions
int main()
{
    /* Let us create following BST
            50
        /	 \
        30	 70
        / \ / \
    20 40 60 80 */
    int n,k;
    cin>>n>>k;
    struct node *treelist[100];
    for(int j=0;j<n;j++)
    {
        struct node *root = NULL;
        int temp;
        cin>>temp;
        root = insert(root, temp);
        for(int i=1;i<k;i++)
        {
            int temp;
            cin>>temp;
            insert(root, temp);
        }
        treelist[j] = root;

    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        bool isnew=true;
        for(int j=i+1;j<n;j++)
        {

            if(equalTrees(treelist[i],treelist[j]))
            {
                isnew=false;
            }

        }
        cnt+=isnew;
    }
    cout<<cnt<<endl;

    return 0;
}
