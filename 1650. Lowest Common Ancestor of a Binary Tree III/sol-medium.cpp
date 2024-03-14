/*
// Definition for a Node->
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        int p_depth = getdepth(p);
        int q_depth = getdepth(q);

        while(p_depth>q_depth){
            p_depth--;
            p = p->parent;
        }

        while(p_depth<q_depth){
            q_depth--;
            q = q->parent;
        }

        while(p!=q){
            p = p->parent;
            q = q->parent;
        }
        return p;
    }

    int getdepth(Node* node){
        int depth = 0;
        while(node != nullptr){
            node = node->parent;
            depth++;
        }
        return depth;
    }
};
