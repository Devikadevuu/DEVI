class Box
{
double width;
double height;
double depth;
}
class BoxDemo1
{
public static void main(String[] args)
{
Box mybox1=new Box();
Box mybox2=new Box();
mybox1.width=10;
mybox1.height=20;
mybox1.depth=15;

mybox2.width=10;
mybox2.height=20;
mybox2.depth=15;
double vol1=mybox1.width*mybox1.height*mybox1.depth;
double vol2=mybox2.width*mybox2.height*mybox2.depth;
System.out.println("volume of 1"+vol1);
System.out.println("volume of 2"+vol2);
}
}

