void change(int*a,int*b)
{
    int Val;
    Val=*a;
    *a=*b;
    *b=Val;
}
void Quick_Sort(int*arr,int index_Key,int index_End)/*index_Key->排序頭，排序尾->index_End*/
{
    int Key=arr[index_Key];
    if(index_Key<index_End)
    {
        int i=index_Key,j=index_End+1,sw=0;

            do
            {
                do
                {
                    i=i+1;
                }while(arr[i]<Key);
                do
                {
                    j=j-1;
                }while(arr[j]>Key);
                    if(i<j)
                        change(&arr[i],&arr[j]);
                    //i=i+1;
                    //j=j-1;
            }while(i<j);
            change(&arr[index_Key],&arr[j]);//兩值交換
            Quick_Sort(arr,index_Key,j-1);
            Quick_Sort(arr,j+1,index_End);
    }
}
