#include <iostream>
#include <unistd.h>  // For sleep function
using namespace std;
class Lift {
private:
    int currentFloor;
    static int topFloor;

    static void delay() {
        sleep(1); // 1 second delay to simulate lift movement
    }

public:
    Lift(int startFloor) : currentFloor(startFloor) {
        cout << "Lift is starting at floor " << startFloor << endl;
    }

    ~Lift() {
        cout << "Lift has stopped." << endl;
    }

    void traverseToFloor(int destinationFloor) {
        while (currentFloor < destinationFloor && destinationFloor<=topFloor) {
            currentFloor++;
            delay();
            cout << "Lift has reached floor " << currentFloor << endl;
        }
        if (currentFloor == destinationFloor) {
            delay();  // Wait for 3 seconds after reaching the entered floor
            delay();
            delay();
            cout << "Welcome! You have reached floor " << destinationFloor << endl;
        }
    }

    friend void reachFloor(Lift& lift, int floor);

    static int getTopFloor() {
        return topFloor;
    }
};

int Lift::topFloor = 6;

void reachFloor(Lift& lift, int floor) {
    lift.traverseToFloor(floor);
}

int main() {
    int startFloor = 0;
    int destinationFloor;
    cout<<"Enter the Floor Number: ";
    cin>>destinationFloor;
    Lift myLift(startFloor);
    reachFloor(myLift, destinationFloor);

    return 0;
}