#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n;
int arr[100000];

int getMaxDigit(int arr[],int n) {
    int maxnum=arr[0];
    for (int i=1;i<n;i++) {
        if (arr[i]>maxnum) {
            maxnum=arr[i];
        }
    }
    int digits=0;
    while (maxnum>0) {
        digits++;
        maxnum/=10;
    }
    return digits;
}

int getDigit(int num,int pos) {
    return (num/static_cast<int>(pow(10,pos)))%10;
}

void radixSort (int arr[],int n) {
    int k=getMaxDigit(arr,n);
    for (int pos=0;pos<k;pos++) {
        vector<int> arr_new[10];
        for (int i=0;i<n;i++) {
            int digit=getDigit(arr[i],pos);
            arr_new[digit].push_back(arr[i]);
        }
        vector<int> store_arr;
        int idx=0;
        for (int i=0;i<10;i++) {
            for (int j=0;j<arr_new[i].size();j++) {
                arr[idx++]=arr_new[i][j];
            }
        }
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixSort(arr,n);
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
