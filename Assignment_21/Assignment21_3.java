package Assignment_21;

class Logic
{
    void displayFactors(int n)
    {
        System.out.print("Factors of " + n + " are: ");
        
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}

class Assignment21_3
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}
