package com.bfcy.ndk;

public class TestDemo {
    // Used to load the 'demo-lib' library on application startup.
    static {
        System.loadLibrary("demo-lib");
    }

    /**
     * A native method that is implemented by the 'demo-lib' native library,
     * which is packaged with this application.
     */
    public native String getName();

    public native int getAge();
}
