//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteBufferAsLongBuffer.java
//

#ifndef _JavaNioByteBufferAsLongBuffer_H_
#define _JavaNioByteBufferAsLongBuffer_H_

@class IOSLongArray;
@class JavaNioByteBuffer;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/nio/LongBuffer.h"

@interface JavaNioByteBufferAsLongBuffer : JavaNioLongBuffer {
}

+ (JavaNioLongBuffer *)asLongBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)byteBuffer;

- (JavaNioLongBuffer *)asReadOnlyBuffer;

- (JavaNioLongBuffer *)compact;

- (JavaNioLongBuffer *)duplicate;

- (jlong)get;

- (jlong)getWithInt:(jint)index;

- (JavaNioLongBuffer *)getWithLongArray:(IOSLongArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)longCount;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteOrder *)order;

- (IOSLongArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioLongBuffer *)putWithLong:(jlong)c;

- (JavaNioLongBuffer *)putWithInt:(jint)index
                         withLong:(jlong)c;

- (JavaNioLongBuffer *)putWithLongArray:(IOSLongArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)longCount;

- (JavaNioLongBuffer *)slice;

@end

__attribute__((always_inline)) inline void JavaNioByteBufferAsLongBuffer_init() {}
FOUNDATION_EXPORT JavaNioLongBuffer *JavaNioByteBufferAsLongBuffer_asLongBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *byteBuffer);

#endif // _JavaNioByteBufferAsLongBuffer_H_
