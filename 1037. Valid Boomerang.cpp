class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) 
    {
            int x1=p[0][0],y1=p[0][1];
            int x2=p[1][0],y2=p[1][1];
            int x3=p[2][0],y3=p[2][1];
            
        if((y2-y1)*(x3-x2)!=(y3-y2)*(x2-x1)) 
            return true;
            
        return false;
    }
};