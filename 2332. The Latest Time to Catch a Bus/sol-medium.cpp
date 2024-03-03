class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());

        int j=0, available=0;
        for(auto bus: buses){
            available = 0;
            while(available<capacity && j<passengers.size() && passengers[j]<bus){
                available++;
                j++;
            }
        }
        
        // if last bus not full, or get last passenger's time
        int lasttime = (available < capacity) ? buses.back(): passengers[j-1]; 
        
        // Need before last passenger's time, also need to check previous if there time are continuous
        while(j>0 && passengers[j-1]==lasttime){
            j--; lasttime--;
        }
        return lasttime;
    }
};
