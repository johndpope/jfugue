//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/UnsupportedOperationException.java
//

#ifndef _JavaLangUnsupportedOperationException_H_
#define _JavaLangUnsupportedOperationException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/RuntimeException.h"

#define JavaLangUnsupportedOperationException_serialVersionUID -1242599979055084673LL

@interface JavaLangUnsupportedOperationException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void JavaLangUnsupportedOperationException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangUnsupportedOperationException, serialVersionUID, jlong)

#endif // _JavaLangUnsupportedOperationException_H_
