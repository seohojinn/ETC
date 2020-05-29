#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    deque<int> arr;
    int min_data = 0 ,goal = 0,growth_rate = 0, life = 0;
    int count = 0;
    size_t size = 0;
    cin >> min_data >> goal >> growth_rate >> life;
    
    for(int i=0;i<min_data;i++){
        arr.push_back(1);
    }
    size = arr.size();
    
    while(size != goal){
        for(int i=0;i<size;i++){
            arr.push_back(1);
        }
        
        for(int i=0;i<size;i++){
            arr[i] += 1;
            if(arr[i] == life){
                arr.pop_back();
            }
        }
        size = arr.size();
        count++;
    }
    cout << count << endl;
    
    
    return 0;
}
