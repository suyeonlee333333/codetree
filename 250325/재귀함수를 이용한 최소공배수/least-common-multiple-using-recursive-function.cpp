#include <iostream>

using namespace std;

int n; //사용자로부터 입력받을 수의 개수
int arr[10]; //n개의 수를 입력받을 배열
// 최대공약수(GCD)를 구하는 함수 (유클리드 호제법)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);

}
// 최소공배수(LCM)를 구하는 함수. LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
// 최소공배수를 구하는 재귀 함수
int func(int a) {
    if (a == 0) {
        return arr[0];
    }
    return lcm(arr[a], func(a - 1));
}

int main() {
    cin >> n; //사용자로부터 수의 개수 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //n개의 수만큼 배열에 입력받기
    }

    cout << func(n - 1); //최소공배수 출력

    return 0;
}

