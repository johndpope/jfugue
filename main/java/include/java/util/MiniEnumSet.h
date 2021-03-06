//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/MiniEnumSet.java
//

#ifndef _JavaUtilMiniEnumSet_H_
#define _JavaUtilMiniEnumSet_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/util/EnumSet.h"
#include "java/util/Iterator.h"

#define JavaUtilMiniEnumSet_MAX_ELEMENTS 64

@interface JavaUtilMiniEnumSet : JavaUtilEnumSet {
}

- (instancetype)initWithIOSClass:(IOSClass *)elementType
           withJavaLangEnumArray:(IOSObjectArray *)enums;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (void)clear;

- (jboolean)addWithId:(JavaLangEnum *)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)removeWithId:(id)object;

- (jboolean)isEqual:(id)object;

- (void)complement;

- (void)setRangeWithJavaLangEnum:(JavaLangEnum *)start
                withJavaLangEnum:(JavaLangEnum *)end;


@end

__attribute__((always_inline)) inline void JavaUtilMiniEnumSet_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilMiniEnumSet, MAX_ELEMENTS, jint)

@interface JavaUtilMiniEnumSet_MiniEnumSetIterator : NSObject < JavaUtilIterator > {
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithJavaUtilMiniEnumSet:(JavaUtilMiniEnumSet *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilMiniEnumSet_MiniEnumSetIterator_init() {}

#endif // _JavaUtilMiniEnumSet_H_
