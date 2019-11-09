/**
* 欧几里德递归算法
* */
void Swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}
int RGcd(int m, int n){
	if (m == 0) return n;
	return RGcd(n % m, m);
}
int Rcd(int m, int n) {
	if (m > n) Swap(m,n);
	return RGcd(m, n);
}