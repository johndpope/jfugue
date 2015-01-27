//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/RuntimeException.java
//

#ifndef _JavaLangRuntimeException_H_
#define _JavaLangRuntimeException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaLangRuntimeException_serialVersionUID -7034897190745766939LL

@interface JavaLangRuntimeException : JavaLangException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

__attribute__((always_inline)) inline void JavaLangRuntimeException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangRuntimeException, serialVersionUID, jlong)

#endif // _JavaLangRuntimeException_H_
