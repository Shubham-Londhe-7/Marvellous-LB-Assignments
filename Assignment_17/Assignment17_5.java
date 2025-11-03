class Logic
{
    void PrintTable(int iNo1)
    {
        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNo1+" * "+iCnt+" = "+(iNo1*iCnt));
        }
       
    }
}

class Assignment17_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintTable(5);
    }
}