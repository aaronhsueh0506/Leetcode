class FreqStack {
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        maxfreq = max(maxfreq, ++freq[val]);
        m[freq[val]].push_back(val);
    }
    
    int pop() {
        int x = m[maxfreq].back();
        m[maxfreq].pop_back();
        freq[x]--;
        if(m[maxfreq].empty()) maxfreq--;
        return x;
    }
private:
    int maxfreq;
    unordered_map<int, int> freq; //{val, times}
    unordered_map<int, vector<int>> m; // {times, {num1, num2...}}
};
