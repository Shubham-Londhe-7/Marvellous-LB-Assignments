package Assignment_21;

class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        System.out.println("From 1 to " + n + ":");
        System.out.println("Even numbers count: " + evenCount);
        System.out.println("Odd numbers count: " + oddCount);
    }
}

class Assignment21_2
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
