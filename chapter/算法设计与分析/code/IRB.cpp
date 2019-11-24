Void IBacktrack(int n)
{
    int k = 0;
    while(k >= 0)
    {    
        if(还剩下尚未检测的x[k]，使得x[k]∈T(x[0],...,x[k-1]) 
            && (Bk(x[0],...,x[k]))
        {
            //判定是否为可行解
            if((x[0],...,x[k]) 是一个可行解) 
                 //输出可行解
                输出 (x[0],...,x[k])；   
            k++;
        }
        else k--;
    }
}