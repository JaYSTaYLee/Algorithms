import java.util.Arrays;

public class Main 
{
  public static int binarySearch(int[] array, int key)
  {
    int l;
    int h;
    int m;

    l = 0;
    h = array.length - 1;

    while(l <= h)
    {
      m = ((h - l)) + l / 2;

      if(array[m] < key)
      {
        l = m + 1;
      }
      else if(array[m] > key)
      {
        h = m - 1;
      }
      else
      {
        return m;
      }
    }

    return -1;
  }

  public static int binarySearch(int[] array, int low, int high, int key)
  {
    int l = low;
    int h = high;
    int m = (low + high) / 2;

    if(l <= h)
    {
      if(array[m] < key)
      {
        return binarySearch(array, m + 1, h, key);
      }
      else if(array[m] > key)
      {
        return binarySearch(array, l, m, key);
      }
      else
      {
        return m;
      }
    }

    return -1;
  }

  public static void main(String[] args) 
  {
    int[] numbers = {0, 1, 2, 3};

    System.out.println(Arrays.toString(numbers));

    int key = 2;

    System.out.println("Found " + key + " at index: " + binarySearch(numbers, key));

    System.out.println("Found " + key + " at index: " + binarySearch(numbers, 0, numbers.length - 1, key));
  }
}