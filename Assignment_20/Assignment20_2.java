package Assignment_20;

class Logic
{
    void printReverse(int n)
    {
        int iCnt = 0;
        for(iCnt = n; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class Assignment20_2
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}