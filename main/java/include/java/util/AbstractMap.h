//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractMap.java
//

#ifndef _JavaUtilAbstractMap_H_
#define _JavaUtilAbstractMap_H_

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractSet.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"

@interface JavaUtilAbstractMap : NSObject < JavaUtilMap > {
 @public
  id<JavaUtilSet> keySet__;
  id<JavaUtilCollection> valuesCollection_;
}

- (instancetype)init;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (jint)size;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

- (id)clone;

@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_init() {}

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, keySet__, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, valuesCollection_, id<JavaUtilCollection>)

#define JavaUtilAbstractMap_SimpleImmutableEntry_serialVersionUID 7138329143949025153LL

@interface JavaUtilAbstractMap_SimpleImmutableEntry : NSObject < JavaUtilMap_Entry, JavaIoSerializable > {
}

- (instancetype)initWithId:(id)theKey
                    withId:(id)theValue;

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)copyFrom;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)object;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_SimpleImmutableEntry_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilAbstractMap_SimpleImmutableEntry, serialVersionUID, jlong)

#define JavaUtilAbstractMap_SimpleEntry_serialVersionUID -8499721149061103585LL

@interface JavaUtilAbstractMap_SimpleEntry : NSObject < JavaUtilMap_Entry, JavaIoSerializable > {
}

- (instancetype)initWithId:(id)theKey
                    withId:(id)theValue;

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)copyFrom;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)object;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_SimpleEntry_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilAbstractMap_SimpleEntry, serialVersionUID, jlong)

@interface JavaUtilAbstractMap_keySet_AbstractMapKeySet : JavaUtilAbstractSet {
}

- (jboolean)containsWithId:(id)object;

- (jint)size;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithJavaUtilAbstractMap:(JavaUtilAbstractMap *)outer$;


@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_keySet_AbstractMapKeySet_init() {}

@interface JavaUtilAbstractMap_keySet_AbstractMapKeySet_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> setIterator_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithJavaUtilAbstractMap_keySet_AbstractMapKeySet:(JavaUtilAbstractMap_keySet_AbstractMapKeySet *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_keySet_AbstractMapKeySet_$1_init() {}

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap_keySet_AbstractMapKeySet_$1, setIterator_, id<JavaUtilIterator>)

@interface JavaUtilAbstractMap_values_AbstractMapValuesCollection : JavaUtilAbstractCollection {
}

- (jint)size;

- (jboolean)containsWithId:(id)object;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithJavaUtilAbstractMap:(JavaUtilAbstractMap *)outer$;


@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_values_AbstractMapValuesCollection_init() {}

@interface JavaUtilAbstractMap_values_AbstractMapValuesCollection_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> setIterator_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithJavaUtilAbstractMap_values_AbstractMapValuesCollection:(JavaUtilAbstractMap_values_AbstractMapValuesCollection *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilAbstractMap_values_AbstractMapValuesCollection_$1_init() {}

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap_values_AbstractMapValuesCollection_$1, setIterator_, id<JavaUtilIterator>)

#endif // _JavaUtilAbstractMap_H_
