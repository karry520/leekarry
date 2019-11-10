void MergeSort(int left, int right)
{
	if(left < right)
	{
		int mid = (left + right) / 2; 
		MergeSort(left, mid);
		MergeSort(mid+1, right);
		// 将两个有序子序列合并成一个有序序列
		Merge(left, mid, right);
	}
}
void Merge(int left, int mid, int right)
{
	T* temp = new T[right - left + 1];
	int i = left, j = mid+1, k = 0; 
	while((i <= mid) && (j <= right))
	{
		if( l[i] <= l[j]) temp[k++] = l[i++];
		else temp[k++] = l[j++];
	}
	while(i <= mid) temp[k++] = l[i++];
	while(j <= right) temp[k++] = l[j++];
	for(i = 0, k = left;k <= right;)
	{
		l[k++] = temp[i++];
	}
}