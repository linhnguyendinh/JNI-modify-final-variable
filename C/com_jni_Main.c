/*
 * com_jni_Main.c
 *
 *  Created on: Jun 28, 2018
 *      Author: nguyendinhlinh
 */

#include <jni.h>
#include "../JNI/bin/com_jni_Main.h"
JNIEXPORT void JNICALL Java_com_jni_Main_setString0(JNIEnv *env, jclass cla, jobject obj)
{
    jfieldID fid = (*env)->GetStaticFieldID(env, cla, "str", "Ljava/lang/StringBuilder;");
    if (fid == 0) return;
    (*env)->SetStaticObjectField(env,cla,fid,obj);
}
