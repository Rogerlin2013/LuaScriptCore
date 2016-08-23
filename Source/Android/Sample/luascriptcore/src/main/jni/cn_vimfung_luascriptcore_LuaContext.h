/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_vimfung_luascriptcore_LuaContext */

#ifndef _Included_cn_vimfung_luascriptcore_LuaContext
#define _Included_cn_vimfung_luascriptcore_LuaContext
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_vimfung_luascriptcore_LuaContext
 * Method:    createContext
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaContext_createContext
  (JNIEnv *, jobject, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaContext
 * Method:    releaseContext
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cn_vimfung_luascriptcore_LuaContext_releaseContext
  (JNIEnv *, jobject, jstring);

/*
 * Class:     cn_vimfung_luascriptcore_LuaContext
 * Method:    evalScript
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Lcn/vimfung/luascriptcore/LuaValue;
 */
JNIEXPORT jobject JNICALL Java_cn_vimfung_luascriptcore_LuaContext_evalScript
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif