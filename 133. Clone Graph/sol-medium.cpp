class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> m;
        return DFS(node, m);
    }

    Node* DFS(Node* node, unordered_map<Node*, Node*>& m){
        if(!node) return nullptr;
        if(m.count(node)) return m[node];
        Node* clone = new Node(node->val);
        m[node] = clone;
        for(Node* neighbor: node->neighbors){
            clone->neighbors.push_back(DFS(neighbor, m));
        }
        return clone;
    }
};
