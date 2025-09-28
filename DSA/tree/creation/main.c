#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
} ;
struct node * create(){
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("enter data ....... add -1 to stop");
    scanf("%d",&x);
    if (x==-1){
        return 0;
    }
   
        newnode->data=x;
        printf("enter left of %d",x);
        newnode->left=create();
          printf("enter right of %d",x);
        newnode->right=create();
        return newnode;
 
}
void preorder(struct node *root){
    if (root==0){
        return ;
    }
    
       printf("%d -> ",root->data);
       preorder(root->left);
       preorder(root->right);

    
}
void postorder(struct node *root){
    if (root==0){
        return ;
    }
    
       
       postorder(root->left);
       postorder(root->right);
       printf("%d -> ",root->data);

    
}
void inorder(struct node *root){
    if (root==0){
        return ;
    }
    
       
       inorder(root->left);
        printf("%d -> ",root->data);
       inorder(root->right);
       

    
}
struct node *search(struct node *root,int item){
    if (root==NULL || root->data == item){
        return root;
    }
    else if (root->data>item){
        search(root->left,item);
    }
    else if (root->data<item){
        search(root->right,item);
    }
}
void main(){
    struct node *root;
    root=create();
    printf("PREORDER");
    preorder(root);
    printf("POSTORDER");
    postorder(root);
    printf("INORDER");
    inorder(root);
    int item;
    printf("enter element to search");
    scanf("%d",&item);
    root=search(root,item);
    if (root==NULL){
        printf("item not found");
    }
    else printf("found");

}
