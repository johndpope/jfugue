//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/CoderMalfunctionError.java
//

#ifndef _JavaNioCharsetCoderMalfunctionError_H_
#define _JavaNioCharsetCoderMalfunctionError_H_

@class JavaLangException;

#import "JreEmulation.h"
#include "java/lang/Error.h"

#define JavaNioCharsetCoderMalfunctionError_serialVersionUID -1151412348057794301LL

@interface JavaNioCharsetCoderMalfunctionError : JavaLangError {
}

- (instancetype)initWithJavaLangException:(JavaLangException *)ex;

@end

__attribute__((always_inline)) inline void JavaNioCharsetCoderMalfunctionError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderMalfunctionError, serialVersionUID, jlong)

#endif // _JavaNioCharsetCoderMalfunctionError_H_
