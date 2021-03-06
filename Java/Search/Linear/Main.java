public class Main 
{
  public static int linearSearch(int[] array, int key)
  {
    for(int i = 0; i < array.length; ++i)
    {
      if(array[i] == key)
      {
        return i;
      }
    }
    return -1;
  }

  public static void main(String[] args) 
  {
    int[] numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int key = 6;

    System.out.print("Found " + key + " at index: " + linearSearch(numbers, key));
  }
}