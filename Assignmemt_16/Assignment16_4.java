class Logic
{
    void ReverseNumber(int iNo)
    {
        int iDigit = 1;

       while(iNo != 0)
       {
        iDigit = iNo % 10;
        System.out.println(iDigit);
        iNo = iNo / 10;

       }
        
    }
}

class Assignment16_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.ReverseNumber(1234);
    }
}
