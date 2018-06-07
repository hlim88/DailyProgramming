/*
 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다. 정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을 구하여라.



예제)

Input: N = 12

Output: 10 // 0, 1, 2, 3, 5, 8 중 짝수인 2 + 8 = 10.*/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){

  int N;
  cout << "Please enter an positive integer value: ";
  cin >> N;
  cout << "The value you entered is : " <<N<<".\n";

  cout<<"Let's find a sum of all even numbers in Fibonacci number less than your input. \n";

  int sum=0;
  int x=0; //beginning of Fibonacci
  int y=1; 

  while(x<=N) {
    if(x % 2 ==0){
        sum += x;
    }
     int z = x+y; //Find next Fibonacci number
     x=y;
     y=z;	
  } 
  cout<<"The result is : "<<sum<<"\n";

  return 0;

}
