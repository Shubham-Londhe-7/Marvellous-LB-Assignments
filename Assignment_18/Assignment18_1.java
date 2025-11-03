
class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0, iFrequency = 0;

        for(iCnt = 2; iCnt < (num / 2); iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iFrequency++;
                break;              // Optimization
            }
        }  
        if(iFrequency == 0)
        {
            System.out.println("Number is Prime");
        }
        else
        {
            System.out.println("Number is NOT Prime");
        }
        
    }
}

class Assignment18_1
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}