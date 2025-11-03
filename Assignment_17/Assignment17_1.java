class Logic
{
    void SumofDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        System.out.println("The Summetion of Digit:"+iSum);
    }
}



class Assignment17_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumofDigits(1234);
    }
}