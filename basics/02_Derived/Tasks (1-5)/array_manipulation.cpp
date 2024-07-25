/*
* Tasks: 1- Create a function to find the maximum number of array.
*        2- Create a function to search to the number in the array which number is taken from user.
*        3- Delete number in array.
*        4- Merge two arrays together.
*        5- Find the even and odd numbers in the array.
*/

#include <iostream>

void print_arr(int arr[],int size)
{
    std::cout << "Array Elements:" <<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int Task1_max_arr(int arr[],int size);
int Task2_search_arr(int arr[],int size,int number);
bool Task3_del_arr(int arr[],int& size,int del_number);
void Task4_merge_2_arrs(int arr[],int& size,int arr_to_merge[], int size_arr_to_merge);
void Task5_print_even_odd_arr(int arr[],int size);

int main() {
    
    // My Array
    int arr[] = {1,10,20,3,4,5,6,22,8,19};
    int size = sizeof(arr)/sizeof(arr[0]);

    /*
     * Task1 Execution
    */ 
    std::cout << "Maximum of array is: " << Task1_max_arr(arr,size) << std::endl;

    /*
     * Task2 Execution
    */ 
    int number; 
    std::cout << "Enter the number to search for in the array: " << std::endl;
    std::cin >> number;
    int found_index = Task2_search_arr(arr,size,number);
    if(found_index != -1){std::cout << "Number: " << number << " Found in Index " << found_index << std::endl;}
    else{std::cout << "Number: " << number << " NOT Found"  << std::endl;}
    print_arr(arr,size);
    
    /*
     * Task3 Execution
    */ 
    std::cout << "Enter the number to delete it from the array: " << std::endl;
    std::cin >> number;
    if(Task3_del_arr(arr,size,number)){std::cout << "Deleted Successfully"  << std::endl;}
    else{std::cout << "Number NOT found in array"  << std::endl;}
    print_arr(arr,size);

    /*
     * Task4 Execution
    */ 
    // My to be merged Array
    int arr_to_be_merged[] = {13,29,80,31,42,56};
    int size_arr_to_be_merged = sizeof(arr_to_be_merged)/sizeof(arr_to_be_merged[0]);
    Task4_merge_2_arrs(arr,size,arr_to_be_merged,size_arr_to_be_merged);
    print_arr(arr,size);


    /*
     * Task5 Execution
    */ 
    Task5_print_even_odd_arr(arr,size);

    return 0;
}


/**================================================================
* @Fn				- Task1_max_arr
*
* @brief 			- A function to find the maximum number existing in an array.
*
* @param [in] 		- arr[]: Passed array
*
* @param [in] 		- int size: The size of the passed array.
*
* @retval 			- int: The maximum number found in the array.
*
* Note				- N/A
*
*/
int Task1_max_arr(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    return max;
}

/**================================================================
* @Fn				- Task2_search_arr
*
* @brief 			- A function to search to the number in the array.
*
* @param [in] 		- arr[]: Passed array
*
* @param [in] 		- int size: The size of the passed array.
*
* @param [in] 		- int number: The number needed to search for in the passed array.
*
* @retval 			- int: The index of the number being searched.
*
* Note				- This function return '-1' in case the number was NOT found in the passed array.
*
*/
int Task2_search_arr(int arr[],int size,int number){
    for(int i=0;i<size;i++)
    {
        if(arr[i] == number)
        {
            return i;
        }   
    }
    return -1;
}

/**================================================================
* @Fn				- Task3_del_arr
*
* @brief 			- A function to delete a given number in array.
*
* @param [in] 		- arr[]: Passed array
*
* @param [in] 		- int size: The size of the passed array.
*
* @param [in] 		- int number: The number needed to be deleted in the passed array.
*
* @retval 			- bool: Wether the number is deleted from the array or not.
*
* Note				- N/A
*
*/
bool Task3_del_arr(int arr[],int& size,int del_number){
    int del_index = Task2_search_arr(arr,size,del_number);
    if(del_index != 1)
    {   
        if(del_index == size-1){
            arr[size-1] = '\0';
        }
        else{
            int i=del_index;
            for(;i<size-1;i++){
                arr[i] = arr[i+1];
            }
            arr[i] = '\0';
        }
        size--;
        return true;
    }
    return false;
}

/**================================================================
* @Fn				- Task4_merge_2_arrs
*
* @brief 			- A function to merge two arrays together.
*
* @param [in] 		- arr[]: Passed array
*
* @param [in] 		- arr_to_merge[]: Passed array to be merged with the original array.
*
* @param [in] 		- int size: The size of the passed array.
*
* @param [in] 		- int size_arr_to_merge: The size of the passed array to be merged with the original array.
*
* @retval 			- None
*
* Note				- N/A
*
*/
void Task4_merge_2_arrs(int arr[],int& size,int arr_to_merge[], int size_arr_to_merge){
    
    for(int i = size;i<size + size_arr_to_merge;i++){
        arr[i] = arr_to_merge[i-size];
    }
    size = size + size_arr_to_merge;
    return;
}

/**================================================================
* @Fn				- Task5_print_even_odd_arr
*
* @brief 			- A function to print the even and odd numbers in the array.
*
* @param [in] 		- arr[]: Passed array
*
* @param [in] 		- int size: The size of the passed array.
*
* @retval 			- None.
*
* Note				- N/A
*
*/
void Task5_print_even_odd_arr(int arr[],int size){
    for(int i = 0; i< size; i++){
        if(arr[i]%2 == 0)
        {
            std::cout << arr[i] << " is Even" << std::endl;
        }
        else
        {
            std::cout << arr[i] << " is Odd" << std::endl;
        }
    }
    return;
}