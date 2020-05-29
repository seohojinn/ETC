#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T = 0, data = 0;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> data;
        
        if(data % 2 == 0){
            cout << 'E' << "\n";
        }
        else{
            cout << 'O' << "\n";
        }
    }
    
    return 0;
}
