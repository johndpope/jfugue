//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ClassFormatError.java
//

#ifndef _JavaLangClassFormatError_H_
#define _JavaLangClassFormatError_H_

#import "JreEmulation.h"
#include "java/lang/LinkageError.h"

#define JavaLangClassFormatError_serialVersionUID -8420114879011949195LL

@interface JavaLangClassFormatError : JavaLangLinkageError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaLangClassFormatError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangClassFormatError, serialVersionUID, jlong)

#endif // _JavaLangClassFormatError_H_