/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_trino_jni_TrinoBridge */

#ifndef _Included_io_trino_jni_TrinoBridge
#define _Included_io_trino_jni_TrinoBridge
#ifdef __cplusplus
extern "C" {
#endif

int JNI_VERSION = JNI_VERSION_10;
JavaVM* GLOBAL_JAVA_VM = nullptr;

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved);

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_getBuffer(JNIEnv*, jobject, jstring,
                                                               jlongArray, jintArray);

JNIEXPORT jlong JNICALL Java_io_trino_jni_TrinoBridge_close(JNIEnv* env, jobject obj,
                                                            jlong handlePtr);

JNIEXPORT jlong JNICALL Java_io_trino_jni_TrinoBridge_init(JNIEnv* env, jobject obj,
                                                           jstring configJson,
                                                           jobject manager);

JNIEXPORT jstring JNICALL Java_io_trino_jni_TrinoBridge_getTaskStatus(JNIEnv* env,
                                                                      jobject obj,
                                                                      jlong handlePtr,
                                                                      jstring jTaskId);

JNIEXPORT jstring JNICALL Java_io_trino_jni_TrinoBridge_getTaskInfo(JNIEnv* env,
                                                                    jobject obj,
                                                                    jlong handlePtr,
                                                                    jstring jTaskId);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_registerConnector(
    JNIEnv* env, jobject obj, jstring jCatalogProperties);

JNIEXPORT jlong JNICALL Java_io_trino_jni_TrinoBridge_createTask(JNIEnv* env, jobject obj,
                                                                 jlong handlePtr,
                                                                 jstring jTaskId,
                                                                 jstring jPlanFragment);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_failedTask(JNIEnv* env, jobject obj,
                                                                jlong handlePtr,
                                                                jstring jTaskId,
                                                                jstring failedReason);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_addSplits(JNIEnv* env, jobject obj,
                                                               jlong handlePtr,
                                                               jstring jTaskId,
                                                               jstring jSplitInfo);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_noMoreBuffers(
    JNIEnv* env, jobject obj, jlong handlePtr, jstring jTaskId, jint jNumPartitions);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_registerOutputPartitionListener(
    JNIEnv* env, jobject obj, jlong handlePtr, jstring jTaskId, jint jPartitionId,
    jlong jSequence, jlong maxBytes);

JNIEXPORT jint JNICALL Java_io_trino_jni_TrinoBridge_getBufferStep1(
    JNIEnv* env, jobject obj, jlong handlePtr, jstring jTaskId, jint jPartitionId);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_getBufferStep2(
    JNIEnv* env, jobject obj, jlong handlePtr, jstring jTaskId, jint jPartitionId,
    jint results_num, jintArray jLengthArray);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_getBufferStep3(
    JNIEnv* env, jobject obj, jlong handlePtr, jstring jTaskId, jint jPartitionId,
    jint results_num, jlongArray jAddressArray);

JNIEXPORT void JNICALL Java_io_trino_jni_TrinoBridge_removeTask(JNIEnv* env, jobject obj,
                                                                jlong handlePtr,
                                                                jstring jTaskId);
#ifdef __cplusplus
}
#endif
#endif
