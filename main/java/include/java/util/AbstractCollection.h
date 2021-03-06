//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractCollection.java
//

#ifndef _JavaUtilAbstractCollection_H_
#define _JavaUtilAbstractCollection_H_

@class IOSObjectArray;
@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/util/Collection.h"

@interface JavaUtilAbstractCollection : NSObject < JavaUtilCollection > {
}

- (instancetype)init;

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

- (NSString *)description;


@end

__attribute__((always_inline)) inline void JavaUtilAbstractCollection_init() {}

#endif // _JavaUtilAbstractCollection_H_
