import java.util.Arrays;

public class Main 
{
  public static void insertionSort(int[] array)
  {
    int j;
    int temp;

    for(int i = 0; i < array.length; ++i)
    {
      j = i;

      while(j > 0)
      {
        if(array[j] < array[j - 1])
        {
          temp = array[j];
          array[j] = array[j - 1];
          array[j - 1] = temp;
        }

        --j;
      }
    }
  }

  public static void main(String[] args) 
  {
    int[] numbers = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

    System.out.println(Arrays.toString(numbers));

    insertionSort(numbers);

    System.out.println(Arrays.toString(numbers));
  }
}