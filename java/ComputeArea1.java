import java.util.Scanner;
public class ComputeArea1
{
public static void main(String[] args)
{
Scanner input=new Scanner(System.in);
System.out.println("enter radius");
double radius=input.nextDouble();
double area=radius*radius*3.14159;
System.out.println("the area for the circle="+area);
}
}
