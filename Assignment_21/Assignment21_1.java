package Assignment_21;

class Logic
{
    void productDigits(int num)
    {
        int product = 1;
        int original = num;

        while (num != 0)
        {
            int digit = num % 10;   
            product = product * digit; 
            num = num / 10;        
        }

        System.out.println("Product of digits of " + original + " is: " + product);
    }
}

class Assignment21_1
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.productDigits(234);
    }
}
