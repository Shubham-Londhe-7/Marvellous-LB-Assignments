
class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is negative");
        }
        else
        {
            System.out.println("Number is zero");
        }
    }
}

class Assignment18_5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}