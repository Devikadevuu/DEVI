import java.util.Scanner;
public class Search
{
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the size of the array");
    int size=sc.nextInt();
    int array[]=new int[size];
    System.out.println("enter the elements of the array");
    for(int i=0;i<size;i++)
    {
      System.out.println("enter element"+(i+1)+":");
      array[i]=sc.nextInt();
    }
    System.out.println("enter the element to search:");
    int searchElement=sc.nextInt();
    boolean found=false;
    for(int i=0;i<size;i++)
    {
      if(array[i]==searchElement)
      {
        found=true;
        System.out.println("element found at index"+i);
        break;
      }
    }
    if(!found)
      System.out.println("element not found in the array");
    }
}        
