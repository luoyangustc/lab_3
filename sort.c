//this is mergesort

void mergearray(int a[], int first, int mid, int last, int temp[])
{
    int i = first, j = mid + 1;
    int m = mid,   n = last;
    int k = 0;

    while (i <= m && j <= n)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= m)
        temp[k++] = a[i++];

    while (j <= n)
        temp[k++] = a[j++];

    for (i = 0; i < k; i++)
        a[first + i] = temp[i];
}
void mergesort(int a[], int first, int last, int temp[])
{
    if (first < last)
    {
        int mid = (first + last) / 2;
        mergesort(a, first, mid, temp);    
        mergesort(a, mid + 1, last, temp); 
        mergearray(a, first, mid, last, temp);  
    }
}


//this is quicksort

void quicksort(int t[],int i,int j)
{
    int r = i - 1;
    int p = i;
    int x ,temp;

    if (i < j)
    {
        x = t[j];
        for (;p<j;p++)
        {
            if (x  >  t[p])
            {
                r = r + 1;
                temp = t[r];
                t[r] = t[p];
                t[p] = temp;
            }

        }
        r = r+1;
        temp = t[r];
        t[r] = t[j];
        t[j] = temp;

        quicksort(t,i,r-1);
    	quicksort(t,r+1,j);
    }
    
}
