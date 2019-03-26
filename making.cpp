/*矩陣轉換的副程式*/ 
#include<iostream>
using namespace std;
/*矩陣翻轉*/
bool sub_Matrix_Flipr(int**,int [2],char);
/*sub_Matrix_Flipr(需轉換的陣列名,[x][]，x的值,[][y]，y的值,如何轉換);*/
/*轉換接受之字元:U(向上),D(向下),R(向右),L(向左)*/ 
int main()
{
	int i=0;
	int Array[2][2]={1,2,3,4};
	int*Y[2];
	bool BL=true;
	//int**Array=new int*[2]();
	//for(i=0;i<2;i++)
	//	Array[i]=new int[2]();
	int A[2]={2,2};
	for(i=0;i<2;i++)
	{
		Y[i]=Array[i];
	}
	
	BL=sub_Matrix_Flipr(Y,A,'L');
	cout << BL;
	//delete [] Array;
	//delete [] Y;
}
bool sub_Matrix_Flipr(int**array,int C[2],char s)
{
	
	if(C[0]>=C[1])int i_0=C[0],i_1=C[1];
	else int i_0=C[1],i_1=C[0];
	int G=0;/*G暫存資料*/ 
	if(s=='U')
	{
		if(C[0]>=C[1])
		{
		//	G=
		}
	}
	else if(s=='D')
	{
		
	}
	else if(s=='R')
	{
		
	}
	else if(s=='L')
	{
		
	}
	else return false;/*執行錯誤*/ 
	return true;/*執行成功*/ 
}

