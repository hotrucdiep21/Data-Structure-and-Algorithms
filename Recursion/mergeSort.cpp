#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

     while (i <= mid)  // Corrected condition
    {
        temp[k++] = a[i++];
    }

    while (j <= end)  // Corrected condition
    {
        temp[k++] = a[j++];
    } 

    for (i = start; i <= end; i++)
    {
        a[i] = temp[i - start];
    }
}
void mergeSort(vector<int>& a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

int main()
{
    vector<int> a = {10, 2, 4, 6, 33, 2, 1};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " " << endl;
    }

    mergeSort(a, 0, a.size()-1);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}