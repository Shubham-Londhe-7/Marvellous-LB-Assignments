package Assignment_20;

class Logic
{
    void checkPerfect(int num)
    {
        int sum = 0;

        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
            System.out.println(num + " is a Perfect Number");
        else
            System.out.println(num + " is not a Perfect Number");
        
    }
}

class Assignment20_3
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}