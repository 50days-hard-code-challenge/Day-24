 
int findKRotation(vector<int> &arr)
{
    int n = arr.size(), index = 0;

    // Linear searching for the index of the element with 
    // minimum value.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[index])
        {
            index = i;
        }
    }

    return index;
}

 
