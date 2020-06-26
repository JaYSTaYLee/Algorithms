import java.util.Arrays;

class Main 
{
  public static int partition(int[] array, int low, int high)
  {
    int l;
    int h;
    int m;
    int temp;

    l = low;
    h = high;
    m = ((h - l) / 2) + l;

    while(l <= h)
    {
      while(array[l] < array[m])
      {
        ++l;
      }

      while(array[h] > array[m])
      {
        --h;
      }

      if(l >= h)
      {
        break;
      }
      else
      {
        temp = array[l];
        array[l] = array[h];
        array[h] = temp;

        ++l;
        --h;
      }
    }

    return h;
  }

  public static void quickSort(int[] array, int low, int high)
  {
    int x;

    if(low >= high)
    {
      return;
    }
    else
    {  
      x = partition(array, low, high);

      quickSort(array, low, x);
      quickSort(array, x + 1, high);
    }
  }

  public static void main(String[] args) 
  {
    int[] numbers = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

    System.out.println(Arrays.toString(numbers));
    
    quickSort(numbers, 0, numbers.length - 1);

    System.out.println(Arrays.toString(numbers));
  }
}