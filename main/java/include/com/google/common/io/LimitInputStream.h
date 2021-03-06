//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/io/LimitInputStream.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoLimitInputStream_RESTRICT
#define ComGoogleCommonIoLimitInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLimitInputStream_RESTRICT
#if !defined (_ComGoogleCommonIoLimitInputStream_) && (ComGoogleCommonIoLimitInputStream_INCLUDE_ALL || ComGoogleCommonIoLimitInputStream_INCLUDE)
#define _ComGoogleCommonIoLimitInputStream_

@class IOSByteArray;
@class JavaIoInputStream;

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "java/io/FilterInputStream.h"


@interface ComGoogleCommonIoLimitInputStream : JavaIoFilterInputStream {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                 withLong:(jlong)limit;

- (jint)available;

- (void)markWithInt:(jint)readlimit;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoLimitInputStream_init() {}
#endif
