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