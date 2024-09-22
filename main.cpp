#include <iostream>
using namespace std;

int find_third_angle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;
    cout << "Enter the first angle: ";
    cin >> angle1;
    cout << "Enter the second angle: ";
    cin >> angle2;

    int third_angle = find_third_angle(angle1, angle2);
    cout << "The third angle is: " << third_angle << " degrees." << endl;

    return 0;
}
