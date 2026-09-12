//
// Created by Somna on 20-08-2026.
//
#include<iostream>
#include<deque>
#include<string>
using namespace std;

class BrowserHistory{
    private:
        deque<string> history;
        int currentIndex;
    public:
        BrowserHistory(): currentIndex(-1){}

        void visitPage(){
            string url;
            cout<<"Enter URL: ";
            cin.ignore();
            getline(cin,url);

            if(currentIndex < (int)history.size()-1){
                history.erase(history.begin()+currentIndex+1,history.end());
            }
            history.push_back(url);
            currentIndex = history.size() - 1;
            cout<<"Visited: "<<url<<endl;
        }

        void goBack(){
            if(currentIndex > 0){
                currentIndex--;
                cout<<"Went back to: "<<history[currentIndex]<<endl;
            }else{
                cout<<"Can't go back further!"<<endl;
            }
        }

        void goForward(){
            if(currentIndex<(int)history.size()-1){
                currentIndex++;
                cout<<"Went forward to: "<<history[currentIndex]<<endl;
            }else{
                cout<<"Can't go forward further!"<<endl;
            }
        }

        void displayHistory(){
            if(history.empty()){
                cout<<"No browsing history.\n";
            }
            cout<<"\n=== Browsing History ===\n";
            for(int i=0;i<(int)history.size();i++){
                cout<<(i==currentIndex?"> ":" ")<<i+1<<". "<<history[i]<<"\n";
            }
        }
        void run(){
            int choice;
            do{
                cout<<"\n===Browser History ===\n";
                if(currentIndex >= 0){
                    cout<<"Current: "<<history[currentIndex]<<endl;
                }
                cout << "1. Visit Page\n";
                cout << "2. Go Back\n";
                cout << "3. Go Forward\n";
                cout << "4. View History\n";
                cout << "5. Exit\n";
                cout << "Choice: ";
                cin >> choice;

                switch(choice) {
                    case 1: visitPage(); break;
                    case 2: goBack(); break;
                    case 3: goForward(); break;
                    case 4: displayHistory(); break;
                    case 5: std::cout << "Goodbye!\n"; break;
                    default: std::cout << "Invalid choice!\n";
                }
            }while(choice!=5);
        }
};

int main() {
    BrowserHistory browser;
    browser.run();
    return 0;
}