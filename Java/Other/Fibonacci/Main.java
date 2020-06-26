
public class Main 
{
  //Fibonacci Sequence starts at index 0
  public static int fibonacciRecursive(int n)
  {
    if(n == 0)
    {
      return 0;
    }
    else if(n == 1)
    {
      return 1;
    }
    else
    {
      return fibonacci(n - 1) + fibonacci(n - 2);
    }
  }

  //Non-recursive
  public static int fibonacci(int n)
  {
    if(n == 0)
    {
      return 0;
    }
    else if(n == 1)
    {
      return 1;
    }

      int num1 = 0;
      int num2 = 1;
      int num3 = 1;

      for(int i = 1; i < n; ++i)
      {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
      }

      return num3;
  }

  public static void main(String[] args) 
  {
    System.out.print(fibonacci(8));
  }
}