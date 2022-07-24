#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data < key)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("%d is already present in BST so it can't be inserted\n", key);
            return;
        }
        if (root->data < key)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    struct node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
    printf("As per your request %d is successfully inserted in BST\n", key);
}
struct node* inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
    }
struct node *deleteNode(struct node *root, int key)
{
    struct node* ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    //search for the node to be deleted
   
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    //deletion strategy when the node is found
    else
    {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
        printf("\nYour requested value: %d has been deleted from the BST\n",key);
    } 
    return root;
}
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    struct node *p = createNode(10);
    struct node *p1 = createNode(7);
    struct node *p2 = createNode(14);
    struct node *p3 = createNode(6);
    struct node *p4 = createNode(9);

    //The BST will look like this
    //     10
    //    /  \ 
    //   7   14
    //  / \   
    // 6   9
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inOrder(p);
    printf("\n");
    if (isBST(p))
    {
        printf("Is BST\n");
    }
    else
    {
        printf("Is not BST\n");
    }
    struct node *n = search(p, 10);
    if (n != NULL)
    {
        printf("Found: %d\n", n->data);
    }
    else
    {
        printf("Element not found\n");
    }
    insert(p, 3);
    inOrder(p);
    deleteNode(p, 10);
    inOrder(p);
    return 0;
}