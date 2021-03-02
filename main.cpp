#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

int main() {
    int  arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    cout<<*find_max_element(arr,4);


    return 0;
}