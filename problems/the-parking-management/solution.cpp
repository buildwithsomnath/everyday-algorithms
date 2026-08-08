#include<iostream>
#include<string>
#include<queue>
using namespace std;

namespace {
    class CarParkingManagement {
    private:
        queue<string> carParked;
        queue<string> carinWait;
        int carWaiting;
    public:

        int parkingSpace;
        CarParkingManagement(): carWaiting(1), parkingSpace(1){}
        void addParkingSpace() {
            cout<<"Enter the parking space: "<<endl;
            cin>>parkingSpace;
        }
        void carExit() {
            if (carParked.empty()) {
                cout<<"No cars available!"<<endl;
                return;
            }
            string car = carParked.front();
            carParked.pop();
            cout<<"Exiting: "<<car<<endl;
            if (!carinWait.empty()) {
                string addcar = carinWait.front();
                carinWait.pop();
                carParked.push(addcar);
                cout<<addcar<<" entered the parking space"<<endl;
            }
        }
        void carEntry() {
            string carNum = "Car Number # "+ to_string(carWaiting++);
            cout<<carNum<<" is waiting"<<endl;
            cout<<"Checking if parking space is available"<<endl;
            if (carParked.size()<parkingSpace) {
                carParked.push(carNum);
                cout << carNum << " parked.\n";
            }else {
                carinWait.push(carNum);
                cout << carNum << " added to waiting queue.\n";
            }
        }
        void carQueue() const {
            cout << "\nParked Cars:\n";

            queue<string> parked = carParked;
            while (!parked.empty()) {
                cout << parked.front() << endl;
                parked.pop();
            }

            cout << "\nWaiting Cars:\n";

            queue<string> waiting = carinWait;
            while (!waiting.empty()) {
                cout << waiting.front() << endl;
                waiting.pop();
            }
        }
        void run() {
            addParkingSpace();
            int choice;
            do {
                cout << "\n=== Parking Management ===\n";
                cout << "Cars in queue: " << carinWait.size() << "\n";
                cout << "1. Car Entry\n";
                cout << "2. Car Exit\n";
                cout << "3. Car Waiting Queue\n";
                cout << "4. Exit\n";
                cout << "Choice: ";
                cin >> choice;

                switch(choice) {
                    case 1: carEntry(); break;
                    case 2: carExit(); break;
                    case 3: carQueue(); break;
                    case 4: cout << "Goodbye!\n"; break;
                    default: cout << "Invalid choice!\n";
                }
            } while(choice != 4);
        }

    };
}
int main(){
    CarParkingManagement carParking;
    carParking.run();
    return 0;
}