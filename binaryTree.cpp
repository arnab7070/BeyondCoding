#include<iostream>
#include<algorithm>
#include<queue>
#include <climits>
#include <stack>
using namespace std;
struct Node{
    int data;
    struct Node* right;
    struct Node* left;

   Node(int val){
       data = val;
       right = NULL;
       left = NULL;
    }
   
};
//preorder traversal implepentation
void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//postorder traversal implementation
void postorder(struct Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//inorder traversal implementation
void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//count all the nodes
int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->right) + countNodes(root->left)  + 1;
}
//sum of all nodes of a binary tree
int sumOfAllNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->data;
}
//height of a binary tree
int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(heightOfTree(root->left),heightOfTree(root->right)) + 1;
}
//diameter calculation of a binary tree
int calcdiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int currDiameter = heightOfTree(root->left)+heightOfTree(root->right)+1;
    return max(max(calcdiameter(root->right),calcdiameter(root->left)),currDiameter);
}
//level order traversal 
void levelOrder(Node * root) {
        if(root==NULL){
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            if(node != NULL){
                cout<<node->data<<" ";
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            else if(!q.empty()){
                q.push(NULL);
            }
        }
    }
//sum of nodes in any k th level
int sumOfKthLevel(Node* root, int k){
    if(root == NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(level==k){
                sum += node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
//balanced tree funtion
bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }

    if(abs(heightOfTree(root->right)-heightOfTree(root->left))<=1){
        return true;
    }
    else{
        return false;
    }
}
//rightView of a binary tree
void rightView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* curr = q.front();
            q.pop();

            if(i==n-1){
                cout<<curr->data<<" ";
            }

            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
//left view of a binary tree
void leftView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* curr = q.front();
            q.pop();

            if(i==0){
                cout<<curr->data<<" ";
            }

            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
// to find the lowest distance between two given nodes
Node* LCA(Node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);

    if(left != NULL && right != NULL){
        return root;
    }
    if(left != NULL && right == NULL){
        return left;
    }
    else{
        return right;
    }
}
int findDist(Node* root, int k, int dist){
    if(root == NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left = findDist(root->left, k , dist+1);
    if(left != -1){
        return left;
    }
    else{
        return findDist(root->right, k, dist+1);
    }
}
int distanceBetweenNodes(Node* root, int n1, int n2){
    Node *lca = LCA(root, n1, n2);
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);
    return d1+d2;
}
//calculate the maximum path sum of a binary tree
int maxPathUtil(Node *root, int &ans){
    if(root==NULL){
        return 0;
    }
    int left = maxPathUtil(root->left, ans);
    int right = maxPathUtil(root->right, ans);

    int nodeMax = max(max(root->data, root->data+left+right), max(root->data+left, root->data+right));

    ans = max(ans, nodeMax);
    int singlePathSum = max(root->data, max(root->data + left, root->data + right));
    return singlePathSum;
}
int maxPathSum(Node *root){
    int ans = INT_MIN;
    maxPathUtil(root, ans);
    return ans;
}
//binary search tree implementation
//property of BST: The inorder traversal of BST is always sorted
Node* insertBST(Node *root, int key){
    if (root==NULL) {
    return new Node(key);
    }
    if(key>root->data){
        root->right = insertBST(root->right, key);
    }
    else{
        root->left = insertBST(root->left, key);
    }
    return root;
}
Node* SearchInBST(Node *root, int key){
    if (root==NULL) {
        return NULL;
    }
    if(root->data==key){
        return root;
    }

    if(key>root->data){
       return SearchInBST(root->right, key);
    }
    else{
       return SearchInBST(root->left, key);
    }
}
bool isEqual(Node* root1, Node* root2){

    if(root1==NULL&&root2==NULL){
        return true;
    }
    if(root1==NULL||root2==NULL){
        return false;
    }
    
    bool condition1 = isEqual(root1->right, root2->right);
    bool condition2 = isEqual(root1->left, root2->left);
    bool condition3 = (root1->data == root2->data);

    if(condition1&&condition2&&condition3){
        return true;
    }
    else{
        return false;
    }
}
void zigzagTraversal(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool leftToRight = true;

    currLevel.push(root);

    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();
        if(temp!=NULL){

            cout<<temp->data<<" ";
        
        if(leftToRight){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
        //Right to Left
        else{
            if(temp->right){
                nextLevel.push(temp->right);
            }
            if(temp->left){
                nextLevel.push(temp->left);
            }
        }
        }
        if(currLevel.empty()){
            leftToRight = !leftToRight;
            swap(currLevel,nextLevel);
        }

    }

}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->right = new Node(9);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    cout<<countNodes(root)<<endl;
    cout<<sumOfAllNodes(root)<<endl;
    cout<<heightOfTree(root)<<endl;
    cout<<calcdiameter(root)<<endl;
    levelOrder(root);
    cout<<endl;
    cout<<sumOfKthLevel(root, 3)<<endl;
    if(isBalanced(root)==1){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }
    rightView(root);
    cout<<endl;
    leftView(root);
    cout<<endl;
    cout<<distanceBetweenNodes(root, 4, 5)<<endl;
    Node* LCAFIND =  LCA(root,3,7);
    if(LCAFIND==NULL){
        cout<<"LCA doesn't exist"<<endl;
    }
    else{
        cout<<"LCA: "<<LCAFIND->data<<endl;
    }
    cout<<maxPathSum(root)<<endl;
    /*
        1           //0 th level
      /   \        
     2     3        //1 st level 
    / \   /  \
   4   5  6   7     //2nd level 
    \         /
     9       8      //3rd level
    */   
    struct Node* BSTroot = new Node(8);
    insertBST(BSTroot, 5);
    insertBST(BSTroot, 10);
    insertBST(BSTroot, 13);
    insertBST(BSTroot, 11);
    insertBST(BSTroot, 3);
    insertBST(BSTroot, 6);
    insertBST(BSTroot, 1);

    inorder(BSTroot);
    cout<<endl;
    if(SearchInBST(BSTroot, 45)==NULL){
        cout<<"The element doesn't exists in BST";
    }
    else{
        cout<<"The element exists in BST";
    }
    cout<<endl;
    //BST Structure
    /*
            8
           /  \
          5    11
         / \   / \
        3   6 10 13 
       /     
      1      
    */

    //Equal BST checking
    /*
            8           8
           / \         / \
          5   10      7   10
    */

    Node* root1 = new Node(8);
    root1->left = new Node(5);
    root1->right = new Node(10);

    Node* root2 = new Node(8);
    root2->left = new Node(7);
    root2->right = new Node(10);

    if(isEqual(root1,root2)){
        cout<<"The BSTs are equal\n";
    }
    else{
        cout<<"The BSTs are not equal\n";
    }
    zigzagTraversal(root);
return 0;
}