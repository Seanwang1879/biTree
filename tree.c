 #include <stdio.h>
 
 typedef struct tree_node{
	 int data;
	 struct node *lchild;
	 struct node *rchild; 
 }TREE_NODE;
 
 
 int preorder(TREE_NODE *tree)
 {
	 if(tree == NULL){
		 return -1; 
	 }
	 printf("%d\n",tree->data);
	 preorder(tree->lchild);
	 preorder(tree->rchild);
	 return 0;
 }