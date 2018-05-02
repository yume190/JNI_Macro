//
// Created by Maxwin on 2018/3/19.
//

#ifndef HELLO_JNI_YUME_OBJECTSTATICSETGET_H
#define HELLO_JNI_YUME_OBJECTSTATICSETGET_H

#include "YumeJNI+Type.h"
#include "YumeJNI+Extension.h"

// set object filed
#define SET_OBJECT_STATIC_OBJECT_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Object)
//env->SetObjectField(obj, GET_FIELD_ID(env, obj, field, sig), value)

#define SET_OBJECT_STATIC_BOOLEAN_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Boolean)
#define SET_OBJECT_STATIC_BYTE_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Byte)

#define SET_OBJECT_STATIC_CHAR_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Char)
#define SET_OBJECT_STATIC_SHORT_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Short)
#define SET_OBJECT_STATIC_INT_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Int)

#define SET_OBJECT_STATIC_LONG_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Long)
#define SET_OBJECT_STATIC_FLOAT_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Float)
#define SET_OBJECT_STATIC_DOUBLE_FIELD(env, clz, field, value) \
    SET_OBJECT_STATIC_FIELD(env, clz, field, value, Double)

// get object filed
#define GET_OBJECT_STATIC_OBJECT_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Object)
//env->GetObjectField(obj, GET_FIELD_ID(env, obj, field, sig))

#define GET_OBJECT_STATIC_BOOLEAN_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Boolean)
#define GET_OBJECT_STATIC_BYTE_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Byte)

#define GET_OBJECT_STATIC_CHAR_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Char)
#define GET_OBJECT_STATIC_SHORT_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Short)
#define GET_OBJECT_STATIC_INT_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Int)

#define GET_OBJECT_STATIC_LONG_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Long)
#define GET_OBJECT_STATIC_FLOAT_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Float)
#define GET_OBJECT_STATIC_DOUBLE_FIELD(env, clz, field) \
    GET_OBJECT_STATIC_FIELD(env, clz, field, Double)

#endif //HELLO_JNI_YUME_OBJECTSTATICSETGET_H
