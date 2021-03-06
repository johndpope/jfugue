//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/TextWatcher.java
//

#ifndef _AndroidTextTextWatcher_H_
#define _AndroidTextTextWatcher_H_

@protocol AndroidTextEditable;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "android/text/NoCopySpan.h"

@protocol AndroidTextTextWatcher < AndroidTextNoCopySpan, NSObject, JavaObject >
- (void)beforeTextChangedWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                          withInt:(jint)start
                                          withInt:(jint)count
                                          withInt:(jint)after;

- (void)onTextChangedWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                      withInt:(jint)start
                                      withInt:(jint)before
                                      withInt:(jint)count;

- (void)afterTextChangedWithAndroidTextEditable:(id<AndroidTextEditable>)s;

@end

__attribute__((always_inline)) inline void AndroidTextTextWatcher_init() {}

#endif // _AndroidTextTextWatcher_H_
