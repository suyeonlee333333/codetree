#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    list<char> l;
    list<char>::iterator it;

    for(int i=0;i<n;i++) {
        l.push_back(s[i]);
    }
    it=l.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command=='L') {
            if (it==l.begin()) continue;
            it --;

        }
        if (command=='R') {
            if (it==l.end()) continue;
            it ++;
        }
        if (command=='D') {
            if (it==l.end()) continue;
            it = l.erase(it);
        }
        if (command=='P') {
            char c;
            cin >> c;
            l.insert(it, c);
        }
    }
     for (it=l.begin();it != l.end(); it ++) {
            cout << *it;
        }


    return 0;
}
