//
// Created by Maxwin on 2018/3/19.
//

#ifndef HELLO_JNI_YUME_OBJECTSETGET_H
#define HELLO_JNI_YUME_OBJECTSETGET_H

#include "YumeJNI+Type.h"
#include "YumeJNI+Extension.h"
#include "jni.h"

jfieldID getFieldID(JNIEnv *env, jobject obj, const char* field, const char* sig);

// set object filed
#ifdef __cplusplus
#define SET_OBJECT_OBJECT_FIELD(env, obj, field, value, sig) \
    env->SetObjectField(obj, getFieldID(env, obj, field, sig), value)
#else
#define SET_OBJECT_OBJECT_FIELD(env, obj, field, value, sig) \
    (*env)->SetObjectField(env, obj, getFieldID(env, obj, field, sig), value)
#endif

#define SET_OBJECT_BOOLEAN_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Boolean)
#define SET_OBJECT_BYTE_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Byte)

#define SET_OBJECT_CHAR_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Char)
#define SET_OBJECT_SHORT_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Short)
#define SET_OBJECT_INT_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Int)

#define SET_OBJECT_LONG_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Long)
#define SET_OBJECT_FLOAT_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Float)
#define SET_OBJECT_DOUBLE_FIELD(env, obj, field, value) \
    SET_OBJECT_FIELD(env, obj, field, value, Double)

// get object filed
#ifdef __cplusplus
#define GET_OBJECT_OBJECT_FIELD(env, obj, field, sig) \
    env->GetObjectField(obj, GET_FIELD_ID(env, obj, field, sig))
#else
#define GET_OBJECT_OBJECT_FIELD(env, obj, field, sig) \
    (*env)->GetObjectField(env, obj, GET_FIELD_ID(env, obj, field, sig))
#endif

#define GET_OBJECT_BOOLEAN_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Boolean)
#define GET_OBJECT_BYTE_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Byte)

#define GET_OBJECT_CHAR_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Char)
#define GET_OBJECT_SHORT_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Short)
#define GET_OBJECT_INT_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Int)

#define GET_OBJECT_LONG_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Long)
#define GET_OBJECT_FLOAT_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Float)
#define GET_OBJECT_DOUBLE_FIELD(env, obj, field) \
    GET_OBJECT_FIELD(env, obj, field, Double)

#endif //HELLO_JNI_YUME_OBJECTSETGET_H
