/*
정수 배열(int array)이 주어지면 두번째로 큰 값을 프린트하시오.

예제)
Input: [10, 5, 4, 3, -1]
Output: 5

Input: [3, 3, 3]
Output: Does not exist.

*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

//Define display function
void display(int *arr, int len){

        for (int *tmp = arr; tmp < arr+len; tmp++)
                cout<<" "<<*(tmp);
                cout<<"\n";

}
//Define finding minimum elements of an array
int find_min(int arr[], int len){

	int i = arr[0];

	for (int j = 0; j < len; j++) {
	  if(i > arr[j])
	    i = arr[j];
	}
	return i;
}
//Define finding max elements of an array
int find_max(int arr[], int len){

	int i = arr[0];

	for (int j = 0; j < len; j++) {
	  if(i < arr[j])
	    i = arr[j];
	}
	return i;
}

int main(void) {

        int len=0;
        cout<<"Please enter your size of array : ";
        cin>>len;

        int arr_temp[len];
	if (len < 2) {
	  cout<<"Please enter array size larger than or eqaul to 2\n";
	  return 0;
	} else {
          cout<<"Please enter your elements of array : ";
            for (int i = 0 ; i < len; i++){
                  scanf("%d", &arr_temp[i]);
            }

          cout<<"This is your input : \n";
          display(arr_temp, len);
        }

	//Finding min val for crieteria
	int minVal = find_min(arr_temp,len);

	//Define intermediate vars
	int temp1 = arr_temp[0]; //This will save largest
	int temp2 = minVal; //This will save second largest

	for (int i = 0; i < len; i++) {
	  if (arr_temp[i] > temp1){
	    temp2 = temp1;
	    temp1 = arr_temp[i];
  	  } else if (arr_temp[i] > temp2 && arr_temp[i] != temp1){
	    temp2 = arr_temp[i];		
	  }   
	}


	//Compute max value for checking	   
 	int maxVal = find_max(arr_temp,len);

	if (temp2 == minVal && temp2 == maxVal) {
	  cout << "There is no second largest value\n";
	} else {
	  cout<<"This is the answer : "<<temp2;
	  cout<<"\n";
	}
	
	return 0;
}
