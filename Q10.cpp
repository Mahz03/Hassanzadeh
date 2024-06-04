#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            hours = h;
            minutes = m;
            seconds = s;
        } else {
            cout << "Invalid time values!" << endl;
        }
    }

    void printTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void difference(Time t) {
        int totalSec1 = hours  3600 + minutes  60 + seconds;
        int totalSec2 = t.hours  3600 + t.minutes  60 + t.seconds;
        int diffSec = abs(totalSec1 - totalSec2);

        int h_diff = diffSec / 3600;
        diffSec %= 3600;
        int m_diff = diffSec / 60;
        diffSec %= 60;

        cout << "Time difference: " << h_diff << " hours, " << m_diff << " minutes, " << diffSec << " seconds" << endl;
    }

    void setTime(int h, int m, int s) {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            hours = h;
            minutes = m;
            seconds = s;
        } else {
            cout << "Invalid time values!" << endl;
        }
    }
};

int main() {
    Time t1(10,30,45);
    Time t2(8,15,20);

    t1.printTime();
    t2.printTime();

    t1.difference(t2);

    return 0;
}
