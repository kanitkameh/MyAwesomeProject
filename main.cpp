#include<iostream>

using namespace std;

int biggestNumber(int* arr, int size){
	int result = arr[0];
	for(int i=0;i<size;i++){
		if(result<arr[i]){
			result = arr[i];
		}
	}
	return result;
}

int main(){
    return 0;
}
