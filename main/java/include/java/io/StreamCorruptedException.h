//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StreamCorruptedException.java
//

#ifndef _JavaIoStreamCorruptedException_H_
#define _JavaIoStreamCorruptedException_H_

#import "JreEmulation.h"
#include "java/io/ObjectStreamException.h"

#define JavaIoStreamCorruptedException_serialVersionUID 8983558202217591746LL

@interface JavaIoStreamCorruptedException : JavaIoObjectStreamException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaIoStreamCorruptedException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamCorruptedException, serialVersionUID, jlong)

#endif // _JavaIoStreamCorruptedException_H_
