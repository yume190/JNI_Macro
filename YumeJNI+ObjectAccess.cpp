//
// Created by Maxwin on 2018/5/2.
//

#include "YumeJNI+ObjectAccess.h"

jfieldID getFieldID(JNIEnv *env, jobject obj, const char* field, const char* sig) {
    jclass clz = GET_OBJECT_CLASS(env, obj);
    jfieldID jid = GET_FIELD_ID(env, clz, field, sig);
    DELETE_LOCAL_REF(env, clz);
    return jid;
}