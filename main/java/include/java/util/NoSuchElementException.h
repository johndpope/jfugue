//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/NoSuchElementException.java
//

#ifndef _JavaUtilNoSuchElementException_H_
#define _JavaUtilNoSuchElementException_H_

#import "JreEmulation.h"
#include "java/lang/RuntimeException.h"

#define JavaUtilNoSuchElementException_serialVersionUID 6769829250639411880LL

@interface JavaUtilNoSuchElementException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaUtilNoSuchElementException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilNoSuchElementException, serialVersionUID, jlong)

#endif // _JavaUtilNoSuchElementException_H_
