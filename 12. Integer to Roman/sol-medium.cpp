class Solution {
public:
    string intToRoman(int num) {
      string res = "";
      unordered_map<int, char> m{ {1, 'I'}, {5, 'V'},
                                  {10, 'X'}, {50, 'L'},
                                  {100, 'C'}, {500, 'D'},
                                  {1000, 'M'} };
      for(int i = 3; i>=0; i--){
        int n = num / pow(10,i);
        if(n==0) continue;
        if(n % 5 == 0) res += m[5*pow(10,i)];
        if(n % 5 == 4){ // 4, 9
          res += m[pow(10,i)];
          if(n>5) res += m[10*pow(10,i)];
          else res += m[5*pow(10,i)];
        }
        else{
          if(n>5) res += m[5*pow(10,i)];
          for(int j=0; j<int(n%5); j++) res += m[pow(10,i)];
        }
        num %= int(pow(10,i));
      }
      return res;
    }
};

// 900 CM = 100(C) + 1000 (M)
// 4 IV = 1 (I) + 5(V)
