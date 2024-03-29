/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* dummy = new Node(-1), *cur = dummy;
        Node* head =  root;

        while(root){
            if(root->left){
                cur->next = root->left;
                cur = cur->next;
            }
            if(root->right){
                cur->next = root->right;
                cur = cur->next;
            }
            root = root->next;

            if(!root){
                cur = dummy;
                root = dummy->next;
                dummy->next = nullptr;
            }
        }
        return head;
    }
};

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return nullptr;
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            for(int i=0; i<s; i++){
                Node *t = q.front(); q.pop();
                if(i<s-1) t->next = q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return root;
    }
};
