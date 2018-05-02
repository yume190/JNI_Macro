//
// Created by Maxwin on 2018/3/19.
//

#ifndef HELLO_JNI_YUME_TYPE_H
#define HELLO_JNI_YUME_TYPE_H

//https://mccxj.github.io/blog/20151028_android-ndk-jni.html

#define TYPE_VOID "V"

#define TYPE_Object "L"
#define TYPE_Boolean "Z"
#define TYPE_Byte "B"

#define TYPE_Char "C"
#define TYPE_Short "S"
#define TYPE_Int "I"

#define TYPE_Long "J"
#define TYPE_Float "F"
#define TYPE_Double "D"

// void abc(Int, Int) -> "(II)V"
//[ type	type[]
// Int[] -> "[I"

//L fully-qualified-class ;	fully-qualified-class
//Ljava/lang/String;
//Lcom/test/A$B; 或内部类

#define TYPE(type) TYPE_ ## type

//#define TYPE_ARRAY(sig) \
//    [ ## sig
//#define TYPE_ARG(...) \
//    ( ## __VA_ARGS__ ## )

//#define xstr(s) str(s)
//#define str(s) #s
//#define foo 4
//str (foo)
//    ==> "foo"
//xstr (foo)
//    ==> xstr (4)
//    ==> str (4)
//    ==> "4"

#endif //HELLO_JNI_YUME_TYPE_H
