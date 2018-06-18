/*

정수(int)가 주어지면, 팰린드롬(palindrome)인지 알아내시오. 팰린드롬이란, 앞에서부터 읽으나 뒤에서부터 읽으나 같은 단어를 말합니다. 단, 정수를 문자열로 바꾸면 안됩니다.

Given an integer, check if it is a palindrome.

*/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {

  int test;

  cout<<"Please enter your integer : ";
  cin>>test;
  cout<<"The value you entered is : "<<test<<".\n";

  cout<<"Is this palindrome?? \n";

  int eval = test;
  int updt=0;

  while(eval>0) {
	updt = updt*10 + eval%10;
        eval = eval/10;
  }

  if (updt==test) {
	cout<<"Yes! The number "<<test<<" is a palindrome \n";
  } else {
	cout<<"No. The number "<<test<<" is not palindrome. \n";
  }
  
  return 0;

}
