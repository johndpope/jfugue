//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/primitives/Chars.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonPrimitivesChars_RESTRICT
#define ComGoogleCommonPrimitivesChars_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesChars_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesChars_) && (ComGoogleCommonPrimitivesChars_INCLUDE_ALL || ComGoogleCommonPrimitivesChars_INCLUDE)
#define _ComGoogleCommonPrimitivesChars_

@class IOSByteArray;
@class IOSCharArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;


#define ComGoogleCommonPrimitivesChars_BYTES 2

@interface ComGoogleCommonPrimitivesChars : NSObject {
}

+ (jint)hashCodeWithChar:(jchar)value;

+ (jchar)checkedCastWithLong:(jlong)value;

+ (jchar)saturatedCastWithLong:(jlong)value;

+ (jint)compareWithChar:(jchar)a
               withChar:(jchar)b;

+ (jboolean)containsWithCharArray:(IOSCharArray *)array
                         withChar:(jchar)target;

+ (jint)indexOfWithCharArray:(IOSCharArray *)array
                    withChar:(jchar)target;

+ (jint)indexOfWithCharArray:(IOSCharArray *)array
               withCharArray:(IOSCharArray *)target;

+ (jint)lastIndexOfWithCharArray:(IOSCharArray *)array
                        withChar:(jchar)target;

+ (jchar)minWithCharArray:(IOSCharArray *)array;

+ (jchar)maxWithCharArray:(IOSCharArray *)array;

+ (IOSCharArray *)concatWithCharArray2:(IOSObjectArray *)arrays;

+ (IOSByteArray *)toByteArrayWithChar:(jchar)value;

+ (jchar)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

+ (jchar)fromBytesWithByte:(jbyte)b1
                  withByte:(jbyte)b2;

+ (IOSCharArray *)ensureCapacityWithCharArray:(IOSCharArray *)array
                                      withInt:(jint)minLength
                                      withInt:(jint)padding;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withCharArray:(IOSCharArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (IOSCharArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (id<JavaUtilList>)asListWithCharArray:(IOSCharArray *)backingArray;

@end

__attribute__((always_inline)) inline void ComGoogleCommonPrimitivesChars_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_hashCodeWithChar_(jchar value);
FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_checkedCastWithLong_(jlong value);
FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_saturatedCastWithLong_(jlong value);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_compareWithChar_withChar_(jchar a, jchar b);
FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesChars_containsWithCharArray_withChar_(IOSCharArray *array, jchar target);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_indexOfWithCharArray_withChar_(IOSCharArray *array, jchar target);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_indexOfWithCharArray_withCharArray_(IOSCharArray *array, IOSCharArray *target);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_lastIndexOfWithCharArray_withChar_(IOSCharArray *array, jchar target);
FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_minWithCharArray_(IOSCharArray *array);
FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_maxWithCharArray_(IOSCharArray *array);
FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_concatWithCharArray2_(IOSObjectArray *arrays);
FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesChars_toByteArrayWithChar_(jchar value);
FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_fromByteArrayWithByteArray_(IOSByteArray *bytes);
FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_fromBytesWithByte_withByte_(jbyte b1, jbyte b2);
FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_ensureCapacityWithCharArray_withInt_withInt_(IOSCharArray *array, jint minLength, jint padding);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesChars_joinWithNSString_withCharArray_(NSString *separator, IOSCharArray *array);
FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesChars_lexicographicalComparator();
FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesChars_asListWithCharArray_(IOSCharArray *backingArray);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesChars, BYTES, jint)
#endif
#if !defined (_ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesChars_INCLUDE_ALL || ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_

@class IOSCharArray;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesChars_LexicographicalComparator) {
  ComGoogleCommonPrimitivesChars_LexicographicalComparator_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator > {
}

- (jint)compareWithId:(IOSCharArray *)left
               withId:(IOSCharArray *)right;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesChars_LexicographicalComparator_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonPrimitivesChars_LexicographicalComparatorEnum, INSTANCE)
#endif
#if !defined (_ComGoogleCommonPrimitivesChars_CharArrayAsList_) && (ComGoogleCommonPrimitivesChars_INCLUDE_ALL || ComGoogleCommonPrimitivesChars_CharArrayAsList_INCLUDE)
#define _ComGoogleCommonPrimitivesChars_CharArrayAsList_

@class IOSCharArray;
@class JavaLangCharacter;
@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonPrimitivesChars_CharArrayAsList_serialVersionUID 0LL

@interface ComGoogleCommonPrimitivesChars_CharArrayAsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable > {
 @public
  IOSCharArray *array_;
  jint start_;
  jint end_;
}

- (instancetype)initWithCharArray:(IOSCharArray *)array;

- (instancetype)initWithCharArray:(IOSCharArray *)array
                          withInt:(jint)start
                          withInt:(jint)end;

- (jint)size;

- (jboolean)isEmpty;

- (JavaLangCharacter *)getWithInt:(jint)index;

- (jboolean)containsWithId:(id)target;

- (jint)indexOfWithId:(id)target;

- (jint)lastIndexOfWithId:(id)target;

- (JavaLangCharacter *)setWithInt:(jint)index
                           withId:(JavaLangCharacter *)element;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (IOSCharArray *)toCharArray;


@end

__attribute__((always_inline)) inline void ComGoogleCommonPrimitivesChars_CharArrayAsList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonPrimitivesChars_CharArrayAsList, array_, IOSCharArray *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesChars_CharArrayAsList, serialVersionUID, jlong)
#endif
