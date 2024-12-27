#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if (angle > 0 and angle < 90) {
        return 1;
    }
    else if (angle == 90) {
        return 2;
    }
    else if (90 < angle and angle < 180) {
        return 3;
    }
    else {
        return 4;
    }
}

    int main() {
        cout << "Angle 70: " << solution(70) << endl;   
        cout << "Angle 91: " << solution(91) << endl;   
        cout << "Angle 180: " << solution(180) << endl;

        return 0;
    }
