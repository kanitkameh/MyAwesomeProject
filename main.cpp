#include<iostream>

using namespace std;

int increment(int a){
    return a+1;
}
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
    cout << increment(5) << endl;
    return 0;
}
