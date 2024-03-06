import java.util.Scanner;
public class WordSearch
{
 public static void main(String args[])
 {
   Scanner sc=new Scanner(System.in);
   System.out.println("enter the no of word in the array");
   int size=sc.nextInt();
   String[] words=new String[size];
   System.out.println("enter the words");
   for(int i=0;i<size;i++)
       words[i]=sc.next();
   System.out.println("enter word to search");
   String searchWord=sc.next();
   boolean found=false;
   for(String word:words)
   {
     if(word.equals(searchWord))
     { 
        found=true;
        break;
     }
   }
   if(found)
      System.out.println("the words"+searchWord+"is found in the  array");
   else 
      System.out.println("the words"+searchWord+"is  not found ");   
   }
}         
       
