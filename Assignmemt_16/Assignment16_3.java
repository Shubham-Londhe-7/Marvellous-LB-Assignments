class Logic
{
    void FindFactorial(int n)
    {
        int iCnt = 1;
        int iFact = 1;

        for(iCnt =1; iCnt <= n; iCnt++)
        {
            iFact = iFact * iCnt;
        }

        System.out.println("The Factorial of given no is:"+iFact);
    }
}

class Assignment16_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindFactorial(5);
    }
}
