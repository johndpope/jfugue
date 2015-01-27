//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Semaphore.java
//

#ifndef _JavaUtilConcurrentSemaphore_H_
#define _JavaUtilConcurrentSemaphore_H_

@class JavaUtilConcurrentSemaphore_Sync;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"

#define JavaUtilConcurrentSemaphore_serialVersionUID -3222578661600680210LL

@interface JavaUtilConcurrentSemaphore : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithInt:(jint)permits;

- (instancetype)initWithInt:(jint)permits
                withBoolean:(jboolean)fair;

- (void)acquire;

- (void)acquireUninterruptibly;

- (jboolean)tryAcquire;

- (jboolean)tryAcquireWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)release__;

- (void)acquireWithInt:(jint)permits;

- (void)acquireUninterruptiblyWithInt:(jint)permits;

- (jboolean)tryAcquireWithInt:(jint)permits;

- (jboolean)tryAcquireWithInt:(jint)permits
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)release__WithInt:(jint)permits;

- (jint)availablePermits;

- (jint)drainPermits;

- (void)reducePermitsWithInt:(jint)reduction;

- (jboolean)isFair;

- (jboolean)hasQueuedThreads;

- (jint)getQueueLength;

- (id<JavaUtilCollection>)getQueuedThreads;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentSemaphore_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSemaphore, serialVersionUID, jlong)

#define JavaUtilConcurrentSemaphore_Sync_serialVersionUID 1192457210091910933LL

@interface JavaUtilConcurrentSemaphore_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer {
}

- (instancetype)initWithInt:(jint)permits;

- (jint)getPermits;

- (jint)nonfairTryAcquireSharedWithInt:(jint)acquires;

- (jboolean)tryReleaseSharedWithInt:(jint)releases;

- (void)reducePermitsWithInt:(jint)reductions;

- (jint)drainPermits;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentSemaphore_Sync_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSemaphore_Sync, serialVersionUID, jlong)

#define JavaUtilConcurrentSemaphore_NonfairSync_serialVersionUID -2694183684443567898LL

@interface JavaUtilConcurrentSemaphore_NonfairSync : JavaUtilConcurrentSemaphore_Sync {
}

- (instancetype)initWithInt:(jint)permits;

- (jint)tryAcquireSharedWithInt:(jint)acquires;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentSemaphore_NonfairSync_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSemaphore_NonfairSync, serialVersionUID, jlong)

#define JavaUtilConcurrentSemaphore_FairSync_serialVersionUID 2014338818796000944LL

@interface JavaUtilConcurrentSemaphore_FairSync : JavaUtilConcurrentSemaphore_Sync {
}

- (instancetype)initWithInt:(jint)permits;

- (jint)tryAcquireSharedWithInt:(jint)acquires;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentSemaphore_FairSync_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSemaphore_FairSync, serialVersionUID, jlong)

#endif // _JavaUtilConcurrentSemaphore_H_