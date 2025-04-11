#include <iostream>
#include <string>  //문자열(string) 사용을 위한 헤더
#include <list>  //연결 리스트(list) 사용을 위한 헤더

using namespace std;

int N;   //명령어 개수를 저장할 변수
string command[10000];  //명령어들을 저장할 문자열 배열
int A[10000];   //명령어에 포함된 정수 값을 저장할 배열

int main() {
    cin >> N;   //명령어 개수 입력
    list <int> l;  //정수를 저장할 리스트(양방향 연결 리스트) 선언

    for (int i = 0; i < N; i++) {
        cin >> command[i];  //i번째 명령어 입력
        //push_front 또는 push_back일 경우 정수 입력
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
        //리스트의 앞쪽에 정수 추가
        if (command[i]=="push_front") l.push_front(A[i]);
        //리스트의 뒤쪽에 정수 추가
        if (command[i]=="push_back") l.push_back(A[i]);
        //리스트의 앞쪽 원소 출력 후 제거
        if (command[i]=="pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        }
        //리스트의 뒤쪽 원소 출력 후 제거
        if (command[i]=="pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        }
        //리스트의 현재 크기 출력
        if (command[i]=="size") {
            cout << l.size() << endl;
        }
        //리스트가 비어 있는지 여부 출력 (비었으면 1, 아니면 0)
        if (command[i]=="empty") {
            cout << l.empty() << endl;
        }
        //리스트의 앞쪽 원소 출력
        if (command[i]=="front") {
            cout << l.front() << endl;
        }
        //리스트의 뒤쪽 원소 출력
        if (command[i]=="back") {
            cout << l.back() << endl;
        }
    }

    return 0; //프로그램 종료
}
