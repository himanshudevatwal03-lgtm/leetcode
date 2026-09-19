class Solution {
public:
    bool checkOverlap(int radius, int xC, int yC, int x1, int y1, int x2, int y2) {
       int x=max(x1,min(xC,x2));
       int y=max(y1,min(yC,y2));
       int dx = xC - x;
        int dy = yC - y;
       return dx*dx+dy*dy<=radius*radius;
    }
};