/*
정수 배열(int array)이 주어지면 0이 아닌 정수 순서를 유지하며 모든 0을 배열 오른쪽 끝으로 옮기시오. 단, 시간복잡도는 O(n), 공간복잡도는 O(1)여야 합니다.

Given an integer array, move all the 0s to the right of the array without changing the order of non-zero elements.

예제)
Input: [0, 5, 0, 3, -1]
Output: [5, 3, -1, 0, 0]

Input: [3, 0, 3]
Output: [3, 3, 0]
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

// Define display function

void display(int *arr, int len){
	
	for (int *tmp = arr; tmp < arr+len; tmp++)
		cout<<" "<<*(tmp);
 	        cout<<"\n";

}

int main(void) {
	//Getting input
	int len=0;
	cout<<"Please enter your size of array : ";
	cin>>len;

	int arr_temp[len];
     	cout<<"Please enter your elements of array : ";
  	  for (int i = 0 ; i < len; i++){
		scanf("%d", &arr_temp[i]);
	  }

	cout<<"This is your input : \n";
	display(arr_temp, len);

	//Move all zeros in array to right
	int arr[len];
 	
	int j = 0;
	int k = len-1;

	for (int i = 0; i < len; i++){
	  if(arr_temp[i] != 0){
	     arr[j] = arr_temp[i];
	     j++;
	  } else {
	     arr[k] = 0;
	     k--;
	  }
	}

	cout<<"Thit is the result ! \n";
	display(arr, len);

	return 0;
}


