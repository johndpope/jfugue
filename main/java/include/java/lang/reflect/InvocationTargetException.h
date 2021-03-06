//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/InvocationTargetException.java
//

#ifndef _JavaLangReflectInvocationTargetException_H_
#define _JavaLangReflectInvocationTargetException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/ReflectiveOperationException.h"

#define JavaLangReflectInvocationTargetException_serialVersionUID 4085088731926701167LL

@interface JavaLangReflectInvocationTargetException : JavaLangReflectiveOperationException {
}

- (instancetype)init;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception
                             withNSString:(NSString *)detailMessage;

- (JavaLangThrowable *)getTargetException;

- (JavaLangThrowable *)getCause;

@end

__attribute__((always_inline)) inline void JavaLangReflectInvocationTargetException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectInvocationTargetException, serialVersionUID, jlong)

#endif // _JavaLangReflectInvocationTargetException_H_
