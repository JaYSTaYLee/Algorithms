
public class Main 
{
  //GCD calculator recursive
  public static int gCD(int num1, int num2)
  {
    if(num1 == num2)
    {
      return num1;
    }
    else if(num1 > num2)
    {
      num1 -= num2;
      return gCD(num1, num2);
    }
    else
    {
      num2 -= num1;
      return gCD(num1, num2);
    }
  }

  public static void main(String[] args) 
  {
    System.out.print(gCD(12, 8));
  }
}