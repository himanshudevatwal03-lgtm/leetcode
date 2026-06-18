class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle=fabs(minutes*6-hour*30-minutes/2.0);
        return min(angle,360-angle);
    }
};