#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_GalileoTify_NOTICE_getNotice(JNIEnv *env, jclass clazz) {

    return env->NewStringUTF(
        "GalileoTify Runtime\n"
        "\n"
        "Copyright (c) 2025 GalileoTify Team\n"
        "\n"
        "Original Repository:\n"
        "https://github.com/Akbar675-prog/galileotify");
}

JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM* vm, void*) {
    return JNI_VERSION_1_6;
}
