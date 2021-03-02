#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs== nullptr||rhs== nullptr){
        return;
    } else
        {
        int temp = *lhs;
        *lhs = *rhs;
        *rhs = temp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows<=0 || num_cols<=0)
    {
        return nullptr;
    }else
        {
            int **array = new int* [num_rows];
            for (int i = 0; i < num_rows; i++) {
                array[i] = new int [num_cols];
            }
            for (int i = 0; i < num_rows; i++) {
                for (int j = 0; j < num_cols; j++) {
                    array[i][j] = init_value;
                }
            }
            return  array;
        }
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source == nullptr || arr_2d_target== nullptr)
    {
        return false;
    }
    if (num_cols<=0 || num_rows<=0)
    {
        return false;
    } else
        {
            for (int i = 0; i < num_rows; i++) {
                for (int j = 0; j < num_cols; j++) {
                    arr_2d_target[i][j] = arr_2d_source[i][j];
                }
            }
        }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {

    if (arr.size()<=1){
        return;
    }

    for (int i = 0; i < (arr.size())/2; i++) {
        int temp = arr.at(i);
        arr.at(i) = arr.at(arr.size()-1-i);
        arr.at(arr.size()-1-i) = temp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin == nullptr || arr_end == nullptr || arr_end==arr_begin){
        return;
    }
    int i = 0;
    while (arr_end-i != arr_begin+i){
        swap_args(arr_begin+i, arr_end-i);
        if (arr_begin+i+1 == arr_end-i || arr_begin+i+2 == arr_end-i){
            return;
        }
        i++;
    }

}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr== nullptr || size<=0)
    {
        return nullptr;
    }

    int max = -2147483647;
    int *maxPointer = nullptr;
    for (int i = 0; i < size; i++) {
        if (max<arr[i])
        {
            max = arr[i];
            maxPointer = &arr[i];
        }
    }
    return maxPointer;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> vectorOfOddNumbers;
    for (int i = 0; i < arr.size(); i++) {
        if (arr.at(i)% 2 != 0){
            vectorOfOddNumbers.push_back(arr.at(i));
        }
    }
    return vectorOfOddNumbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> vectorOfCommonNumbers;

    for (int i = 0; i < arr_a.size(); ++i)
    {
        for (int j = 0; j < arr_b.size(); ++j)
        {
            if (arr_a.at(i)==arr_b.at(j))
            {
                // If you need unique ones, but they don't pass the test((

//                bool tempFlag = true;
//                for (int k = 0; k < vectorOfCommonNumbers.size(); ++k)
//                {
//                    if (arr_a.at(i)==vectorOfCommonNumbers.at(i))
//                    {
//                        tempFlag = false;
//                    }
//                }
//                if (tempFlag)
//                {
//                }
                vectorOfCommonNumbers.push_back(arr_a[i]);
            }
        }
    }

    return vectorOfCommonNumbers;
}
