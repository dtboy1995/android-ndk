package com.air.ndkstartup;

import android.util.Log;

public class TestJNI {

    private static final String TAG = "TestJNI";

    public void gpio(int value) {
        Log.e(TAG, value + "");
    }

    public native void init();
}
