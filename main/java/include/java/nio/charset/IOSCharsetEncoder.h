//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/IOSCharsetEncoder.java
//

#ifndef _JavaNioCharsetIOSCharsetEncoder_H_
#define _JavaNioCharsetIOSCharsetEncoder_H_

@class IOSByteArray;
@class IOSCharArray;
@class JavaNioByteBuffer;
@class JavaNioCharBuffer;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCoderResult;

#import "JreEmulation.h"
#include "java/nio/charset/CharsetEncoder.h"

@interface JavaNioCharsetIOSCharsetEncoder : JavaNioCharsetCharsetEncoder {
}

- (instancetype)initWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
                                    withFloat:(jfloat)maxBytesPerChar;

- (JavaNioByteBuffer *)encodeWithJavaNioCharBuffer:(JavaNioCharBuffer *)inArg;

- (JavaNioCharsetCoderResult *)encodeLoopWithJavaNioCharBuffer:(JavaNioCharBuffer *)inArg
                                         withJavaNioByteBuffer:(JavaNioByteBuffer *)outArg;

@end

__attribute__((always_inline)) inline void JavaNioCharsetIOSCharsetEncoder_init() {}

#endif // _JavaNioCharsetIOSCharsetEncoder_H_