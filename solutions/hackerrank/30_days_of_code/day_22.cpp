// HackerRank Problem Link: https://www.hackerrank.com/challenges/30-binary-search-trees/problem

#include <iostream>
using namespace std;	

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root, int h = 0){
            static int mh;
            if (root == NULL) {
                return -1;
            }
            if (mh < h) {
                mh = h;
            }
            if (root->left) {
                getHeight(root->left, h + 1);
            }
            if (root->right) {
                getHeight(root->right, h + 1);
            }
            return mh;
        }

};

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;
    cin >> t;
    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;
    return 0;
}
