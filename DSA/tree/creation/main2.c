#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
 {
 int data;
 struct node *left, *right;
 };

struct node* create()
 {
 int x;
 struct node *newnode;
 newnode=(struct node*) malloc(sizeof(struct node));
 printf("Enter data (Add -1 to top )");
 scanf("%d",&x);
 if(x==-1)
  {
    return(0);
  }
 newnode->data=x;
 printf("Enter left child of %d\n",x);
 newnode->left=create();
 printf("Enter right child of %d\n",x);
 newnode->right	=create();
 return (newnode);
 }
void preorder(struct node *root)
 {
 if(root==0)
  return;
 printf("%d->",root ->data);
 preorder(root->left);
 preorder(root->right);
 }
void inorder(struct node *root)
 {
 if(root==0)
  return;
 inorder(root->left);
 printf("%d->",root ->data);
 inorder(root->right);
 }
 void postorder(struct node *root)
 {
 if(root==0)
  return;
 postorder(root->left);
 postorder(root->right);
 printf("%d->",root ->data);
 }
struct node* search(struct node * root,int item)
  {
  if (root==NULL || root->data==item)
    return root;
  else if (item<root->data)
    return search(root->left,item);
  else if (item>root->data)
    return search(root->right,item);
  }

void main()
 {
  int item;
  struct node *root;
  root=create();
  printf("PREORDER");
  preorder(root);
  printf("INORDER");
  inorder(root);
  printf("POSTORDER");
  postorder(root);
  /*printf("Enter item to be searched: ");
  scanf("%d",&item);
  struct node* found=search(root,item);
  if (found==NULL)
    printf("ITEM NOT FOUND ");
  else
    printf("ITEM FOUND IN THE TREE ");
  printf("Enter item to be DELETED: ");
  scanf("%d",&item);
  struct node* found=search(root,item);
  if (found==NULL)
    printf("ITEM NOT FOUND ");
  else
    new_root=remove(root,found);
  getch();*/
 }