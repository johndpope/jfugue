//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TooManyListenersException.java
//

#ifndef _JavaUtilTooManyListenersException_H_
#define _JavaUtilTooManyListenersException_H_

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaUtilTooManyListenersException_serialVersionUID 5074640544770687831LL

@interface JavaUtilTooManyListenersException : JavaLangException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaUtilTooManyListenersException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilTooManyListenersException, serialVersionUID, jlong)

#endif // _JavaUtilTooManyListenersException_H_
