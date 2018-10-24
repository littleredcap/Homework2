package no5.lane8.liangzhou.homework2;

public class MyTest {

    static {
        System.loadLibrary("MyTest");
    }
    public int number;
    public void assignment(int number2){
        number=number2;
    }

    public native void getString();

    public static void main(String args[]){
        MyTest test=new MyTest();
        test.getString();
    }
}
