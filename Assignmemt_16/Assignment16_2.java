class Logic
{
    void CheckEvenOdd(int n)
    {
        if(n % 2 == 0)
        {
             System.out.println("The Number is Even");
        }
        else
        {
            System.out.println("The number is Odd");
        }
    }
}

class Assignment16_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
    }
}
