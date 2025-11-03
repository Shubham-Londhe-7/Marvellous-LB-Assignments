package Assignment_21;

class Logic
{
    void countFactors(int n)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }

        System.out.println("Number of factors of " + n + " is: " + count);
    }
}

class Assignment21_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
