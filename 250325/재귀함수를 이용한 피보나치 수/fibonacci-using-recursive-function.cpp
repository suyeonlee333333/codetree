#include <iostream>

using namespace std;

int N; //사용자로부터 입력받을 정수
int func (int a) {
    if (a==1) { //첫번째 원소는 1
        return 1;
    }
    if (a==2) { //두 번째 원소도 1
        return 1;
    }
    return func(a-1)+func(a-2); // 이전 두 항의 합을 구하는 재귀호출
    
}

int main() {
    cin >> N; //사용자로부터 N 입력받기

    cout << func(N); //재귀함수 호출 (피보나치 수열의 N번째 항 출력)

    return 0;
}