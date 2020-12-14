#include<iostream>

using namespace std;

int increment(int a){
    int result = a;
    result++;
    return result;
}

int main(){
    cout << increment(5) << endl;
    return 0;
}