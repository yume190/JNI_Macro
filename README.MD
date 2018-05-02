## [參考來源](https://mccxj.github.io/blog/20151028_android-ndk-jni.html)

### Signature

#### 基本型態

|Type Signature|Java Type|
|:-------------|:--------|
|Z|boolean|
|B|byte	|
|C|char|
|S|short|
|I|int|
|J|long|
|F|float|
|D|double|
|V|void|

#### 特殊型態

|Type Signature|Java Type|範例C|範例Java|
|:-------------|:--------|:--|:-------|
|L fully-qualified-class ;|fully-qualified-class|Ljava/lang/String;<br/> 内部类Lcom/test/A$B|String <br/> A.B|
|[ type|type[]|[I <br/> [Ljava/lang/String;|int[] <br/> String[]|
|( arg-types ) ret-type|method type|()V <br/> (Ljava/lang/String;I)Z|void xxx() <br/> boolean yyy(String, int)|


## Local Reference

`object` 相關類型會有產生 local ref，目前遇到的上限為 `512`，超過便會發生 `JNI ERROR`。

> 需要在適當時機處理掉 `env->DeleteLocalRef(ref)`

### Reference Type(會產生 local ref)

``` c
typedef _jobject*       jobject;
typedef _jclass*        jclass;
typedef _jstring*       jstring;
typedef _jarray*        jarray;
typedef _jobjectArray*  jobjectArray;
typedef _jbooleanArray* jbooleanArray;
typedef _jbyteArray*    jbyteArray;
typedef _jcharArray*    jcharArray;
typedef _jshortArray*   jshortArray;
typedef _jintArray*     jintArray;
typedef _jlongArray*    jlongArray;
typedef _jfloatArray*   jfloatArray;
typedef _jdoubleArray*  jdoubleArray;
typedef _jthrowable*    jthrowable;
typedef _jobject*       jweak;
```

### Value Type

``` c
struct _jfieldID;                       /* opaque structure */
typedef struct _jfieldID* jfieldID;     /* field IDs */

struct _jmethodID;                      /* opaque structure */
typedef struct _jmethodID* jmethodID;   /* method IDs */
```


## Global Reference

一樣要在適當時機釋放 ref，使用時機多為需要長期/多次使用，

``` c
newRef = env->NewGlobalRef(ref);
env->DeleteGlobalRef(newRef);
```

所以在使用上需要特别注意:

## 其他注意事項
 * 和反射一样，查找类、获取方法、获取属性都是有消耗的，在频繁调用的jni方法中，应该通过GlobalRef预先保留相关对象。
 * 对于stirng类，如果和原生c字符串进行转换操作的时候，需要注意释放内存。
 * 虽然C++本身也有异常处理，但是切记空指针异常不同于java，需要注意可能为NULL的代码。
 * jint等基本类型、jmethodID、jfieldID都不是jobject，不需要管理引用。