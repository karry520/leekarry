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
