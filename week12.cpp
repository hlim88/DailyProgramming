/*
정수로된 배열이 주어지면, 각 원소가 자신을 뺀 나머지 원소들의 곱셈이 되게하라.
단, 나누기 사용 금지, O(n) 시간복잡도

Given an integer array, make each element a product of all element values without itself.

예제)
input: [1, 2, 3, 4, 5]
output: [120, 60, 40, 30, 24]
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

	//Create two multiplication array
	int arr_mult1[len];
	int arr_mult2[len];

	int prod_arr_temp1 = 1;
	for (int i = 0; i < len; i++) {
	  arr_mult1[i] = prod_arr_temp1;
	  prod_arr_temp1 *= arr_temp[i];
  	}

	int prod_arr_temp2 = 1;
	for (int i = len-1; i >= 0; i--) {
	  arr_mult2[i] = prod_arr_temp2;
	  prod_arr_temp2 *= arr_temp[i];
  	}

	#if 0
	cout<<"This is first array :\n";
	display(arr_mult1, len);
	cout<<"This is second array:\n";
        display(arr_mult2, len);
	#endif

	//Multiply two array results to get the answer

	int result[len];

	for (int i = 0; i < len; i++) {
	  result[i] = arr_mult1[i] * arr_mult2[i];
        }

	cout<<"Thit is the result ! \n";
        display(result, len);

	return 0;
}
