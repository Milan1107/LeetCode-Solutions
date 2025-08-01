class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x = abs(hour*30-5.5*minutes);
        return (x>180?(360-x):x);
    }
};