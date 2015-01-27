//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ArrayList.java
//

#ifndef _JavaUtilArrayList_H_
#define _JavaUtilArrayList_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaLangIndexOutOfBoundsException;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/util/RandomAccess.h"

#define JavaUtilArrayList_MIN_CAPACITY_INCREMENT 12
#define JavaUtilArrayList_serialVersionUID 8683452581122892189LL

@interface JavaUtilArrayList : JavaUtilAbstractList < NSCopying, JavaIoSerializable, JavaUtilRandomAccess > {
 @public
  jint size__;
  IOSObjectArray *array_;
}

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addWithId:(id)object;

- (void)addWithInt:(jint)index
            withId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (JavaLangIndexOutOfBoundsException *)throwIndexOutOfBoundsExceptionWithInt:(jint)index
                                                                     withInt:(jint)size;

- (void)clear;

- (id)clone;

- (void)ensureCapacityWithInt:(jint)minimumCapacity;

- (id)getWithInt:(jint)index;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)object;

- (jint)indexOfWithId:(id)object;

- (jint)lastIndexOfWithId:(id)object;

- (id)removeWithInt:(jint)index;

- (jboolean)removeWithId:(id)object;

- (void)removeRangeWithInt:(jint)fromIndex
                   withInt:(jint)toIndex;

- (id)setWithInt:(jint)index
          withId:(id)object;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

- (void)trimToSize;

- (id<JavaUtilIterator>)iterator;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)o;


@end

__attribute__((always_inline)) inline void JavaUtilArrayList_init() {}

J2OBJC_FIELD_SETTER(JavaUtilArrayList, array_, IOSObjectArray *)
FOUNDATION_EXPORT JavaLangIndexOutOfBoundsException *JavaUtilArrayList_throwIndexOutOfBoundsExceptionWithInt_withInt_(jint index, jint size);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilArrayList, MIN_CAPACITY_INCREMENT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilArrayList, serialVersionUID, jlong)

@interface JavaUtilArrayList_ArrayListIterator : NSObject < JavaUtilIterator > {
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithJavaUtilArrayList:(JavaUtilArrayList *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilArrayList_ArrayListIterator_init() {}

#endif // _JavaUtilArrayList_H_
