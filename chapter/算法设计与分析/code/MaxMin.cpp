void MaxMin(int i, int j, T& max, T& min)
{
	T min1, max1;
	// 表中只有一个元素时
	if(i == j) max=min=l[i];
	// 表中有两个元素时
	else if(i == j-1)
	{
		if(l[i] < l[j])
		{
			max=l[j]; min=l[i];
		}else{
			max=l[i]; min=l[j];
		}
	}else{
		int m = (i + j) / 2;
		MaxMin(i, m, max, min);
		MaxMin(m+1, j, max1, min1);
		if(max < max1) max = max1;
		if(min > min1) min = min1;
	}

}