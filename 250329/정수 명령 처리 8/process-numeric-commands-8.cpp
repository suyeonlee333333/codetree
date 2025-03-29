#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    list <int> l;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
        if (command[i]=="push_front") l.push_front(A[i]);
        if (command[i]=="push_back") l.push_back(A[i]);
        if (command[i]=="pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        }
        if (command[i]=="pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        }
        if (command[i]=="size") {
            cout << l.size() << endl;
        }
        if (command[i]=="empty") {
            cout << l.empty() << endl;
        }
        if (command[i]=="front") {
            cout << l.front() << endl;
        }
        if (command[i]=="back") {
            cout << l.back() << endl;
        }
        
    }

    return 0;
}
