// Input data will contain the total count of pairs to process in the first line.
// The following lines will contain pairs themselves - one pair at each line.
// Answer should contain the results separated by spaces

#include <iostream>

// get users input for the amount of values
int get_user_inp()
{
    int a;
    std::cin >> a;
    return a;
}

// create an array on the fly and return it so we can print it
int *create_array(int count)
{
    //int new_array[count];
    int* new_array = new int[count];
    int add_these[2];

    for (int i = 0; i < count; i++) {
        scanf("%d %d", &add_these[0], &add_these[1]);
        int temp = (add_these[0] + add_these[1]);
        new_array[i] = temp;
    }
    return new_array;
}

void printArray(int arr[], int x)
{
    for (int i = 0; i < x; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    int values = get_user_inp();
    int* ptr = create_array(values);
    printArray(ptr, values);
    return 0;
}
