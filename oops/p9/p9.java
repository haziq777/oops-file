abstract class Shape
{
    abstract void printArea();
}

class Triangle extends Shape
{   
    int base;
    int height;

    public Triangle(int b, int h)
    {
        base = b;
        height = h;
    }
    void printArea()
    {   
        double area = (base*height)/2;
        System.out.print("The area of triangle is ");
        System.out.print(area);
        System.out.println();

    }
}

class Rectangle extends Shape
{
    int base;
    int height;

    public Rectangle(int b, int h)
    {
        base = b;
        height = h;
    }

    void printArea()
    {
        double area = (base*height);
        System.out.print("The area of rectangle is ");
        System.out.print(area);
        
        System.out.println();

    }
}

class Circle extends Shape
{
    int radius;

    public Circle(int r)
    {
        radius = r;
    }

    void printArea()
    {
        double area = Math.PI * radius;
        System.out.print("The area of circle is ");
        System.out.print( String.format("%.4f", area));
        System.out.println();

    }
}
class p9
{
    public static void main(String[] args) {
        Triangle tr = new Triangle(10, 12);
        Rectangle rc = new Rectangle(18, 16);
        Circle cr = new Circle(10);

        tr.printArea();
        rc.printArea();
        cr.printArea();
    }
}