//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Externalizable.java
//

#ifndef _JavaIoExternalizable_H_
#define _JavaIoExternalizable_H_

@protocol JavaIoObjectInput;
@protocol JavaIoObjectOutput;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

@protocol JavaIoExternalizable < JavaIoSerializable, NSObject, JavaObject >
- (void)readExternalWithJavaIoObjectInput:(id<JavaIoObjectInput>)input;

- (void)writeExternalWithJavaIoObjectOutput:(id<JavaIoObjectOutput>)output;

@end

__attribute__((always_inline)) inline void JavaIoExternalizable_init() {}

#endif // _JavaIoExternalizable_H_
