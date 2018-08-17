/*
Problem : 

정수 배열(int array)가 주어지면 가장 큰 이어지는 원소들의 합을 구하시오. 단, 시간복잡도는 O(n).

예제}
Input: [-1, 3, -1, 5]
Output: 7 // 3 + (-1) + 5

Input: [-5, -3, -1]
Output: -1 // -1

Input: [2, 4, -2, -3, 8]
Output: 9 // 2 + 4 + (-2) + (-3) + 8

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


	//Compare current sum and max sum
	int currSum = arr_temp[0];
	int maxSum = arr_temp[0]; 

	for (int i = 1; i < len; i++) {
	
	   currSum = max(currSum + arr_temp[i], arr_temp[i]);
	   maxSum = max(currSum, maxSum);
	  
	}

	//Print solution
	cout<<"This is the answer : "<<maxSum<<"\n";

	return 0;
}
