class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1) return s;
      string res = "";

      int diff = 2 * (numRows - 1);

      for(int row=0; row<numRows; row++){
        bool flag = false;
        for(int j = row; j < s.size(); flag=flag?false:true){
          res += s[j];
          if(row==0 || row==numRows-1) j+=diff;
          else if(flag) j+= 2 * row; // right
          else j+= diff - 2*row; // left
        }
      }
      return res;
    }
};
/*
0       8
1     7 9
2   6   10
3 5     11
4       12
*/
