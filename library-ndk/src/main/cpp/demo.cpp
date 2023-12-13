//
// Created by Administrator on 2020/9/2.
//
#include <jni.h>
#include <string>

// *env 表示demo.cpp环境；thiz 表示native方法所在的环境TestDemo
extern "C"
JNIEXPORT jstring JNICALL
Java_com_bfcy_ndk_TestDemo_getName(JNIEnv *env, jobject thiz) {
    // TODO: implement getName()
    std::string hello = "Xiao Hong";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_bfcy_ndk_TestDemo_getAge(JNIEnv *env, jobject thiz) {
    // TODO: implement getAge()
    int age = 20;
    return age;
}