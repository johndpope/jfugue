//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/InvalidMarkException.java
//

#ifndef _JavaNioInvalidMarkException_H_
#define _JavaNioInvalidMarkException_H_

#import "JreEmulation.h"
#include "java/lang/IllegalStateException.h"

#define JavaNioInvalidMarkException_serialVersionUID 1698329710438510774LL

@interface JavaNioInvalidMarkException : JavaLangIllegalStateException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaNioInvalidMarkException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaNioInvalidMarkException, serialVersionUID, jlong)

#endif // _JavaNioInvalidMarkException_H_