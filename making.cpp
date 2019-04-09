/*矩陣翻轉的副程式*/ 
/*bool sub_Matrix_Flipr(int**,int,int);*//*回傳true代表正常執行，反之執行失敗*/
/*sub_Matrix_Flipr(需轉換的陣列名,x,y);「array[x][y]」*/
bool sub_Matrix_Flipr(int**array,int i,int h,char C)
{
	
	cout << "==sub_Matrix_Flipr==" << endl;
	bool S=false;/*執行錯誤*/ 
	int i_long=0,i_Short=0;
	int longest = (( i >= h)?i:h)-1;//陣列最長長度。 
	short Shortest= ((i >= h)?h:i)-1;//陣列最短長度。
	//cout << "longest=" << longest << ",Shortest=" << Shortest << endl;
	int G=0;/*G暫存資料*/ 
	if(i>=h)/*判斷陣列為垂直的*/ 
	{
		//cout << "C[0]>=C[1]"<< endl;
		if(C=='U')/*上下翻轉*/ 
		{
			for(i_long=0;i_long<=longest;i_long++)
			{
				if((longest+1)%2==1)/*如果最長(longrst+1)為奇數。*/
				{
					if(longest-i_long==i_long)break;/*讓i_long跑到(longest-i_long)和i_long一樣為止，防止二次替換。*/ 
				}
				else/*反之如果為偶數*/ 
				{
					if(((longest)/2)+1==i_long)break;/*跑到i_long再加1後會跑到的部分為止。*/ 
				}
				for(i_Short=0;i_Short<=Shortest;i_Short++)
				{
					G=array[i_long][i_Short];
					array[i_long][i_Short]=array[longest-i_long][i_Short];
					array[longest-i_long][i_Short]=G;
				}
			}
			S=true;/*迴圈有成功跑到並且跑完。*/
		}
		else if(C=='A')/*左右翻轉*/ 
		{
			for(i_long=0;i_long<=longest;i_long++)
			{
				for(i_Short=0;i_Short<Shortest;i_Short++)
				{
					if((Shortest+1)%2==1)/*如果最短(Shortest+1)為奇數。*/
					{
						if(Shortest-i_Short==i_Short)break;/*讓i_Short跑到(Shortest-i_Short)和i_Short一樣為止，防止二次替換。*/ 
					}
					else/*反之如果為偶數*/ 
					{
						if(((Shortest)/2)+1==i_Short)break;/*跑到i_Short再加1後會跑到的部分為止。*/ 
					}
					G=array[i_long][i_Short];
					array[i_long][i_Short]=array[i_long][i_Short+1];
					array[i_long][i_Short+1]=G;
				}
			}
			S=true;/*迴圈有成功跑到並且跑完。*/
		}
		
	}
	else if(i<=h)/*判斷陣列為水平的*/
	{
		//cout << "C[0]<=C[1]"<< endl;
		
			if(C=='A')/*左右翻轉*/ 
			{
				for(i_long=0;i_long<=longest;i_long++)
				{
					if((longest+1)%2==1)/*如果最長(longrst+1)為奇數。*/
					{
						if(longest-i_long==i_long)break;/*如果最長(longrst+1)為奇數。*/
					}
					else
					{
						if(((longest)/2)+1==i_long)break;/*跑到i_long再加1後會跑到的部分為止。*/ 
					}
					for(i_Short=0;i_Short<=Shortest;i_Short++)
					{
						G=array[i_Short][i_long];
						array[i_Short][i_long]=array[i_Short][longest-i_long];
						array[i_Short][longest-i_long]=G;
					}
				}
			} 
			else if(C=='U')/*上下翻轉*/ 
			{
				for(i_long=0;i_long<=longest;i_long++)
				{
					for(i_Short=0;i_Short<Shortest;i_Short++)
					{
						if((Shortest+1)%2==1)/*如果最短(Shortest+1)為奇數。*/
						{
							if(Shortest-i_Short==i_Short)break;/*讓i_Short跑到(Shortest-i_Short)和i_Short一樣為止，防止二次替換。*/ 
						}
						else/*反之如果為偶數*/ 
						{
							if(((Shortest)/2)+1==i_Short)break;/*跑到i_Short再加1後會跑到的部分為止。*/ 
						}
							G=array[i_long][i_Short];
							array[i_long][i_Short]=array[i_long][i_Short+1];
							array[i_long][i_Short+1]=G;
					}
				}
			} 
		
		S=true;/*迴圈有成功跑到並且跑完。*/
	}
	return S;/*執行成功*/
}
