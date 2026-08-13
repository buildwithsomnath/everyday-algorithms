//
// Created by Somna on 07-08-2026.
//
#include <iostream>
#include<queue>
#include<string>
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
            int choice;
            vector<vector<string>> bills;
            int productNumber = 0;
            do {
                cout<<"==== Add Item===="<<endl;
                cout<<"1. Add Item"<<endl;
                cout<<"2. Delete Item"<<endl;
                cout<<"3. Total Bill"<<endl;
                cout<<"4. Exit"<<endl;
                cout<<"Enter your choice: "<<endl;
                cin>>choice;

                switch (choice) {
                    case 1: {
                        bills.emplace_back();
                        string name;
                        cout<<"Enter name: "<<endl;
                        cin.ignore();
                        getline(cin,name);

                        float itemPrice;
                        cout<<"Enter price: "<<endl;
                        cin>>itemPrice;

                        float quantity;
                        cout<<"Enter quantity: "<<endl;
                        cin>>quantity;

                        stringstream stream1, stream2;
                        stream1 << fixed << setprecision(2) << itemPrice;
                        stream2 << fixed << setprecision(2) << quantity;

                        time_t now = time(nullptr);
                        char* time_string = ctime(&now);

                        bills[productNumber].push_back(name);
                        bills[productNumber].push_back(stream1.str());
                        bills[productNumber].push_back(stream2.str());
                        bills[productNumber].push_back(time_string);
                        cout<<endl;
                        for (int i = 0; i < bills.size(); i++) {
                            cout<<"#"<<i<<" "<<bills[i][0]<<" "<<bills[i][1]<<" "<<bills[i][2]<<" "<<bills[i][3];
                        }
                        productNumber++;
                        break;
                    }
                    case 2: {
                        int pNumber;
                        cout<<"Enter the product number: "<<endl;
                        cin>>pNumber;
                        bills.erase(bills.begin()+pNumber);
                        break;
                    }
                    case 3: {
                        double total = 0;
                        for (int i = 0; i < bills.size(); i++) {
                            cout<<"#"<<i<<" "<<bills[i][0]<<" "<<bills[i][1]<<" "<<bills[i][2]<<" "<<bills[i][3];
                            total += stod(bills[i][1])*stod(bills[i][2]);
                        }
                        cout<<"==== Total Bill ===="<<endl;
                        cout<<"Total: "<<total<<endl;break;
                    }
                    case 4: cout<<"Goodbye!"<<endl;return;
                    default: cout<<"Invalid choice\n"<<endl;
                }
            }while (choice!=3);
        }

        static void run() {
            int choice;
            do {
                cout<<"====Bill Generator===="<<endl;
                cout<<"1. Create Bill Generator"<<endl;
                cout<<"2. Exit Bill Generator"<<endl;
                cout<<"Enter your choice: "<<endl;
                cin>>choice;

                switch (choice) {
                    case 1: generateBill();break;
                    case 2: cout<<"Goodbye"<<endl;return;
                    default: cout<<"Invalid choice"<<endl;break;
                }

            }while (choice!=2);
        }
    };
}

int main() {
    BillGenerator bill_generator;
    bill_generator.run();
    return 0;
}
