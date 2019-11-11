/**
* 排列产生算法
* */
template <class T>
void Perm(T a[], int k, int n){
	//cout << k << endl;
	if ( k == n-1){
		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else
	for (int j = k; j < n; ++j) {
		T t = a[k]; a[k] = a[j]; a[j] = t;
		Perm(a, k+1, n);
		t = a[k]; a[k] = a[j]; a[j] = t;
	}
}