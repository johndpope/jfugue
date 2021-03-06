//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInput.java
//

#ifndef _JavaIoObjectInput_H_
#define _JavaIoObjectInput_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/io/DataInput.h"
#include "java/lang/AutoCloseable.h"

@protocol JavaIoObjectInput < JavaIoDataInput, JavaLangAutoCloseable, NSObject, JavaObject >
- (jint)available;

- (void)close;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

- (id)readObject;

- (jlong)skipWithLong:(jlong)byteCount;

@end

__attribute__((always_inline)) inline void JavaIoObjectInput_init() {}

#endif // _JavaIoObjectInput_H_
