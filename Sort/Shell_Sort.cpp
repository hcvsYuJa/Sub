void MeFun_Sort_Shell(int*arr,int NT)
{
    int N=NT/2,j=0,c=0,K=0;
    char flag = '0';
    while(N!=0)
    {
        while(K<N)
        {
            for(j=K;(j+N)<NT;j=j+N)
            {
                if(arr[j]>arr[j+N])
                {
                    c=arr[j];
                    arr[j]=arr[j+N];
                    arr[j+N]=c;
                    flag='1';
                }
            }
            K=K+1;
        }
        if(flag=='0')
            N=N/2;
        K=0;
        flag='0';
    }
}
