void MeFun_Sort_Shell(int*arr,int NT,char chose)
{/*謝爾排序法*/
/*
chose -> '<'(右邊比較大，由小到大排序)
        -> '>'(左邊比較大，由大到小排序)
*/
    int N=NT/2,j=0,c=0,K=0,before_j=0;
    char flag = '0';
    while(N!=0)
    {
        while(K<N)
        {
            for(j=K;(j+N)<NT;j=j+N)
            {
                if(((arr[j]>arr[j+N])&&chose=='<')||((arr[j]<arr[j+N])&&chose=='>'))
                {
                    c=arr[j];
                    arr[j]=arr[j+N];
                    arr[j+N]=c;
                    if(j-N>=K)
                    {
                        if(flag=='0')
                        {
                             before_j=j;
                            flag='1';
                        }
                        j=j-2*N;

                    }
                }
                else if(flag=='1')
                {
                    j=before_j;
                    flag='0';
                }
            }
            K=K+1;
        }
        N=N/2;
        K=0;
        flag='0';
    }
}
