class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {

        for(int x = x1; x<=x2;x++){
            for(int y = y1;y <= y2;y++){
                if((x - xCenter)*(x - xCenter) + (y - yCenter)*(y - yCenter) - radius*radius <= 0){
                    return true;
                }
            }
        }

        return false;
        
    }
};