//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/HttpRetryException.java
//

#ifndef _JavaNetHttpRetryException_H_
#define _JavaNetHttpRetryException_H_

#import "JreEmulation.h"
#include "java/io/IOException.h"

#define JavaNetHttpRetryException_serialVersionUID -9186022286469111381LL

@interface JavaNetHttpRetryException : JavaIoIOException {
}

- (instancetype)initWithNSString:(NSString *)detail
                         withInt:(jint)code;

- (instancetype)initWithNSString:(NSString *)detail
                         withInt:(jint)code
                    withNSString:(NSString *)location;

- (NSString *)getLocation;

- (NSString *)getReason;

- (jint)responseCode;

@end

__attribute__((always_inline)) inline void JavaNetHttpRetryException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaNetHttpRetryException, serialVersionUID, jlong)

#endif // _JavaNetHttpRetryException_H_
