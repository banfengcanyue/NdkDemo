package com.bfcy.ndk;

import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class NdkJavaMainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_ndk_java_main);
        initView();
    }

    private void initView() {
        TextView tvName = findViewById(R.id.tvName);
        TextView tvAge = findViewById(R.id.tvAge);
        TextView tvStr = findViewById(R.id.tvStr);
        String name = new TestDemo().getName();
        int age = new TestDemo().getAge();
        String str = new TestNdk().stringFromJNI();
        Log.i("TAG", "--->ndk--name: " + name);
        Log.i("TAG", "--->ndk--age: " + age);
        Log.i("TAG", "--->ndk--str: " + str);
        tvName.setText("name: " + name);
        tvAge.setText("age: " + age);
        tvStr.setText("str: " + str);
    }
}
