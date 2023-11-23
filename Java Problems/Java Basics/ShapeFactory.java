class Shape {
    // for square overloaded method
    void area(double h) {
        System.out.println("Area method for square");
    }
    // for rectangle overloaded method
    void area(double h, double w){
        System.out.println("Area method for rectangle -> Overloaded method()");
    }
}
class OverrideShape extends Shape {
    // We have overriden the area for square explicitly
    @Override
    void area(double h) {
        System.out.println("Overriden Area method() in OverrideShape class for square");
    }
}
class ShapeFactory extends Shape {
    public static void main(String[] args) {
        Shape s = new OverrideShape();
        // this should give me the overridden method
        s.area(5);
        // this should give me the overloaded class
        s.area(4, 5);
    }
}