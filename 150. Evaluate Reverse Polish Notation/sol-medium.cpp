class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      int op = tokens.size() -1;
      return DFS(tokens, op);
    }

    int DFS(vector<string>& tokens, int &op){
        string str = tokens[op];
        if(str!="+" && str!="-" && str!="*" && str!="/") return stoi(str);
        int num1 = DFS(tokens, --op);
        int num2 = DFS(tokens, --op);
        if(str=="+") return num1+num2;
        if(str=="-") return num2-num1;
        if(str=="*") return num1*num2;
        return num2/num1;
    }
};
