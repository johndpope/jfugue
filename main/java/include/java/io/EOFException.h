//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/EOFException.java
//

#ifndef _JavaIoEOFException_H_
#define _JavaIoEOFException_H_

#import "JreEmulation.h"
#include "java/io/IOException.h"

#define JavaIoEOFException_serialVersionUID 6433858223774886977LL

@interface JavaIoEOFException : JavaIoIOException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaIoEOFException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaIoEOFException, serialVersionUID, jlong)

#endif // _JavaIoEOFException_H_
