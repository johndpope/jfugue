//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/locks/ReentrantLock.java
//

#ifndef _JavaUtilConcurrentLocksReentrantLock_H_
#define _JavaUtilConcurrentLocksReentrantLock_H_

@class JavaIoObjectInputStream;
@class JavaLangThread;
@class JavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject;
@class JavaUtilConcurrentLocksReentrantLock_Sync;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentLocksCondition;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/util/concurrent/locks/Lock.h"

#define JavaUtilConcurrentLocksReentrantLock_serialVersionUID 7373984872572414699LL

@interface JavaUtilConcurrentLocksReentrantLock : NSObject < JavaUtilConcurrentLocksLock, JavaIoSerializable > {
}

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)fair;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

- (id<JavaUtilConcurrentLocksCondition>)newCondition OBJC_METHOD_FAMILY_NONE;

- (jint)getHoldCount;

- (jboolean)isHeldByCurrentThread;

- (jboolean)isLocked;

- (jboolean)isFair;

- (JavaLangThread *)getOwner;

- (jboolean)hasQueuedThreads;

- (jboolean)hasQueuedThreadWithJavaLangThread:(JavaLangThread *)thread;

- (jint)getQueueLength;

- (id<JavaUtilCollection>)getQueuedThreads;

- (jboolean)hasWaitersWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition>)condition;

- (jint)getWaitQueueLengthWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition>)condition;

- (id<JavaUtilCollection>)getWaitingThreadsWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition>)condition;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentLocksReentrantLock_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantLock, serialVersionUID, jlong)

#define JavaUtilConcurrentLocksReentrantLock_Sync_serialVersionUID -5179523762034025860LL

@interface JavaUtilConcurrentLocksReentrantLock_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer {
}

- (void)lock;

- (jboolean)nonfairTryAcquireWithInt:(jint)acquires;

- (jboolean)tryReleaseWithInt:(jint)releases;

- (jboolean)isHeldExclusively;

- (JavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject *)newCondition OBJC_METHOD_FAMILY_NONE;

- (JavaLangThread *)getOwner;

- (jint)getHoldCount;

- (jboolean)isLocked;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentLocksReentrantLock_Sync_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantLock_Sync, serialVersionUID, jlong)

#define JavaUtilConcurrentLocksReentrantLock_NonfairSync_serialVersionUID 7316153563782823691LL

@interface JavaUtilConcurrentLocksReentrantLock_NonfairSync : JavaUtilConcurrentLocksReentrantLock_Sync {
}

- (void)lock;

- (jboolean)tryAcquireWithInt:(jint)acquires;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentLocksReentrantLock_NonfairSync_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantLock_NonfairSync, serialVersionUID, jlong)

#define JavaUtilConcurrentLocksReentrantLock_FairSync_serialVersionUID -3000897897090466540LL

@interface JavaUtilConcurrentLocksReentrantLock_FairSync : JavaUtilConcurrentLocksReentrantLock_Sync {
}

- (void)lock;

- (jboolean)tryAcquireWithInt:(jint)acquires;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentLocksReentrantLock_FairSync_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantLock_FairSync, serialVersionUID, jlong)

#endif // _JavaUtilConcurrentLocksReentrantLock_H_
