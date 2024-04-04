#include <iostream>
#include <string>
#include "QSort.h"

int main() {
    int int_arr[] = { 10, 7, 8, 9, 1, 5 };
    int int_arr_size = sizeof(int_arr) / sizeof(int_arr[0]);

    std::string str_arr[] = { "apple", "banana", "kiwi", "mango", "orange", "pear" };
    int str_arr_size = sizeof(str_arr) / sizeof(str_arr[0]);

    QSort<int>::sort(int_arr, 0, int_arr_size - 1);

    for (int i = 0; i < int_arr_size; i++) {
        std::cout << int_arr[i] << " ";
    }

    std::cout << std::endl;

    QSort<std::string>::sort(str_arr, 0, str_arr_size - 1);

    for (int i = 0; i < str_arr_size; i++) {
        std::cout << str_arr[i] << " ";
    }

    std::cout << std::endl;

    QSort<int, std::greater<int>>::sort(int_arr, 0, int_arr_size - 1);

    for (int i = 0; i < int_arr_size; i++) {
        std::cout << int_arr[i] << " ";
    }

    std::cout << std::endl;

    char char_arr[][MAX_SIZE] = { "cat", "dog", "elephant", "bird", "zebra", "ant" , "antilopa" };
    int char_arr_size = sizeof(char_arr) / sizeof(char_arr[0]);

    QSort<char>::sort(char_arr, 0, char_arr_size - 1);

    for (int i = 0; i < char_arr_size; i++) {
        std::cout << char_arr[i] << " ";
    }

    std::cout << std::endl;
}
