import java.util.Scanner;
public class StringFunctions
{
 public static void main(String args[])
 {
   System.out.println("Enter the string");
   Scanner sc=new Scanner(System.in);
   String str1=sc.nextLine();
   System.out.println("length of string="+str1.length());
   System.out.println("character at first position="+str1.charAt(1));
   System.out.println("string ends with e:"+str1.endsWith("e"));
   System.out.println("LOWERCASE:"+str1.toLowerCase());
   System.out.println("UPPERCASE:"+str1.toUpperCase());
   System.out.println("character at 2nd and 4th position is:"+str1.charAt(1)+","+str1.charAt(3));
   System.out.println("The sub string using the start index only is"+str1.substring(5));
   System.out.println("The sub string using the start index only is"+str1.substring(0,4));
   }
}
