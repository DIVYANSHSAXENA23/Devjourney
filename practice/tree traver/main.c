#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node *insert(struct node *root,int value){
    if (root==NULL){
        return create(value);
    }
    else if (value<root->data){
        root->left=insert(root->left,value);

    }
    else if (value>root->data){
       root->right= insert(root->right,value);
    }
    return root;
}
void inorder(struct node *root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(struct node* root){
    if (root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root){
    if (root!=NULL){
        
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
struct node* findmin(struct node* root){
    while (root->left!=NULL) root=root->left;
    return root;
}
struct node* delete_node(struct node* root,int value){
    if (root==NULL) return root;
     if (value<root->data) delete_node(root->left,value);
     else if (value>root->data) delete_node(root->right,value);
    else {
        if (root->left==NULL){
            struct node *temp=root->right;
            free(temp);
            return temp;
        }
        else if  (root->right==NULL){
            struct node *temp=root->left;
            free(temp);
            return temp;
        }
        struct node *temp=findmin(root->right);
        root->data=temp->data;
        root->right=delete_node(root->right,temp->data);

    }
    return root;
}
int main(){
  int n,value,del;
  struct node *root=NULL;
  printf("enter element no");
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf ("%d",&value);
    root=insert(root,value);
  }
  scanf("%d",&del);
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
  postorder(root);
  printf("\n");
  root=delete_node(root,del);
  inorder(root);
  printf("\n");
}