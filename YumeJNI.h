//
// Created by Maxwin on 2018/3/19.
//

#ifndef HELLO_JNI_YUME_H
#define HELLO_JNI_YUME_H

#define JNI_NAME(name) Java_ ## com_maxwin_dab_jni_Lib_ ## name

#ifdef __cplusplus
#define JNI(returnType, functionName, ...) \
    extern "C" { \
        returnType JNI_NAME(functionName) (JNIEnv* env, jobject jobj, ##__VA_ARGS__); \
    } \
    returnType JNI_NAME(functionName) (JNIEnv* env, jobject jobj, ##__VA_ARGS__)
#else
#define JNI(returnType, functionName, ...) \
    returnType JNI_NAME(functionName) (JNIEnv* env, jobject jobj, ##__VA_ARGS__)
#endif

#endif //HELLO_JNI_YUME_H
