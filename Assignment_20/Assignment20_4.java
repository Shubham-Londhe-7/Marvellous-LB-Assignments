package Assignment_20;

class Logic
{
    void findLargestDigit(int num)
    {
        int largest = 0;
        int original = num;

        while (num != 0)
        {
            int digit = num % 10;  
            if (digit > largest)
                largest = digit;    
            num = num / 10;       
        }

        System.out.println("Largest digit in " + original + " is: " + largest);
    }
}

class Assignment20_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}