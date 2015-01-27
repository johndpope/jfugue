//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/util/concurrent/AtomicDoubleArray.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentAtomicDoubleArray_RESTRICT
#define ComGoogleCommonUtilConcurrentAtomicDoubleArray_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAtomicDoubleArray_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentAtomicDoubleArray_) && (ComGoogleCommonUtilConcurrentAtomicDoubleArray_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAtomicDoubleArray_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAtomicDoubleArray_

@class IOSDoubleArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilConcurrentAtomicAtomicLongArray;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonUtilConcurrentAtomicDoubleArray_serialVersionUID 0LL

@interface ComGoogleCommonUtilConcurrentAtomicDoubleArray : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithInt:(jint)length;

- (instancetype)initWithDoubleArray:(IOSDoubleArray *)array;

- (jint)length;

- (jdouble)getWithInt:(jint)i;

- (void)setWithInt:(jint)i
        withDouble:(jdouble)newValue;

- (void)lazySetWithInt:(jint)i
            withDouble:(jdouble)newValue;

- (jdouble)getAndSetWithInt:(jint)i
                 withDouble:(jdouble)newValue;

- (jboolean)compareAndSetWithInt:(jint)i
                      withDouble:(jdouble)expect
                      withDouble:(jdouble)update;

- (jboolean)weakCompareAndSetWithInt:(jint)i
                          withDouble:(jdouble)expect
                          withDouble:(jdouble)update;

- (jdouble)getAndAddWithInt:(jint)i
                 withDouble:(jdouble)delta;

- (jdouble)addAndGetWithInt:(jint)i
                 withDouble:(jdouble)delta;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentAtomicDoubleArray_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAtomicDoubleArray, serialVersionUID, jlong)
#endif
