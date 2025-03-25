#include <iostream>

using namespace std;

int N; // 사용자로부터 입력 받을 정수
void func(int a) {
    if (a==0) { //재귀 종료 조건
        return;
    }
    cout << a << " "; //현재 a 출력
    func(a-1); //재귀함수(a-1로 감소)
    cout << a << " "; //재귀호출 후 a 출력
}

int main() {
    cin >> N; //사용자로부터 정수 입력받기
    func(N); //재귀함수 호출

    return 0;
}