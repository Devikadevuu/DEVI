class Box
{
double width;
double height;
double depth;
}
class ClassDemo
{
public static void main(String[] args)
{
Box boxobj=new Box();
boxobj.width=10;
boxobj.height=20;
boxobj.depth=15;
double vol=boxobj.width*boxobj.height*boxobj.depth;
System.out.println("volume"+vol);
}
}

