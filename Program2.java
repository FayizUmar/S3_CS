interface Area
{
    void area();

}

interface Volume
{
    void volume();

}



class Shape
{
    String name;
    Shape(String name)
    {
        this.name = name;
    }
    void getName()
    {
        System.out.println("Shape Name:"+name);
    }

}




class Circle extends Shape implements Area
{
    double radius;
    
    Circle(double r,String n)
    {
        super(n);
        radius = r;
    }

    public void area()
    {
        System.out.println("Area of circle:" + (3.14*radius*radius));
    }

}

class Square extends Shape implements Area
{

    double side;
    Square(double s,String n)
    {
        super(n);
        side =s;
    }

    public void area()
    {
        System.out.println("Area of Square:" + (side*side));
    }

}


class Cylinder extends Circle implements Volume
{

    double height;
    Cylinder(double h,double r,String n)
    {
        super(r,n);
        height =h;
    }

    public void area()
    {
        System.out.println("Area of Cylinder:" + ((2*3.14*radius*height)+(2*3.14*radius*radius)));
    }
    public void volume()
    {
        System.out.println("Volume of Cylinder:" + (3.14*radius*radius*height));
    }

}

class Sphere extends Circle implements Volume
{

    Sphere(double r,String n)
    {
        super(r,n);
    }
    public void area()
    {
        System.out.println("Area of Sphere:" + (4*3.14*radius*radius));
    }
    public void volume()
    {
        System.out.println("Volume of Sphere:" + ((4/3)*3.14*radius*radius*radius));
    }

}

class Cube extends Square implements Volume
{
    Cube(double s,String n)
    {
        super(s,n);
    }

    public void area()
    {
        System.out.println("Area of Cube:" + (6*side*side));
    }

    public void volume()
    {
        System.out.println("Volume of Cube:" + (side*side*side));
    }
}


class Glome extends Sphere 
{
    Glome(double r,String n)
    {
        super(r,n);

    }
 
    public void volume()
    {
        System.out.println("Volume of Glome:" + (0.5*3.14*3.14*radius*radius*radius*radius));
    }


}

class Program2
{
    public static void main(String args[])
    {
        Circle obj1 = new Circle(10,"Circle");
        Square obj2 = new Square(100,"Square");
        Cylinder obj3 = new Cylinder(10, 10,"Cylinder");
        Sphere obj4 = new Sphere(10, "Sphere");
        Cube obj5 = new Cube(10, "Cube");
        Glome obj6 = new Glome(10, "Glome");

        obj1.getName();
        obj1.area();
        
        obj2.getName();                                    
        obj2.area();

        obj3.getName();
        obj3.area();
        obj3.volume();

        obj4.getName();
        obj4.area();
        obj4.volume();

        obj5.getName();
        obj5.area();
        obj5.volume();

        obj6.getName();
        obj6.volume();





    }
}  