//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/io/LittleEndianDataOutputStream.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoLittleEndianDataOutputStream_RESTRICT
#define ComGoogleCommonIoLittleEndianDataOutputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLittleEndianDataOutputStream_RESTRICT
#if !defined (_ComGoogleCommonIoLittleEndianDataOutputStream_) && (ComGoogleCommonIoLittleEndianDataOutputStream_INCLUDE_ALL || ComGoogleCommonIoLittleEndianDataOutputStream_INCLUDE)
#define _ComGoogleCommonIoLittleEndianDataOutputStream_

@class IOSByteArray;
@class JavaIoOutputStream;

#define JavaIoFilterOutputStream_RESTRICT 1
#define JavaIoFilterOutputStream_INCLUDE 1
#include "java/io/FilterOutputStream.h"

#define JavaIoDataOutput_RESTRICT 1
#define JavaIoDataOutput_INCLUDE 1
#include "java/io/DataOutput.h"


@interface ComGoogleCommonIoLittleEndianDataOutputStream : JavaIoFilterOutputStream < JavaIoDataOutput > {
}

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeBooleanWithBoolean:(jboolean)v;

- (void)writeByteWithInt:(jint)v;

- (void)writeBytesWithNSString:(NSString *)s;

- (void)writeCharWithInt:(jint)v;

- (void)writeCharsWithNSString:(NSString *)s;

- (void)writeDoubleWithDouble:(jdouble)v;

- (void)writeFloatWithFloat:(jfloat)v;

- (void)writeIntWithInt:(jint)v;

- (void)writeLongWithLong:(jlong)v;

- (void)writeShortWithInt:(jint)v;

- (void)writeUTFWithNSString:(NSString *)str;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoLittleEndianDataOutputStream_init() {}
#endif
