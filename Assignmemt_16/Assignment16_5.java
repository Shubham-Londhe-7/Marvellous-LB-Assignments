class Logic
{
    void CountDigits(int iNo)
    {
        int iDigit = 1;
        int iCnt = 0;

       while(iNo != 0)
       {
        iDigit = iNo % 10;
        iCnt = iCnt + 1;
        iNo = iNo / 10;
       }
       System.out.println("The count of Digit :"+iCnt);
        
    }
}

class Assignment16_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CountDigits(1234);
    }
}
