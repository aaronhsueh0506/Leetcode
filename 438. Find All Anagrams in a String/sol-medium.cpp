class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      vector<int> m1(26), m2(26);
      vector<int> res;

      for(int i=0; i<p.size(); i++){
        m1[s[i]-'a']++;
        m2[p[i]-'a']++;
      }
      if(m1==m2) res.push_back(0);

      for(int i=p.size(); i<s.size(); i++){
        m1[s[i-s.size()]--;
        m1[s[i]]++;
        if(m1==m2) res.push_back(i-p.size()+1);
      }
      return res;
    }
};
