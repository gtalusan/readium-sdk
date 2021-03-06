//
//  package.h
//  ePub3
//
//  Created by Pedro Reis Colaco (txtr) on 2013-07-02.
//  Copyright (c) 2012-2013 The Readium Foundation and contributors.
//
//  The Readium SDK is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//


#include <jni.h>


#ifndef _PACKAGE_JNI_H_
#define _PACKAGE_JNI_H_


#ifdef __cplusplus
extern "C" {
#endif


/*
 * Exported functions
 **************************************************/

/**
 * Initialize the cached java elements for Container class
 */
int onLoad_cacheJavaElements_package(JNIEnv *env);

/**
 * Calls the java createPackage method of Package class
 */
jobject javaPackage_createPackage(JNIEnv *env, jlong nativePtr);


/*
 * JNI functions
 **************************************************/

/*
 * Package: org.readium.sdk.android
 * Class: Package
 */

/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetTitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetTitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetSubtitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetSubtitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetShortTitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetShortTitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetCollectionTitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetCollectionTitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetEditionTitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetEditionTitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetExpandedTitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetExpandedTitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetFullTitle
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetFullTitle(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetUniqueID
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetUniqueID(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetURLSafeUniqueID
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetURLSafeUniqueID(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetPackageID
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetPackageID(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetType
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetType(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetVersion
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetVersion(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetISBN
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetISBN(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetLanguage
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetLanguage(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetCopyrightOwner
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetCopyrightOwner(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetSource
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetSource(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetAuthors
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetAuthors(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetModificationDate
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_readium_sdk_android_Package_nativeGetModificationDate(JNIEnv* env, jobject thiz, jlong pckgPtr);
/*
 * Class:     org_readium_sdk_android_Package
 * Method:    nativeGetSubjects
 * Signature: (I)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL
Java_org_readium_sdk_android_Package_nativeGetSubjects(JNIEnv* env, jobject thiz, jlong pckgPtr);


#ifdef __cplusplus
}
#endif


#endif //ifndef _PACKAGE_JNI_H_
