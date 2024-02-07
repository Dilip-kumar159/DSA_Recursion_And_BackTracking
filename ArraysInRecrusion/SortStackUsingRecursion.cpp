#include<iostream>
#include<stack>

using namespace std;

void insertStack(stack<int> &s, int temp){

    if(s.size() == 0 || s.top() <= temp){
        s.push(temp);
        return;
    }

    int element = s.top();

    s.pop();

    insertStack(s, temp);

    s.push(element);
}
void sortStack(stack<int> &s){

    if(s.size() == 1) return;

    int temp = s.top();

    s.pop();

    sortStack(s);

    insertStack(s, temp);
}
int main(){

    stack<int> s;
    s.push(10);
    s.push(4);
    s.push(3);
    s.push(14);
    s.push(7);

    sortStack(s);

    while(!s.empty()){

        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}