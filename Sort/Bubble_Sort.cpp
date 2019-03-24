/*如果索引(i)大於索引(i+1)就讓兩個索引的資料對調(由小到大排序)*/
/*void sub_Bubble_Sort(int*,int);*//*氣泡排序法*/
void sub_Bubble_Sort(int*array,int size)/*(陣列初始位址,陣列大小)*/
{
	int i=0,Ped=0;/*i迴圈用。Ped(Prestored)預存*/
	bool A=false;
	for(i=0;i<size;i++)
	{
		if(i==(size-1)&&A==true)/*如果i到達(size-1)也就是該陣列最後一個值，並且A=true代表有改到陣列的內容，就將A=true,i=0，重新再跑一次*/
		{
			A=false;
			i=0;
		}
		if(array[i]>array[i+1]&&i<(size-1))/*只跑到(size-2)是因為(i+1)不只是跑到(size-2)的話(i+1)會超過陣列的大小所承受之範圍*/
		{
				/*以下三行負責將索引(i)和索引(i+1)的資料對調*/
        /*1*/Ped=array[i];
		 		/*2*/array[i]=array[i+1];
		 		/*3*/array[i+1]=Ped;
		 		A=true;/*A=true代表這次迴圈有改到陣列內容*/
		}
	}
}
