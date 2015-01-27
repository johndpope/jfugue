//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UnsafeArrayList.java
//

#ifndef _JavaUtilUnsafeArrayList_H_
#define _JavaUtilUnsafeArrayList_H_

@class IOSClass;
@class IOSObjectArray;

#import "JreEmulation.h"
#include "java/util/AbstractList.h"

@interface JavaUtilUnsafeArrayList : JavaUtilAbstractList {
}

- (instancetype)initWithIOSClass:(IOSClass *)elementType
                         withInt:(jint)initialCapacity;

- (jboolean)addWithId:(id)element;

- (IOSObjectArray *)array;

- (id)getWithInt:(jint)i;

- (jint)size;


@end

__attribute__((always_inline)) inline void JavaUtilUnsafeArrayList_init() {}

#endif // _JavaUtilUnsafeArrayList_H_