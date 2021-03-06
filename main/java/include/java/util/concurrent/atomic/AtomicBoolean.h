//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicBoolean.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicBoolean_H_
#define _JavaUtilConcurrentAtomicAtomicBoolean_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilConcurrentAtomicAtomicBoolean_serialVersionUID 4654671469794556979LL

@interface JavaUtilConcurrentAtomicAtomicBoolean : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithBoolean:(jboolean)initialValue;

- (instancetype)init;

- (jboolean)get;

- (jboolean)compareAndSetWithBoolean:(jboolean)expect
                         withBoolean:(jboolean)update;

- (jboolean)weakCompareAndSetWithBoolean:(jboolean)expect
                             withBoolean:(jboolean)update;

- (void)setWithBoolean:(jboolean)newValue;

- (void)lazySetWithBoolean:(jboolean)newValue;

- (jboolean)getAndSetWithBoolean:(jboolean)newValue;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentAtomicAtomicBoolean_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentAtomicAtomicBoolean, serialVersionUID, jlong)

#endif // _JavaUtilConcurrentAtomicAtomicBoolean_H_
