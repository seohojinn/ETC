//다섯 자리 정수 입력 받아 각 자리별로 출력하기

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr;
    int data = 0;
    cin >> data;
    
    for(int i=0;i<5;i++){
        arr.push_back(data % 10);
        data /= 10;
    }
    
    for(int i=4;i>=0;i--){
        cout << arr[i];
        for(int j=0;j<i;j++){
            cout << 0;
        }
        cout << endl;
    }
    
    return 0;
}
