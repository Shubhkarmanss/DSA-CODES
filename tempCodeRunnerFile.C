
#include <iostream>
using namespace std;

int leftsearch(int array[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    int ans = -1;
    int mid = left + (right - left) / 2;
    while (left <= right)
    {
        if (array[mid] == key)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (array[mid] < key)
        {
            left = mid + 1; // to search in right part now
        }
        else
        {
            right = mid - 1; // to search in left part now
        }
        mid = left + (right - left) / 2;
    }
    return ans;
}
int rightsearch(int array[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    int mid = left + (right - left) / 2;

    int ans = -1;
    while (left <= right)
    {
        if (array[mid] == key)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (array[mid] < key)
        {
            left = mid + 1; // to search in right part now
        }
        else
        {
            right = mid - 1; // to search in left part now
        }
        mid = left + (right - left) / 2;
    }
    return ans;
}

int main()
{
    int evenarray[10] = {2, 4, 5, 7, 8, 8, 23, 45, 4567, 6788};
    int oddarray[11] = {2, 7, 7, 7, 7, 7, 7, 7, 4567, 6788, 99999};
    int key = 8;
    int leftplace = leftsearch(evenarray, 10, key);
    int rightplace = rightsearch(evenarray, 10, key);

    cout << "Left place is at " << leftplace << " & right place is at" << rightplace << endl;
}
