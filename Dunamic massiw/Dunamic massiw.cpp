#include <iostream>

using namespace std;

int main()
{
    // Динамічні масиви

    int* nums = new int[3] { 3, 4, 2 };
    nums[0] = 67;

    cout << "Rest: " << nums[0] << endl;

    delete[] nums;

    return 0;

}

