#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

     while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();  // element ko first position se hata raha hai taaki queue empty ho jae 
     }

     cout<< endl;
     /*🔁 Loop Pure Flow:
Queue: [1, 2, 3] → print 1 → pop → Queue: [2, 3]

Queue: [2, 3] → print 2 → pop → Queue: [3]

Queue: [3] → print 3 → pop → Queue: []

Ab queue empty ho gaya, toh loop ruk gaya.*/
    return 0;
    
}
