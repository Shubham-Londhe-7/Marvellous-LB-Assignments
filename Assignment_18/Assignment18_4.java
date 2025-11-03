
class Logic
{
    void sumEvenOddDigits(int n)
    {
        int iDigit = 0;
        int EvenSum = 0, OddSum = 0;

        while (n != 0)
        {
            iDigit = n % 10;
            if((iDigit % 2) == 0)
            {
                EvenSum = EvenSum + iDigit;
            }
            else
            {
                OddSum = OddSum + iDigit;
            } 
            n = n / 10;  
        }

        System.out.println("Even Sum : "+EvenSum);
        System.out.println("Odd Sum : "+OddSum);
    }
}

class Assignment18_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}