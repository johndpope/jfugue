//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchFieldException.java
//

#ifndef _JavaLangNoSuchFieldException_H_
#define _JavaLangNoSuchFieldException_H_

#import "JreEmulation.h"
#include "java/lang/ReflectiveOperationException.h"

#define JavaLangNoSuchFieldException_serialVersionUID -6143714805279938260LL

@interface JavaLangNoSuchFieldException : JavaLangReflectiveOperationException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaLangNoSuchFieldException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangNoSuchFieldException, serialVersionUID, jlong)

#endif // _JavaLangNoSuchFieldException_H_
