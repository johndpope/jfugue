//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/io/MultiReader.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoMultiReader_RESTRICT
#define ComGoogleCommonIoMultiReader_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoMultiReader_RESTRICT
#if !defined (_ComGoogleCommonIoMultiReader_) && (ComGoogleCommonIoMultiReader_INCLUDE_ALL || ComGoogleCommonIoMultiReader_INCLUDE)
#define _ComGoogleCommonIoMultiReader_

@class IOSCharArray;
@protocol JavaUtilIterator;

#define JavaIoReader_RESTRICT 1
#define JavaIoReader_INCLUDE 1
#include "java/io/Reader.h"


@interface ComGoogleCommonIoMultiReader : JavaIoReader {
}

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)readers;

- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

- (jlong)skipWithLong:(jlong)n;

- (jboolean)ready;

- (void)close;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoMultiReader_init() {}
#endif
