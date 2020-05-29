#include <iostream>

using namespace std;

class Stack_Int{
    public:
        int arr[100000];
        int back;
        Stack_Int(){
            back=-1;
        }
    void push(int data){
        back += 1;
        arr[back] = data;
    }
    void pop(){
        back -= 1;
    }
    int peek(){
        return arr[back];
    }
    int empty(){
        if(back == -1){
            return 1;
        }
        return 0;
    }
};

class Stack_Char{
    public:
        char arr[100001];
        int back;
        Stack_Char(){
            back=-1;
        }
    void push(int data){
        back += 1;
        arr[back] = data;
    }
    void pop(){
        back -= 1;
    }
    int peek(){
        return arr[back];
    }
    int empty(){
        if(back == -1){
            return 1;
        }
        return 0;
    }
};

class Queue{
    public:
        int arr[100000];
        int back;
        int front;
        Queue(){
            back=-1;
            front = 0;
        }
    void push(int data){
        back += 1;
        arr[back] = data;
    }
    void pop(){
        front += 1;;
    }
    int peek(){
        return arr[front];
    }
    int empty(){
        if(back == -1){
            return 1;
        }
        return 0;
    }
    
};

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    Stack_Int stack;
    Stack_Char log;
    Queue arr;
    int n = 0, data = 0, front = 0, i = 1, tmp = 0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> data;
        arr.push(data);
    }
    
    while(!arr.empty()){
        
        front = arr.peek();
        tmp = i;
        if(i <= front){
            for(i=tmp;i<=front;i++){
                stack.push(i);
                log.push('+');
            }
        }

        if(stack.peek() == arr.peek()){
            arr.pop();
            stack.pop();
            log.push('-');
        }
        else{
            cout << "NO" << "\n";
            return 0;
        }
    }
    
    
    for(int i=0;i<log.back;i++){
        cout << log.arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
