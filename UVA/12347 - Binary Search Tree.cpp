#include<stdio.h>
#include<stdlib.h>
int min;
int count = 0;
int highlevel=0;
struct bst{
	int data;
	bst *left;
	bst *right;
	int level;
};
bst* insert(bst* root, int data){
	count++;
	if (root == NULL){
		root = (bst*)malloc(sizeof(bst));
		root->data = data;
		root->level = count;
		if (root->level > highlevel)
		{
			highlevel = root->level;
		}
		root->left = root->right = NULL;
	}
	else if (data <= root->data){

		root->left = insert(root->left, data);

	}
	else{
		root->right = insert(root->right, data);

	}
	count--;
	return root;
}
void PostOrder(bst *root)
{
	  if (root != NULL)
	 {
		 PostOrder(root->left);
		 PostOrder(root->right);
		 printf("%d\n",root->data);
	 }
}
int main()
{
    int n;
    bst *root = NULL;
    while((scanf("%d",&n))!=EOF)
    {
        root = insert(root,n);
    }
    PostOrder(root);
}
