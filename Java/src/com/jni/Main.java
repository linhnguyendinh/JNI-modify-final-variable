package com.jni;

public class Main {
    public static final StringBuilder str = null;
    private static native void setString0(StringBuilder str);

    static {
        System.loadLibrary("setFinalVariable");
    }
    public static void main(String[] args) {
        Main.setString0(new StringBuilder("Hello, World!"));
        System.out.println(str.toString());
    }
}
