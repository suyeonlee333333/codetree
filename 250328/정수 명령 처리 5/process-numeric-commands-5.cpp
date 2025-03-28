#include <iostream>
#include <vector>
using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    vector<int> v1;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }

    v1.push_back(10);
    v1.push_back(20);
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1.size() << endl;
    v1.pop_back();
    cout << v1.size() << endl;
    cout << v1[0] << endl;
    cout << v1.size();

    return 0;
}
