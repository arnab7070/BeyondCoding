#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
    
};

struct node* createNode(int data){
    struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node *root)
{
    if (root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node *root)
{
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int main()
{
    struct node *p = createNode(0);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(2);
    struct node *p3 = createNode(3);
    struct node *p4 = createNode(4);
    struct node *p5 = createNode(5);
    struct node *p6 = createNode(6);
    struct node *p7 = createNode(7);
    struct node *p8 = createNode(8);
    struct node *p9 = createNode(9);

/*
                          0
                        /   \
                        1    2
                       /     / \
                      3     4   5
                     / \    \   / 
                    6   7    8  9
*/

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p3->left = p6;
    p3->right = p7;
    p2->left = p4;
    p2->right = p5;
    p4->right = p8;
    p5->left = p9;

    printf("Preorder Traversal of this binary tree is " );
    preOrder(p);
    printf("\n");
    printf("Postorder Traversal of this binary tree is " );
    postOrder(p);
    printf("\n");
    printf("Inorder Traversal of this binary tree is " );
    inOrder(p);
    return 0;
}