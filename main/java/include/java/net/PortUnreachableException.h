//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PortUnreachableException.java
//

#ifndef _JavaNetPortUnreachableException_H_
#define _JavaNetPortUnreachableException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/net/SocketException.h"

#define JavaNetPortUnreachableException_serialVersionUID 8462541992376507323LL

@interface JavaNetPortUnreachableException : JavaNetSocketException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void JavaNetPortUnreachableException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaNetPortUnreachableException, serialVersionUID, jlong)

#endif // _JavaNetPortUnreachableException_H_
