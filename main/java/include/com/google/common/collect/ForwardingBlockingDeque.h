//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ForwardingBlockingDeque.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectForwardingBlockingDeque_RESTRICT
#define ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingBlockingDeque_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingBlockingDeque_) && (ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL || ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE)
#define _ComGoogleCommonCollectForwardingBlockingDeque_

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

#define ComGoogleCommonCollectForwardingDeque_RESTRICT 1
#define ComGoogleCommonCollectForwardingDeque_INCLUDE 1
#include "com/google/common/collect/ForwardingDeque.h"

#define JavaUtilConcurrentBlockingDeque_RESTRICT 1
#define JavaUtilConcurrentBlockingDeque_INCLUDE 1
#include "java/util/concurrent/BlockingDeque.h"


@interface ComGoogleCommonCollectForwardingBlockingDeque : ComGoogleCommonCollectForwardingDeque < JavaUtilConcurrentBlockingDeque > {
}

- (instancetype)init;

- (id<JavaUtilConcurrentBlockingDeque>)delegate;

- (jint)remainingCapacity;

- (void)putFirstWithId:(id)e;

- (void)putLastWithId:(id)e;

- (jboolean)offerFirstWithId:(id)e
                    withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)offerLastWithId:(id)e
                   withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)takeFirst;

- (id)takeLast;

- (id)pollFirstWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollLastWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id)e;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)take;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectForwardingBlockingDeque_init() {}
#endif
