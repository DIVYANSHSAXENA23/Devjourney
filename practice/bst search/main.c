#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int x)
{
    if(root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = x;
        root->left = NULL;
        root->right = NULL;
    }
    else if(x < root->data)
    {
        root->left = insert(root->left, x);
    }
    else
    {
        root->right = insert(root->right, x);
    }

    return root;
}

void search(struct node *root, int key)
{
    if(root == NULL)
    {
        printf("Not Found\n");
    }
    else if(root->data == key)
    {
        printf("Found\n");
    }
    else if(key < root->data)
    {
        search(root->left, key);
    }
    else
    {
        search(root->right, key);
    }
}

int main()
{
    struct node *root;
    int x;
    int key;

    root = NULL;

    printf("Enter elements (-1 to stop): ");
    scanf("%d", &x);

    while(x != -1)
    {
        root = insert(root, x);
        scanf("%d", &x);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    search(root, key);

    return 0;
}
