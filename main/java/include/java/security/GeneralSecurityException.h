//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/GeneralSecurityException.java
//

#ifndef _JavaSecurityGeneralSecurityException_H_
#define _JavaSecurityGeneralSecurityException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaSecurityGeneralSecurityException_serialVersionUID 894798122053539237LL

@interface JavaSecurityGeneralSecurityException : JavaLangException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void JavaSecurityGeneralSecurityException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityGeneralSecurityException, serialVersionUID, jlong)

#endif // _JavaSecurityGeneralSecurityException_H_
