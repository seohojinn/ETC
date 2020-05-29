#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr;
    int data1 = 0, data2 = 0;
    int tmp  = 0;
    
    cin >> data1 >> data2;
    
    tmp = data2;
    
    for(int i=0;i<3;i++){
        arr.push_back(data1 * (data2 % 10));
        data2 /= 10;
    }
    
    for(auto it : arr){
        cout << it << endl;
    }
    
    cout << data1 * tmp << endl;
    
    return 0;
}
