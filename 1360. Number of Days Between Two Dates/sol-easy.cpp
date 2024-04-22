class Solution {
public:
    vector<int> MonthOfDays{0,31,59,90,120,151,181,212,243,273,304,334};
    int daysBetweenDates(string date1, string date2) {
        return abs(days(date2)-days(date1));
    }

    int days(string date){
        int day = 0;
        int y = stoi(date.substr(0,4)), m = stoi(date.substr(5,2)), d = stoi(date.substr(8,2));

        day += (y-1)*365;
        day += (y-1)/4 - (y-1)/100 + (y-1)/400;

        day += MonthOfDays[m-1];
        if(m>2 && isLeap(y)) ++day;

        return day + d;
    }

    bool isLeap(int year){
        return (year%100==0) ? (year%400==0) : (year%4==0);
    }
};
