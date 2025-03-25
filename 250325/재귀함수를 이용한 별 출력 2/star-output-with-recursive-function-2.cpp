#include <iostream>

using namespace std;

int n; //사용자로부터 입력받을 정수
void star(int a) { 
    if (a==0) {  //종료 조건
        return;
    }
    // a개의 별 출력
    for (int i=1;i<=a;i++) {
        cout << "* "; 
    }
    cout << endl; //한 줄 띄우기
    star(a-1); //재귀호출 (a-1로 감소)
    //재귀호출 이후 a개의 별 출력
    for (int i=1;i<=a;i++) {
        cout << "* "; 
    }
    cout << endl; //한 줄 띄우기
}

int main() {
    cin >> n; //사용자로부터 n입력받기

    star(n); //재귀함수 호출

    return 0;
}