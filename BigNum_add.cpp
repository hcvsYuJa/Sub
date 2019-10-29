string add(string a, string b)
{
	int len_a = a.size() - 1;
	int len_b = b.size() - 1;
	int over = 0;
	string re = "";
	int i,min;
	if (len_a >= len_b)
		min = len_b;
	else
		min = len_a;
	for (i = 0; i <= min; i++)//同等位數運算部分
	{	
		over=int(a[len_a - i]) + int(b[len_b - i]) - 96 + over;
		re = (char)(over % 10 + 48)+re;
		over = over / 10;
	}
	for (; (len_a - i) >= 0; i++)//a位數處理
	{
		over = int(a[len_a - i])-48 + over;
		re = (char)(over % 10 + 48) + re;
		over = over / 10;
	}
	for (; (len_b - i) >= 0; i++)//b位數處理
	{
		over = int(b[len_b - i]) - 48 + over;
		re = (char)(over % 10 + 48) + re;
		over = over / 10;
	}
	if(over!=0)
		re = (char)(over % 10 + 48) + re;
	return re;
}
