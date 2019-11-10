int BSearch(T& x, int left, int right)
{
	if (left <= right)
	{
		int m = Divide(left, right);
		if(x < l[m]) return BSearch(x, left, m-1);
		else if(x > l[m]) return BSearch(x, m+1, right);
		else return m; 
	}
	return -1;
}