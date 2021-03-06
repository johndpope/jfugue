//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectOutput.java
//

#ifndef _JavaIoObjectOutput_H_
#define _JavaIoObjectOutput_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/io/DataOutput.h"
#include "java/lang/AutoCloseable.h"

@protocol JavaIoObjectOutput < JavaIoDataOutput, JavaLangAutoCloseable, NSObject, JavaObject >
- (void)close;

- (void)flush;

- (void)writeWithByteArray:(IOSByteArray *)buffer;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

- (void)writeWithInt:(jint)value;

- (void)writeObjectWithId:(id)obj;

@end

__attribute__((always_inline)) inline void JavaIoObjectOutput_init() {}

#endif // _JavaIoObjectOutput_H_
