class Logic
{
    void FindMax(int iNo1, int iNo2, int iNo3)
    {
        
        if(iNo1 >= iNo2 && iNo1 > iNo3)
        {
             System.out.println(iNo1+" is the Max number");
        }
        else if(iNo2 >= iNo1 && iNo2 >= iNo3)
        {
          System.out.println(iNo2+" is the min number");  
        }
        else
        {
            System.out.println(iNo3+" is the min number");  
        }
       
    }
}

class Assignment17_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMax(20, 15, 17);
    }
}