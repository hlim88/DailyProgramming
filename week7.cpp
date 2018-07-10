/*

String 에 모든 단어를 거꾸로 하시오.

예제)
Input: “abc 123 apple”
Output: “cba 321 elppa”

*/

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(void) 
{

   char line[100];
   int size, i, j, k = 0;

   puts("Please enter your sentence :");
   gets(line);

   size = strlen(line);

   for (i = 0; i <= size; ++i) {
     if (line[i] == ' ' || i == size) {
       for (j = i-1; j >= k; --j)
	   putchar(line[j]);
	   k = i+1;
	   cout<<" ";
      }
   }

	cout<<"\n";

  return 0;

}
