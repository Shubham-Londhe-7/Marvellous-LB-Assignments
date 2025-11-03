class Logic
{
    void CheckPallindrome(int iNo)
    {
        int iDigit = 0;
        int iReverse = 0;
        int OriginalNo = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = iReverse * 10 + iDigit;
            iNo = iNo / 10;
        }
        if(iReverse == OriginalNo)
        {
             System.out.println("The Given number is pallindrome");
        }
        else
        {
          System.out.println("The Given number is not pallindrome");  
        }
       
    }
}

class Assignment17_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPallindrome(122);
    }
}