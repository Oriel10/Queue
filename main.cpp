#include <iostream>
#include "Queue.h"

using namespace std;

void showq(Queue<int> gq){
    while (!gq.empty()) {
        cout << '\t' << gq.front();
        gq.pop();
    }
    cout << '\n';
}

int main(int, char**) {
    Queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
  
    cout << "The queue gquiz is: ";
    showq(gquiz);
  
    cout << "\ngquiz.size(): " << gquiz.size();
    cout << "\ngquiz.front(): " << gquiz.front();
    cout << "\ngquiz.back(): " << gquiz.back();
  
    cout << "\ngquiz.pop(): ";
    gquiz.pop();
    showq(gquiz);
  
    return 0;
}
