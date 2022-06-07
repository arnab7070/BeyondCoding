//Find the sum till n 
// #include<iostream>
// using namespace std;
// int Sum(int n){
//     if (n==0)
//     {
//         return false;
//     }
    
// int prevSum = Sum(n-1);
// return n + prevSum;
// }
// int main(){
// int n;
// cout<<"Enter till which number you want to add up: ";
// cin>>n;
// cout<<"The answer is = "<<Sum(n)<<endl;
// return 0;
// }

//to find the power of a number
// #include<iostream>
// using namespace std;
// int Power(int n, int p){
//     if(p==0){
//         return true;
//     }
//     int prevPower = Power(n, p-1);
//     return n*prevPower;
// }
// int main(){

//    int n,p;
//    cout<<"Enter the number: ";
//    cin>>n;
//    cout<<"Enter the power: ";
//    cin>>p;
//    cout<<"The Answer is = "<<Power(n,p)<<endl;

// return 0;
// }

//to find the factorial of a given number
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return true;
//     }
//     int prevFactorial=factorial(n-1);
//     return n*prevFactorial;
// }
// int main(){

//    int n;
//    cout<<"Enter the number you want to find the factorial: ";
//    cin>>n;
//    cout<<"The answer is = "<<factorial(n)<<endl;
// return 0;
// }