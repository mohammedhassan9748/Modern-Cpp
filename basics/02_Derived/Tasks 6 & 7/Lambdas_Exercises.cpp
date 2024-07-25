/*
* Tasks: 1- Write a lambda function to calculate the square of a given number.
*        2- Use lambda functions to sort an array of integers in ascending and descending order.
*/

#include <iostream>
#include <algorithm>

void print_arr(int arr[],int size)
{
    std::cout << "Array Elements:" <<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

auto square_function = [](int x) -> int{
    return (x*x);
};

int main() {
    /*
     * Task1 Execution
    */ 
    std::cout << "Please Enter a Number: ";
    int number; std::cin >> number;
    std::cout << "The square of "<< number << " = " << square_function(number) << std::endl;
    

    /*
     * Task2 Execution
    */ 
    // My Array
    int arr[] = {1,10,20,3,4,5,6,22,8,19};
    print_arr(arr,10);
    std::sort(std::begin(arr), std::end(arr), [](int first,int second){return (first > second);});
    print_arr(arr,10);
    std::sort(std::begin(arr), std::end(arr), [](int first,int second){return (first < second);});
    print_arr(arr,10);
    return 0;
}

