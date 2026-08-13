//
// Created by Somna on 07-08-2026.
//
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
using namespace std;

namespace {
    class BillGenerator {
    private:
        int BillNumber;
    public:
        BillGenerator(): BillNumber(1){}


        static void generateBill() {
            int choice = 0;
            vector<vector<string>> bills;
            do {
                cout<<"==== Add Item===="<<endl;
                cout<<"1. Add Item"<<endl;
                cout<<"2. Delete Item"<<endl;
                cout<<"3. Total Bill"<<endl;
                cout<<"4. Exit"<<endl;
                cout<<"Enter your choice: "<<endl;
                if (!(cin >> choice)) break;

                switch (choice) {
                    case 1: {
                        string name;
                        cout<<"Enter name: "<<endl;
                        cin.ignore();
                        if (!getline(cin, name)) break;

                        float itemPrice;
                        cout<<"Enter price: "<<endl;
                        if (!(cin >> itemPrice)) break;

                        float quantity;
                        cout<<"Enter quantity: "<<endl;
                        if (!(cin >> quantity)) break;

                        stringstream stream1, stream2;
                        stream1 << fixed << setprecision(2) << itemPrice;
                        stream2 << fixed << setprecision(2) << quantity;

                        time_t now = time(nullptr);
                        char* time_string = ctime(&now);

                        bills.push_back({name, stream1.str(), stream2.str(), time_string});
                        cout<<endl;
                        for (size_t i = 0; i < bills.size(); i++) {
                            cout<<"#"<<i<<" "<<bills[i][0]<<" "<<bills[i][1]<<" "<<bills[i][2]<<" "<<bills[i][3];
                        }
                        break;
                    }
                    case 2: {
                        int pNumber;
                        cout<<"Enter the product number: "<<endl;
                        if (cin >> pNumber) {
                            if (pNumber >= 0 && pNumber < static_cast<int>(bills.size())) {
                                bills.erase(bills.begin() + pNumber);
                            }
                        }
                        break;
                    }
                    case 3: {
                        double total = 0;
                        for (size_t i = 0; i < bills.size(); i++) {
                            cout<<"#"<<i<<" "<<bills[i][0]<<" "<<bills[i][1]<<" "<<bills[i][2]<<" "<<bills[i][3];
                            total += stod(bills[i][1])*stod(bills[i][2]);
                        }
                        cout<<"==== Total Bill ===="<<endl;
                        cout<<"Total: "<<total<<endl;break;
                    }
                    case 4: cout<<"Goodbye!"<<endl;return;
                    default: cout<<"Invalid choice\n"<<endl;
                }
            } while (choice != 4 && cin);
        }

        static void run() {
            int choice = 0;
            do {
                cout<<"====Bill Generator===="<<endl;
                cout<<"1. Create Bill Generator"<<endl;
                cout<<"2. Exit Bill Generator"<<endl;
                cout<<"Enter your choice: "<<endl;
                if (!(cin >> choice)) break;

                switch (choice) {
                    case 1: generateBill();break;
                    case 2: cout<<"Goodbye"<<endl;return;
                    default: cout<<"Invalid choice"<<endl;break;
                }

            } while (choice != 2 && cin);
        }
    };
}

int main() {
    BillGenerator bill_generator;
    bill_generator.run();
    return 0;
}
