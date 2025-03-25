#include <iostream>

using namespace std;

int n; //사용자로부터 입력받을 정수 n
int arr[100]; //n개의 정수를 저장할 배열
int func(int a) {
    if(a==1) { //1개를 입력받으면 그 자체가 최댓값
        return arr[0];
    }
    //재귀호출 (a-1로 감소)
    int maxnum=func(a-1); //재귀호출하여 최댓값 지정
    // 현재 원소(arr[a-1])와 이전까지의 maxnum 중 더 큰 값을 반환
    return (maxnum<arr[a-1]?arr[a-1]:maxnum);
}

int main() {
    cin >> n; //사용자로부터 원소의 개수 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //n개의 정수를 배열에 입력받기
    }
    cout << func(n); //재귀함수 호출 후 maxnum 출력

    return 0;
}