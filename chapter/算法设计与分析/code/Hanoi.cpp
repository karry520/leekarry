/**
* 汉诺塔问题
* */
void Move(int n, tower x, tower y){
	cout << "The disk " << n << " is moved from " << char(x) << " to top of tower " << char(y) << endl;
}
void Hanoi(int n, tower x, tower y, tower z) {
	if(n){//将塔座x上的n个圆盘移到y上，顺序不变
		Hanoi(n-1, x, z, y);
		Move(n, x, y);
		Hanoi(n-1, z, y, x);
	}
}
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