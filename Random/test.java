interface A {
    int n = 2;
}
class B implements A {
    int n = 1;
    void show() {
        n = 5;
        System.out.println(n);
    }
}
public class test {
    public static void main(String args[]) {
        B b = new B();
        b.show();
    }
}