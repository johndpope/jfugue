//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CopyOnWriteArraySet.java
//

#ifndef _JavaUtilConcurrentCopyOnWriteArraySet_H_
#define _JavaUtilConcurrentCopyOnWriteArraySet_H_

@class IOSObjectArray;
@class JavaUtilConcurrentCopyOnWriteArrayList;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractSet.h"

#define JavaUtilConcurrentCopyOnWriteArraySet_serialVersionUID 5457747651344034263LL

@interface JavaUtilConcurrentCopyOnWriteArraySet : JavaUtilAbstractSet < JavaIoSerializable > {
}

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (void)clear;

- (jboolean)removeWithId:(id)o;

- (jboolean)addWithId:(id)e;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id<JavaUtilIterator>)iterator;

- (jboolean)isEqual:(id)o;


@end

__attribute__((always_inline)) inline void JavaUtilConcurrentCopyOnWriteArraySet_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentCopyOnWriteArraySet, serialVersionUID, jlong)

#endif // _JavaUtilConcurrentCopyOnWriteArraySet_H_