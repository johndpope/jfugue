//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Exception.java
//

#ifndef _JavaLangException_H_
#define _JavaLangException_H_

#import "JreEmulation.h"
#include "java/lang/Throwable.h"

#define JavaLangException_serialVersionUID -3387516993124229948LL

@interface JavaLangException : JavaLangThrowable {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

__attribute__((always_inline)) inline void JavaLangException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangException, serialVersionUID, jlong)

#endif // _JavaLangException_H_
