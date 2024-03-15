class Solution {
public:
    string numberToWords(int num) {
        vector<string> v3{"Thousand", "Million", "Billion"};

        string res = convertHundred(num%1000);
        for(int i=0; i<3; i++){
            num/=1000;
            if(num%1000>0)
                res = convertHundred(num%1000) + " " + v3[i] + " " + res;
        }
        while(!res.empty() && res.back()==' ') res.pop_back();
        return res.empty()? "Zero" : res;
    }

    string convertHundred(int num){
        string res;
        int a = num / 100;
        int b = num % 100;
        int c = num % 10;
        if(b<20) res = v1[b];
        else res = v2[b/10] + (c>0 ? " " + v1[c]: "");

        if(a>0) res = v1[a] + " Hundred" + (b>0 ? " " + res: "");
        
        return res;
    }

private:
    vector<string> v2{"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    vector<string> v1{"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                        "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
};
