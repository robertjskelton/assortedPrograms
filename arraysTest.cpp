#include <iostream>

using namespace std;

int main()
{
    int ITEMS = 0;
    cout << "How many items should this array hold? ";
    cin >> ITEMS;
    cout << "The array will hold " << ITEMS << " integers.\n";

    int nums[ITEMS];


    for (int i = 0; i < ITEMS; ++i)
    {
        cout << "Enter integer number " << i << ": ";
        cin >> nums[i];

    }


    cout << "Your inputs have been recorded.";
    int sum = 0;
    cout << " Your array looks like this: " << endl;

//print out the array
    for (int i = 0; i < ITEMS; ++i)
    {

        cout << nums[i] << " ";
        sum += nums[i];
    }
    cout << "\n\n/// FACTS ABOUT YOUR ARRAY ///" << endl;
    cout << "The sum is " << sum << endl;
    double average = (double)sum / ITEMS;
    cout << "The average is " << average << ".";

    cout << "\n\nPress enter to end.\n" << endl;
    cin.get();
    return 0;



}
