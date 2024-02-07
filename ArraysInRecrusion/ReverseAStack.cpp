#include<iostream>
#include<stack>

using namespace std;

void addElementBottomOfStack(stack<int> &s, int temp){

    // Base case if
    if(s.size() == 0){
        s.push(temp);
        return;
    }

    int ele = s.top();

    s.pop();

    addElementBottomOfStack(s, temp);

    s.push(ele);
}
void reverseStack(stack<int> &s){

    if(s.size() == 0) return;

    int temp = s.top();

    s.pop();

    reverseStack(s);

    addElementBottomOfStack(s, temp);

}

void printStack(stack<int> s){

    while(!s.empty()){

        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;   
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(4);
    s.push(3);
    s.push(14);
    s.push(7);

    cout<<"Before reversing a Stack"<<endl;

    printStack(s);
    
    cout<<"stack top is "<<s.top()<<endl; 

    reverseStack(s);

    cout<<"After reversing a Stack"<<endl;

    printStack(s);   

    cout<<"stack top is "<<s.top()<<endl; 

    return 0;
}