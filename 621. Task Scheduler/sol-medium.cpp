class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      vector<int> count(26,0);
      for(char c: tasks){
        count[c-'A']++;
      }
      sort(count.begin(), count.end());

      int mx = count.back(); 
      int len = tasks.size();
      int i = 25;
      while(i>0 && count[i-1] == mx) i--;
      return max(len, (mx-1)*(n+1) + 25 - i + 1);
    }
};
