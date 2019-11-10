SolutionType DandC(ProblemType P)
{
    ProblemType P1,P2,..., Pk;
    //子问题足够小，直接求解
    if(Small(P)) return S(P); 
    else 
    {
    	//将问题P分解成子问题P1,P2,..., Pk
        Divide(P, P1, P2, ... ,Pk); 
        //求解子问题，并合并解
        Return Combine(DandC(P1), DandC(P2), ... ,DandC(Pk));
    }
}