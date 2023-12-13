#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_bfcy_ndk_TestNdk_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_bfcy_ndk_TestNdk_getString(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++ TestNdk so";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_bfcy_ndk_TestNdk_getName(JNIEnv *env, jobject thiz) {
    // TODO: implement getName()
    std::string hello = "Xiao Hong TestNdk so";
    return env->NewStringUTF(hello.c_str());
}