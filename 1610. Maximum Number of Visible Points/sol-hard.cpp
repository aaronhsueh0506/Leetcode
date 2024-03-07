class Solution {
public:
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        int duplicate = 0;
        vector<double> angle_list;
        for(auto p: points){
            if(p[0]==location[0] && p[1]==location[1]) duplicate++;
            else angle_list.push_back(atan2(p[1]-location[1], p[0]-location[0]));
        }
        sort(angle_list.begin(), angle_list.end());

        int n= angle_list.size();
        for(int i=0;i<n;i++){
            angle_list.push_back(angle_list[i]+2*M_PI);
        }

        int l=0, res=0;
        double fov = angle * M_PI / 180.0;
        for(int r=0; r<angle_list.size(); r++){
            while((angle_list[r]-angle_list[l]) > fov) l++;
            res = max(res,r-l+1);
        }
        return res+duplicate;
    }
};
