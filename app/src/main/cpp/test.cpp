#include <jni.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_air_ndkstartup_TestJNI_init(JNIEnv *env, jobject instance) {
    jclass clazz = env->FindClass("com/air/ndkstartup/TestJNI");
    jmethodID id = env->GetMethodID(clazz, "gpio", "(I)V");
    env->CallVoidMethod(instance, id, 100);
    return;
}