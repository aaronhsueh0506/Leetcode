class Solution {
public:
    struct TrieNode{
        TrieNode* child[2];
        int count;

        TrieNode(){
            child[0] = child[1] = nullptr;
            count = 0;
        }
    };

    void insert(TrieNode* root, int num){
        TrieNode* p = root;
        for(int i=15; i>=0; i--){
            int bit = (num>>i) & 1;
            if(!p->child[bit]) p->child[bit] = new TrieNode();
            p = p->child[bit];
            p->count++;
        }
    }

    int getcount(TrieNode* root, int num, int lim){
        TrieNode *p = root;
        int cnt = 0;
        for(int i=15; i>=0; i--){
            int bit_num = (num >> i) & 1;
            int bit_lim = (lim >> i) & 1;

            // find less than lim, if limit bit is 1, bit_num 0 can add directly, and check another side
            //                     if limit bit is 0, go bit_num
            if(bit_lim==1){
                // p->child[bit_num] means num_bit is 1 or 0, previous bit is also 1 or 0. (XOR)
                // while return 0, and bit_lim is 1, so all points cross this bit will less than lim
                if(p->child[bit_num]) cnt += p->child[bit_num]->count;
                // check another side, that bit_num is 1 or 0, but previous is 0 or 1.
                p = p->child[1-bit_num];
            }
            else{
                p = p->child[bit_num];
            }
            if(!p) break;
        }
        return cnt;
    }

    int countPairs(vector<int>& nums, int low, int high) {
        TrieNode* root = new TrieNode();
        int res = 0;
        for(int num:nums){
            res += getcount(root, num, high+1) - getcount(root, num, low);
            insert(root, num);
        }
        return res;
    }
};
