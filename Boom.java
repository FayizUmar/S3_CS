interface Operations
{
    void area();
    void volume();
    double PI = 3.14;
    
}
class Cylinder implements Operations
{
    double height,radius;
    Cylinder(double h,double r)
    {
        height = h;
        radius = r;
    }
    public void area()
    {
        System.out.println("area of cylinder is = "+(2*PI*radius*height));

    }
    public void volume()
    {
        
        System.out.println("volume of cylinder is = "+(PI*radius*radius*height));
    }
}
class Boom
{
    public static void main(String args[])
    {
        Cylinder obj1 = new Cylinder(10,20);
        obj1.area();
        obj1.volume();
    }
}