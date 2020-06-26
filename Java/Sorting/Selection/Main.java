import java.util.Arrays;

public class Main 
{
  public static void selectionSort(int[] array)
  {
    int temp;

    for(int i = 0; i < array.length; ++i)
    {
      for(int j = i + 1; j < array.length; ++j)
      {
        if(array[j] < array[i])
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
  }

  public static void main(String[] args) 
  {
    int[] numbers = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

    System.out.println(Arrays.toString(numbers));

    selectionSort(numbers);

    System.out.println(Arrays.toString(numbers));
  }
}