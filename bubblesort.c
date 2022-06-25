    #include<stdio.h>
    /**
     * The function takes an array of integers and sorts them in descending order
     */
    void main ()
    {
        int i, j,temp;
        int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
        /* Sorting the array in descending order. */
        for(i = 0; i<10; i++)
        {
            /* Sorting the array in descending order. */
            for(j = i+1; j<10; j++)
            {
               /* Swapping the elements of the array. */
                if(a[j] > a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("Printing Sorted Element List ...\n");
       /* Printing the sorted array. */
        for(i = 0; i<10; i++)
        {
            printf("%d\n",a[i]);
        }
    }