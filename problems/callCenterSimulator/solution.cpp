#include<iostream>
#include<queue>
#include<string>
using namespace std;

class callCenter{
    private:
        queue<string> callQueue;
        int callNumber;
    public:
        callCenter() : callNumber(1){}

        void receiveCall(){
            string callerName;
            cout<<"Enter caller name: ";
            cin.ignore();
            getline(cin, callerName);

            string call = "Call #"+to_string(callNumber++)+" - "+callerName;

            callQueue.push(call);
            cout<<"Call Received: "<<call<<endl;
        }
        void processCall(){
            if(callQueue.empty()){
                cout<<"No Calls in queue!\n";
                return;
            }
            string currentCall = callQueue.front();
            callQueue.pop();
            cout<<"Processing: "<<currentCall<<endl;
        }
        void viewQueue(){
            if(callQueue.empty()){
                cout<<"Call queue is empty!"<<endl;
                return;
            }
            cout<<"\n=== Call Queue ===\n";
            queue<string> temp = callQueue;
            int pos = 1;
            while(!temp.empty()){
                cout<<pos++<<". "<<temp.front()<<endl;
                temp.pop();
            }
        }

        void run(){
            int choice;
            do {
            cout << "\n=== Call Center ===\n";
            cout << "Calls in queue: " << callQueue.size() << "\n";
            cout << "1. Receive Call\n";
            cout << "2. Process Call\n";
            cout << "3. View Queue\n";
            cout << "4. Exit\n";
            cout << "Choice: ";
            cin >> choice;
            
            switch(choice) {
                case 1: receiveCall(); break;
                case 2: processCall(); break;
                case 3: viewQueue(); break;
                case 4: cout << "Goodbye!\n"; break;
                default: cout << "Invalid choice!\n";
            }
        } while(choice != 4);
    }
};

int main() {
    callCenter center;
    center.run();
    return 0;
}