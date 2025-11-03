class Logic
{
    void FindMax(int iNo1, int iNo2)
    {
        
        if(iNo1 > iNo2)
        {
             System.out.println(iNo1+" is the Max number");
        }
        else
        {
          System.out.println(iNo1+" is the min number");  
        }
       
    }
}

class Assignment17_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMax(20, 15);
    }
}