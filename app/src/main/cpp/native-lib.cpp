#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_no5_lane8_liangzhou_homework2_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "now is 1:35";
    return env->NewStringUTF(hello.c_str());
}
