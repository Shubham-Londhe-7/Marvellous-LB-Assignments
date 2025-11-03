
class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
}

class Assignment18_3
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}