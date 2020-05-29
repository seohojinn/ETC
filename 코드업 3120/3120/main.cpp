#include <iostream>
#include <deque>
#include <utility>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a = 0, b = 0, first = 0, second = 0;
    deque<Pair> arr;
    
    cin >> a >> b;
    
    arr.push_back({0,a});
    
    if(a == b){
        cout << 0 << "\n";
        return 0;
    }
    
    while(1){
        first = arr.front().first;
        second = arr.front().second;
        first += 1;
        
        arr.push_back({first,second+1});
        if(arr.back().second == b){
            break;
        }
        arr.push_back({first,second-1});
        if(arr.back().second == b){
            break;
        }
        arr.push_back({first,second+5});
        if(arr.back().second == b){
            break;
        }
        arr.push_back({first,second-5});
        if(arr.back().second == b){
            break;
        }
        arr.push_back({first,second+10});
        if(arr.back().second == b){
            break;
        }
        arr.push_back({first,second-10});
        if(arr.back().second == b){
            break;
        }
        
        arr.pop_front();
    }
    
    cout << arr.back().first << "\n";
    
    
    return 0;
}
