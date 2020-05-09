class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double m;
        if(coordinates[1][0] - coordinates[0][0] != 0){
            m = (coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);    
        }
        else{
            m = 0;
        }
        
        
        int i = 2;
        while(i < coordinates.size()){
            if( !( coordinates[i][1] -  coordinates[0][1] == m * (  coordinates[i][0] -  coordinates[0][0]) )  )
                return false;
            i++;
        }
        return true;
    }
};
