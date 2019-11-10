SolutionType Greedy(SType a[], int n)
{
    //初始时，解向量不包含任何分量
    SolutionType solution = Ø;  
    //多步决策，每次选择解向量的一个分量               
    for(int i = 0; i < n; i++)                        
    {   
        //遵循最优量度标准选择一个分量
        SType x = Select(a);
        //判定加入新分量x后的部分解是否可行
        if(Feasible(solution, x))                 
        {
             //形成新的部分解
            solution = Union(solution, x);   
        }
    }
     //返回生成的最优解
    return solution;  
}
                                  
