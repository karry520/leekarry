Void RBacktrack(int k)
{
    for(每个x[k]，使得x[k]∈T(x[0],...,x[k-1]) 
        && (Bk(x[0],...,x[k])) 
    {
        //判定是否为可行解
        if((x[0],...,x[k]) 是一个可行解) 
            //输出可行解
            输出 (x[0],...,x[k])；    
        //深度优先进入下一层
        RBacktrack(k+1);        
    }
}
