#include <iostream>   
#include <vector>  //벡터 사용을 위한 헤더

using namespace std;

int N;  //명령의 개수를 저장할 변수
string command[10000]; //명령어를 저장할 배열
int num[10000]; //명령어에 사용될 숫자를 저장할 배열

int main() {
    cin >> N;  //명령어 개수 입력
    vector<int> v;  //정수를 저장할 벡터 선언

    for (int i = 0; i < N; i++) {
        cin >> command[i];  //i번째 명령어 입력

        //명령어가 push_back 또는 get이면 숫자 입력 받기
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }

        //명령어가 push_back이면 벡터에 값 추가
        if (command[i] == "push_back") {
            v.push_back(num[i]);
        }   

        //명령어가 get이면 num[i]-1 번째 인덱스 값 출력
        if (command[i] == "get") {
            cout << v[num[i]-1] << endl;
        }

        //명령어가 size이면 현재 벡터 크기 출력
        if (command[i] == "size") {
            cout << v.size() << endl;
        }

        //명령어가 pop_back이면 벡터의 마지막 요소 삭제
        if (command[i] == "pop_back") {
            v.pop_back();
        }
    }

    return 0; // 프로그램 종료
}