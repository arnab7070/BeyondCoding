#include<iostream>
#include<deque>
using namespace std;
int main(){

   deque<int> dq;
   dq.push_front(5);
   dq.push_front(6);
   dq.push_back(7);
   dq.push_back(8);
   dq.pop_back();
   dq.pop_front();

   for(int i=0; i<2; i++){
       cout<<dq.at(i)<<" ";
   }

   

return 0;
}