#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int size = 0, size2 = 0;
    
    size = int(arr1.size());
    size2 = int(arr1[0].size());
    
    answer.resize(size);
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size2;j++){
            answer[i].push_back(arr1[i][j]+arr2[i][j]);
        }
        
    }
    
    return answer;
}

int main(){
    
    return 0;
}
