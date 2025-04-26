#include <iostream>

using namespace std;

int n; //배열의 크기
int arr[100000]; //최대 100,000개의 정수를 저장할 수 있는 배열

//배열을 분할하는 함수
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; //pivot을 배열의 마지막 원소로 설정
    int i = low - 1;  //pivot보다 작은 원소들이 모일 구역의 끝 인덱스

    //low부터 high-1까지 순회
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i += 1;  //작은 원소 구역 확장
            swap(arr[i], arr[j]); //현재 원소를 작은 구역으로 이동
        }
    }
    //pivot을 작은 원소 구역 바로 뒤(i+1)로 이동시켜 정확한 위치로 정렬
    swap(arr[i + 1], arr[high]);
    return i + 1; //pivot의 최종 위치 반환
}

//퀵 정렬 함수
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pos = partition(arr, low, high); //pivot을 기준으로 배열 분할
        quick_sort(arr, low, pos - 1);  //왼쪽 부분 배열 정렬 (pivot보다 작은 값들)
        quick_sort(arr, pos + 1, high);  //오른쪽 부분 배열 정렬 (pivot보다 큰 값들)
    }
}

int main() {
    cin >> n; //배열 크기 입력

    //배열 원소 입력
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //퀵 정렬 수행
    quick_sort(arr, 0, n - 1);

    //정렬된 배열 출력
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0; 
}

