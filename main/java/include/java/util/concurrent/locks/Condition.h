//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/locks/Condition.java
//

#ifndef _JavaUtilConcurrentLocksCondition_H_
#define _JavaUtilConcurrentLocksCondition_H_

@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilDate;

#import "JreEmulation.h"

@protocol JavaUtilConcurrentLocksCondition < NSObject, JavaObject >

- (void)await;

- (void)awaitUninterruptibly;

- (jlong)awaitNanosWithLong:(jlong)nanosTimeout;

- (jboolean)awaitWithLong:(jlong)time
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)awaitUntilWithJavaUtilDate:(JavaUtilDate *)deadline;

- (void)signal;

- (void)signalAll;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentLocksCondition_init() {}

#endif // _JavaUtilConcurrentLocksCondition_H_
