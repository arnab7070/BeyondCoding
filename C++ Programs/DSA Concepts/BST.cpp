//DSA Level up course
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;

    //Constructor
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class BST{
    public:
    node* insert(node* root, int item){
        if(root==NULL){
            return new node(item);
        }
        if(root->data > item){
            root->left = insert(root->left, item);
        }
        else{
            root->right = insert(root->right, item);
        }
        return root;
    }

    void preorder(node *root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(node *root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    void inorder(node *root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    void levelorder(node* root){
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            node* front = q.front();
            q.pop();
            if(front == NULL){
                cout<<endl;
                //Insert a new null for next level
                if(!q.empty()){
                    q.push(NULL);
                }
            }

            if(front != NULL){
                cout<<front->data<<" ";
                //If left child present
                if(front->left){
                    q.push(front->left);
                }
                //If right child present
                if(front->right){
                    q.push(front->right);
                }
            }
        }
    }

    int treeHeight(node* root){
        if(root==NULL){
            return 0;
        }
        int h1 = treeHeight(root->right);
        int h2 = treeHeight(root->left);

        return max(h1,h2)+1;
    }
    int diameter(node* root){
        if(root==NULL){
            return 0;
        }
        int currDiameter = treeHeight(root->right)+treeHeight(root->left);
        return max(max(diameter(root->right),diameter(root->left)),currDiameter);
    }

    int replaceWithSum(node*root){
        //base case
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }

        int LeftSum = replaceWithSum(root->left);
        int RightSum = replaceWithSum(root->right);
        int temp = root->data; //To store the copy of the current value
        root->data = LeftSum+RightSum; //Updating the value of root data
        return root->data + temp;
    }

    bool isBalancedTree(node *root){
        if(root==NULL){
            return 0;
        }
        int h1 = isBalancedTree(root->right);
        int h2 = isBalancedTree(root->left);
        
        return h1==h2;
    }
    void printAtLevelK(node* root, int k){
        if(root==NULL or k < 0){
            return;
        }
        //Base Case
        if(k == 0){
            cout<<root->data<<" ";
        }
        //Recusive Calls
        printAtLevelK(root->left, k-1);
        printAtLevelK(root->right, k-1);
    }

    int sumOfAllNodes(node* root){
        int sum = 0;
        //Base case
        if(root==NULL){
            return 0;
        }
        return sumOfAllNodes(root->right) + sumOfAllNodes(root->left) + root->data;
    }

    int countNodes(node* root){
        //base case
        if(root==NULL){
            return 0;
        }
        return countNodes(root->right)+countNodes(root->left)+1;
    }

    int maxNodeVal(node* root){
        if(root==NULL){
            return 0;
        }
        if(root->right==NULL){
            return root->data;
        }
        maxNodeVal(root->right);
    }

    int minNodeVal(node* root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL){
            return root->data;
        }
        minNodeVal(root->left);
    }
};
int main()
{
    BST bst;
    node* root = new node(6);
    bst.insert(root,4);
    bst.insert(root,10);
    bst.insert(root,5);
    bst.insert(root,14);
    bst.preorder(root);
    cout<<endl;
    bst.postorder(root);
    cout<<endl;
    bst.inorder(root);
    cout<<endl;
    bst.levelorder(root);
    cout<<"Tree height is: "<<bst.treeHeight(root)<<endl;
    cout<<"Tree diameter is: "<<bst.diameter(root)<<endl;
    bst.printAtLevelK(root,1);
    cout<<endl;
    cout<<"Sum of all nodes: "<<bst.sumOfAllNodes(root)<<endl;
    cout<<"Maximum node value is: "<<bst.maxNodeVal(root)<<endl;
    cout<<"Minimum node value is: "<<bst.minNodeVal(root)<<endl;
    bst.replaceWithSum(root);
    bst.levelorder(root);
    if(bst.isBalancedTree(root)){
        cout<<"Tree is Balanced"<<endl;
    }
    if(!bst.isBalancedTree(root)){
        cout<<"Tree is not Balanced"<<endl;
    }
    cout<<"The total number of nodes: "<<bst.countNodes(root)<<endl;
    return 0;
}