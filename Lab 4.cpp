#include <iostream>
using namespace std;
int main(){
    using namespace std;
#include <string>
    bool looprun=true;
    while(looprun) {
        int choice;
        float radius, length, width, base, height, area;

        cout << "==== CALCULATOR ====" << endl;

        cout << "1. Calculate area of Circle" << endl;
        cout << "2. Calculate area of Rectangle" << endl;
        cout << "3. Calculate area of Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                area = 3.14159 * radius * radius;
                cout << "Area of the Circle = " << area << endl;
                break;

            case 2:
                cout << "Enter length of the rectangle: ";
                cin >> length;
                cout << "Enter width of the rectangle: ";
                cin >> width;
                area = length * width;
                cout << "Area of the Rectangle = " << area << endl;
                break;

            case 3:
                cout << "Enter base of the triangle: ";
                cin >> base;
                cout << "Enter height of the triangle: ";
                cin >>
                height;
                area = 0.5 * base * height;
                cout << "Area of the Triangle = " << area << endl;
                break;

            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                looprun = false;
                break;

            default:
                cout << "Invalid choice! Please select a valid option (1–4)." << endl;
        }
    }
    return 0;
}