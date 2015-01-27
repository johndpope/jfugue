//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/primitives/UnsignedLongs.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonPrimitivesUnsignedLongs_RESTRICT
#define ComGoogleCommonPrimitivesUnsignedLongs_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesUnsignedLongs_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesUnsignedLongs_) && (ComGoogleCommonPrimitivesUnsignedLongs_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedLongs_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedLongs_

@class IOSIntArray;
@class IOSLongArray;
@protocol JavaUtilComparator;


#define ComGoogleCommonPrimitivesUnsignedLongs_MAX_VALUE -1LL

@interface ComGoogleCommonPrimitivesUnsignedLongs : NSObject {
}

+ (jint)compareWithLong:(jlong)a
               withLong:(jlong)b;

+ (jlong)minWithLongArray:(IOSLongArray *)array;

+ (jlong)maxWithLongArray:(IOSLongArray *)array;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withLongArray:(IOSLongArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jlong)divideWithLong:(jlong)dividend
               withLong:(jlong)divisor;

+ (jlong)remainderWithLong:(jlong)dividend
                  withLong:(jlong)divisor;

+ (jlong)parseUnsignedLongWithNSString:(NSString *)s;

+ (jlong)decodeWithNSString:(NSString *)stringValue;

+ (jlong)parseUnsignedLongWithNSString:(NSString *)s
                               withInt:(jint)radix;

+ (NSString *)toStringWithLong:(jlong)x;

+ (NSString *)toStringWithLong:(jlong)x
                       withInt:(jint)radix;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesUnsignedLongs_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedLongs)
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedLongs_compareWithLong_withLong_(jlong a, jlong b);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_minWithLongArray_(IOSLongArray *array);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_maxWithLongArray_(IOSLongArray *array);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedLongs_joinWithNSString_withLongArray_(NSString *separator, IOSLongArray *array);
FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedLongs_lexicographicalComparator();
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_divideWithLong_withLong_(jlong dividend, jlong divisor);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_remainderWithLong_withLong_(jlong dividend, jlong divisor);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_parseUnsignedLongWithNSString_(NSString *s);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_decodeWithNSString_(NSString *stringValue);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_parseUnsignedLongWithNSString_withInt_(NSString *s, jint radix);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedLongs_toStringWithLong_(jlong x);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedLongs_toStringWithLong_withInt_(jlong x, jint radix);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLongs, MAX_VALUE, jlong)

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesUnsignedLongs_maxValueDivs_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLongs, maxValueDivs_, IOSLongArray *)

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesUnsignedLongs_maxValueMods_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLongs, maxValueMods_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonPrimitivesUnsignedLongs_maxSafeDigits_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLongs, maxSafeDigits_, IOSIntArray *)
#endif
#if !defined (_ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesUnsignedLongs_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_

@class IOSLongArray;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator) {
  ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator > {
}

- (jint)compareWithId:(IOSLongArray *)left
               withId:(IOSLongArray *)right;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparatorEnum, INSTANCE)
#endif
