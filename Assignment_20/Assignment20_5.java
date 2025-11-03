package Assignment_20;

class Logic
{
    void findSmallestDigit(int num)
    {
        int smallest = 9;
        int original = num;

        while (num != 0)
        {
            int digit = num % 10;  
            if (digit < smallest)
                smallest = digit;    
            num = num / 10;       
        }

        System.out.println("Smallest digit in " + original + " is: " + smallest);
    }
}

class Assignment20_5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45782);
    }
}
