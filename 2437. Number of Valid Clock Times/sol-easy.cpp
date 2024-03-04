class Solution {
public:
    int countTime(string time) {
        char h1 = time[0], h2 = time[1];
        char m1 = time[3], m2 = time[4];

        int res_h = 1, res_m = 1;
        if(h1=='?' && h2=='?') res_h = 24;
        else if(h1=='?' && h2!='?'){
            if(h2 <='3' && h2>='0') res_h = 3;
            else res_h = 2;
        }
        else if(h1!='?' && h2=='?'){
            if(h1=='2') res_h = 4;
            else res_h = 10;
        }

        if(m1=='?'&&m2=='?') res_m = 60;
        else if(m1=='?' && m2!='?') res_m = 6;
        else if(m1!='?' && m2=='?') res_m = 10;

        return res_h * res_m;
    }
};
