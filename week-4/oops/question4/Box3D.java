public class Box3D extends Box {

    private double height;

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double volume() {
        return length * breadth * height;
    }

    public void display() {
        System.out.println("Length  : " + length);
        System.out.println("Breadth : " + breadth);
        System.out.println("Height  : " + height);
        System.out.println("Area    : " + area());
        System.out.println("Volume  : " + volume());
    }

    public static void main(String[] args) {

        Box3D box = new Box3D(5, 4, 3);

        box.display();
    }
}