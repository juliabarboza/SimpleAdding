#include <iostream>
#include <string>
using namespace std;

int SimpleAdding(int num) { 

  // code goes here 
  int total = 0;

	for (int x = 1; x <= num; x++)
	{
		total += x;
	}
	return total;
            
}

int main() { 
  
  // keep this function call here
  cout << SimpleAdding(gets(stdin));
  return 0;
    
}
