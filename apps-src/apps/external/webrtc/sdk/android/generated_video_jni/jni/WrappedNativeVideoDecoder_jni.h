// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/webrtc/WrappedNativeVideoDecoder

#ifndef org_webrtc_WrappedNativeVideoDecoder_JNI
#define org_webrtc_WrappedNativeVideoDecoder_JNI

#include "sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_WrappedNativeVideoDecoder[];
const char kClassPath_org_webrtc_WrappedNativeVideoDecoder[] =
    "org/webrtc/WrappedNativeVideoDecoder";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_webrtc_WrappedNativeVideoDecoder_clazz = 0;
#ifndef org_webrtc_WrappedNativeVideoDecoder_clazz_defined
#define org_webrtc_WrappedNativeVideoDecoder_clazz_defined
inline jclass org_webrtc_WrappedNativeVideoDecoder_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_WrappedNativeVideoDecoder,
      &g_org_webrtc_WrappedNativeVideoDecoder_clazz);
}
#endif

// Step 2: method stubs.

static base::subtle::AtomicWord
    g_org_webrtc_WrappedNativeVideoDecoder_createNativeDecoder = 0;
static jlong Java_WrappedNativeVideoDecoder_createNativeDecoder(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_WrappedNativeVideoDecoder_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_webrtc_WrappedNativeVideoDecoder_clazz(env),
      "createNativeDecoder",
"("
")"
"J",
      &g_org_webrtc_WrappedNativeVideoDecoder_createNativeDecoder);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_webrtc_WrappedNativeVideoDecoder_isInstanceOf = 0;
static jboolean Java_WrappedNativeVideoDecoder_isInstanceOf(JNIEnv* env, const
    base::android::JavaRef<jobject>& decoder) {
  CHECK_CLAZZ(env, org_webrtc_WrappedNativeVideoDecoder_clazz(env),
      org_webrtc_WrappedNativeVideoDecoder_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_webrtc_WrappedNativeVideoDecoder_clazz(env),
      "isInstanceOf",
"("
"Lorg/webrtc/VideoDecoder;"
")"
"Z",
      &g_org_webrtc_WrappedNativeVideoDecoder_isInstanceOf);

  jboolean ret =
env->CallStaticBooleanMethod(org_webrtc_WrappedNativeVideoDecoder_clazz(env),
          method_id, decoder.obj());
  jni_generator::CheckException(env);
  return ret;
}

#endif  // org_webrtc_WrappedNativeVideoDecoder_JNI
