class Solution {
public:
    int calculate(string s) {
        char op = '+';
        long res = 0, cur = 0, num = 0;
        int n = s.size();

        for(int i=0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                num = num * 10 + s[i] - '0';
            }
            else if(s[i] == '('){
                int cnt=0;
                int j = i;
                for(; i<n;i++){
                    if(s[i]=='(') cnt++;
                    else if(s[i]==')') cnt--;

                    if(cnt==0) break;
                }
                num = calculate(s.substr(j+1, i-j-1)); // from j+1 ~ i-1, len becomes to (i-1) - (j+1) + 1 = i - j - 1
            }
            
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || i==n-1){
                if(op=='+') cur += num;
                else if(op=='-') cur-=num;
                else if(op=='*') cur*=num;
                else{
                    if(num!=0) cur /= num;
                    else return -1;
                }

                if(s[i]=='+' || s[i]=='-' || i==n-1){
                    res += cur;
                    cur = 0;
                }

                op = s[i];
                num = 0;
            }
            
        }
        return res;
    }
};
