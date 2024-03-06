class Employee
{
int eno;
String ename;
Employee()
{
eno=100;
ename="dev";
}
void show()
{
System.out.println("\n employee no="+eno+ "\n employee name="+ename);
}
}
class Constructor1
{
public static void main(String[] args)
{
Employee obj1=new Employee();
obj1.show();
}
}

