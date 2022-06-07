#include<iostream>
#include<map>
#include<vector>
using namespace std;
//Structure of binary tree
struct Node{
    int key;
    Node* left;
    Node* right;
    //Constructor
    Node(int val){
        key = val;
        right = NULL;
        left = NULL;
    }
};
void getVerticalOrder(Node* root, int horizontal_dist, map<int, vector<int>> &mp){
    //base case
    if(root == NULL){
        return;
    }
    mp[horizontal_dist].push_back(root->key);
    getVerticalOrder(root->left, horizontal_dist-1, mp);
    getVerticalOrder(root->right, horizontal_dist+1, mp);
}
int main()
{
    struct Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    //Creating the map
    map<int, vector<int>> mp;
    int horizontal_dist = 0;
    getVerticalOrder(root, horizontal_dist, mp);

    //creating iterator
    map<int, vector<int>> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<": ";
        for(int i = 0; i < (it->second).size(); i++){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}