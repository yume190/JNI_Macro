//
// Created by Maxwin on 2018/5/2.
//

#ifndef HELLO_JNI_YUMEJNI_EXTENSION_H
#define HELLO_JNI_YUMEJNI_EXTENSION_H

#ifdef __cplusplus

//NewGlobalRef/DeleteGlobalRef
//对于stirng类，如果和原生c字符串进行转换操作的时候，需要注意释放内存。
//注意: jint等基本类型、jmethodID、jfieldID都不是jobject，不需要管理引用。

#define GET_OBJECT_CLASS(env, obj) \
    env->GetObjectClass(obj)
#define GET_FIELD_ID(env, clz, field, sig) \
    env->GetFieldID(clz, field, sig)
#define DELETE_LOCAL_REF(env, obj) \
    env->DeleteLocalRef(obj)


#define SET_OBJECT_FIELD(env, obj, field, value, type) \
    env->Set ## type ## Field(obj, getFieldID(env, obj, field, TYPE(type)), value)
#define GET_OBJECT_FIELD(env, obj, field, type) \
    env->Get ## type ## Field(obj, getFieldID(env, obj, field, TYPE(type)))


#define GET_STATIC_FIELD_ID(env, clz, field, typeSign) \
    env->GetStaticFieldID(clz, field, typeSign)
#define SET_OBJECT_STATIC_FIELD(env, clz, field, value, type) \
    env->SetStatic ## type ## Field(clz, GET_STATIC_FIELD_ID(env, clz, field, TYPE(type)), value)
#define GET_OBJECT_STATIC_FIELD(env, clz, field, type) \
    env->GetStatic ## type ## Field(clz, GET_STATIC_FIELD_ID(env, clz, field, TYPE(type)))

#else

#define GET_OBJECT_CLASS(env, obj) \
    (*env)->GetObjectClass(env, obj)
#define GET_FIELD_ID(env, clz, field, sig) \
    (*env)->GetFieldID(env, clz, field, sig)
#define DELETE_LOCAL_REF(env, obj) \
    (*env)->DeleteLocalRef(env, obj)


#define SET_OBJECT_FIELD(env, obj, field, value, type) \
    (*env)->Set ## type ## Field(obj, getFieldID(env, env, obj, field, TYPE(type)), value)
#define GET_OBJECT_FIELD(env, obj, field, type) \
    (*env)->Get ## type ## Field(obj, getFieldID(env, env, obj, field, TYPE(type)))


#define GET_STATIC_FIELD_ID(env, clz, field, typeSign) \
    (*env)->GetStaticFieldID(env, clz, field, typeSign)
#define SET_OBJECT_STATIC_FIELD(env, clz, field, value, type) \
    (*env)->SetStatic ## type ## Field(env, clz, GET_STATIC_FIELD_ID(env, clz, field, TYPE(type)), value)
#define GET_OBJECT_STATIC_FIELD(env, clz, field, type) \
    (*env)->GetStatic ## type ## Field(env, clz, GET_STATIC_FIELD_ID(env, clz, field, TYPE(type)))
#endif

#endif //HELLO_JNI_YUMEJNI_EXTENSION_H
