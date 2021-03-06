//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/base/Predicates.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBasePredicates_RESTRICT
#define ComGoogleCommonBasePredicates_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBasePredicates_RESTRICT
#if ComGoogleCommonBasePredicates_ObjectPredicateEnum_$4_INCLUDE
#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_INCLUDE 1
#endif
#if ComGoogleCommonBasePredicates_ObjectPredicateEnum_$3_INCLUDE
#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_INCLUDE 1
#endif
#if ComGoogleCommonBasePredicates_ObjectPredicateEnum_$2_INCLUDE
#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_INCLUDE 1
#endif
#if ComGoogleCommonBasePredicates_ObjectPredicateEnum_$1_INCLUDE
#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonBasePredicates_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_INCLUDE)
#define _ComGoogleCommonBasePredicates_

@class ComGoogleCommonBaseJoiner;
@class IOSClass;
@class IOSObjectArray;
@class JavaUtilRegexPattern;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;


@interface ComGoogleCommonBasePredicates : NSObject {
}

+ (id<ComGoogleCommonBasePredicate>)alwaysTrue;

+ (id<ComGoogleCommonBasePredicate>)alwaysFalse;

+ (id<ComGoogleCommonBasePredicate>)isNull;

+ (id<ComGoogleCommonBasePredicate>)notNull;

+ (id<ComGoogleCommonBasePredicate>)not__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<ComGoogleCommonBasePredicate>)and__WithJavaLangIterable:(id<JavaLangIterable>)components;

+ (id<ComGoogleCommonBasePredicate>)and__WithComGoogleCommonBasePredicateArray:(IOSObjectArray *)components;

+ (id<ComGoogleCommonBasePredicate>)and__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)first
                                         withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)second;

+ (id<ComGoogleCommonBasePredicate>)or__WithJavaLangIterable:(id<JavaLangIterable>)components;

+ (id<ComGoogleCommonBasePredicate>)or__WithComGoogleCommonBasePredicateArray:(IOSObjectArray *)components;

+ (id<ComGoogleCommonBasePredicate>)or__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)first
                                        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)second;

+ (id<ComGoogleCommonBasePredicate>)equalToWithId:(id)target;

+ (id<ComGoogleCommonBasePredicate>)instanceOfWithIOSClass:(IOSClass *)clazz;

+ (id<ComGoogleCommonBasePredicate>)assignableFromWithIOSClass:(IOSClass *)clazz;

+ (id<ComGoogleCommonBasePredicate>)inWithJavaUtilCollection:(id<JavaUtilCollection>)target;

+ (id<ComGoogleCommonBasePredicate>)composeWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate
                                            withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonBasePredicate>)containsPatternWithNSString:(NSString *)pattern;

+ (id<ComGoogleCommonBasePredicate>)containsWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

+ (id<JavaUtilList>)defensiveCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonBasePredicates_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonBasePredicates)
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_alwaysTrue();
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_alwaysFalse();
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_isNull();
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_notNull();
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_not__WithComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithJavaLangIterable_(id<JavaLangIterable> components);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithComGoogleCommonBasePredicateArray_(IOSObjectArray *components);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithComGoogleCommonBasePredicate_withComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> first, id<ComGoogleCommonBasePredicate> second);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithJavaLangIterable_(id<JavaLangIterable> components);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithComGoogleCommonBasePredicateArray_(IOSObjectArray *components);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithComGoogleCommonBasePredicate_withComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> first, id<ComGoogleCommonBasePredicate> second);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_equalToWithId_(id target);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_instanceOfWithIOSClass_(IOSClass *clazz);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_assignableFromWithIOSClass_(IOSClass *clazz);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_inWithJavaUtilCollection_(id<JavaUtilCollection> target);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_composeWithComGoogleCommonBasePredicate_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBasePredicate> predicate, id<ComGoogleCommonBaseFunction> function);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_containsPatternWithNSString_(NSString *pattern);
FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_containsWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonBasePredicates_defensiveCopyWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT ComGoogleCommonBaseJoiner *ComGoogleCommonBasePredicates_COMMA_JOINER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates, COMMA_JOINER_, ComGoogleCommonBaseJoiner *)
#endif
#if !defined (_ComGoogleCommonBasePredicates_ObjectPredicateEnum_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_ObjectPredicateEnum_INCLUDE)
#define _ComGoogleCommonBasePredicates_ObjectPredicateEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonBasePredicates_ObjectPredicate) {
  ComGoogleCommonBasePredicates_ObjectPredicate_ALWAYS_TRUE = 0,
  ComGoogleCommonBasePredicates_ObjectPredicate_ALWAYS_FALSE = 1,
  ComGoogleCommonBasePredicates_ObjectPredicate_IS_NULL = 2,
  ComGoogleCommonBasePredicates_ObjectPredicate_NOT_NULL = 3,
};

@interface ComGoogleCommonBasePredicates_ObjectPredicateEnum : JavaLangEnum < NSCopying, ComGoogleCommonBasePredicate > {
}

- (id<ComGoogleCommonBasePredicate>)withNarrowedType;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBasePredicates_ObjectPredicateEnum_values();

+ (ComGoogleCommonBasePredicates_ObjectPredicateEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicateEnum *ComGoogleCommonBasePredicates_ObjectPredicateEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonBasePredicates_ObjectPredicateEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonBasePredicates_ObjectPredicateEnum)

FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicateEnum *ComGoogleCommonBasePredicates_ObjectPredicateEnum_values_[];

#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_ALWAYS_TRUE ComGoogleCommonBasePredicates_ObjectPredicateEnum_values_[ComGoogleCommonBasePredicates_ObjectPredicate_ALWAYS_TRUE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBasePredicates_ObjectPredicateEnum, ALWAYS_TRUE)

#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_ALWAYS_FALSE ComGoogleCommonBasePredicates_ObjectPredicateEnum_values_[ComGoogleCommonBasePredicates_ObjectPredicate_ALWAYS_FALSE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBasePredicates_ObjectPredicateEnum, ALWAYS_FALSE)

#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_IS_NULL ComGoogleCommonBasePredicates_ObjectPredicateEnum_values_[ComGoogleCommonBasePredicates_ObjectPredicate_IS_NULL]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBasePredicates_ObjectPredicateEnum, IS_NULL)

#define ComGoogleCommonBasePredicates_ObjectPredicateEnum_NOT_NULL ComGoogleCommonBasePredicates_ObjectPredicateEnum_values_[ComGoogleCommonBasePredicates_ObjectPredicate_NOT_NULL]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBasePredicates_ObjectPredicateEnum, NOT_NULL)
#endif
#if !defined (_ComGoogleCommonBasePredicates_ObjectPredicateEnum_$1_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_ObjectPredicateEnum_$1_INCLUDE)
#define _ComGoogleCommonBasePredicates_ObjectPredicateEnum_$1_


@interface ComGoogleCommonBasePredicates_ObjectPredicateEnum_$1 : ComGoogleCommonBasePredicates_ObjectPredicateEnum {
}

- (jboolean)applyWithId:(id)o;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_ObjectPredicateEnum_$1_init() {}
#endif
#if !defined (_ComGoogleCommonBasePredicates_ObjectPredicateEnum_$2_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_ObjectPredicateEnum_$2_INCLUDE)
#define _ComGoogleCommonBasePredicates_ObjectPredicateEnum_$2_


@interface ComGoogleCommonBasePredicates_ObjectPredicateEnum_$2 : ComGoogleCommonBasePredicates_ObjectPredicateEnum {
}

- (jboolean)applyWithId:(id)o;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_ObjectPredicateEnum_$2_init() {}
#endif
#if !defined (_ComGoogleCommonBasePredicates_ObjectPredicateEnum_$3_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_ObjectPredicateEnum_$3_INCLUDE)
#define _ComGoogleCommonBasePredicates_ObjectPredicateEnum_$3_


@interface ComGoogleCommonBasePredicates_ObjectPredicateEnum_$3 : ComGoogleCommonBasePredicates_ObjectPredicateEnum {
}

- (jboolean)applyWithId:(id)o;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_ObjectPredicateEnum_$3_init() {}
#endif
#if !defined (_ComGoogleCommonBasePredicates_ObjectPredicateEnum_$4_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_ObjectPredicateEnum_$4_INCLUDE)
#define _ComGoogleCommonBasePredicates_ObjectPredicateEnum_$4_


@interface ComGoogleCommonBasePredicates_ObjectPredicateEnum_$4 : ComGoogleCommonBasePredicates_ObjectPredicateEnum {
}

- (jboolean)applyWithId:(id)o;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_ObjectPredicateEnum_$4_init() {}
#endif
#if !defined (_ComGoogleCommonBasePredicates_NotPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_NotPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_NotPredicate_

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_NotPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_NotPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
 @public
  id<ComGoogleCommonBasePredicate> predicate_;
}

- (instancetype)initWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (jboolean)applyWithId:(id)t;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_NotPredicate_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonBasePredicates_NotPredicate, predicate_, id<ComGoogleCommonBasePredicate>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_NotPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_AndPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_AndPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_AndPredicate_

@protocol JavaUtilList;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_AndPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_AndPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (jboolean)applyWithId:(id)t;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_AndPredicate_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_AndPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_OrPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_OrPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_OrPredicate_

@protocol JavaUtilList;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_OrPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_OrPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (jboolean)applyWithId:(id)t;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_OrPredicate_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_OrPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_IsEqualToPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_IsEqualToPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_IsEqualToPredicate_

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_IsEqualToPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_IsEqualToPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (jboolean)applyWithId:(id)t;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_IsEqualToPredicate_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_IsEqualToPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_InstanceOfPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_InstanceOfPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_InstanceOfPredicate_

@class IOSClass;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_InstanceOfPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_InstanceOfPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (jboolean)applyWithId:(id)o;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_InstanceOfPredicate_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_InstanceOfPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_AssignableFromPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_AssignableFromPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_AssignableFromPredicate_

@class IOSClass;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_AssignableFromPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_AssignableFromPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (jboolean)applyWithId:(IOSClass *)input;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_AssignableFromPredicate_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_AssignableFromPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_InPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_InPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_InPredicate_

@protocol JavaUtilCollection;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_InPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_InPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
}

- (jboolean)applyWithId:(id)t;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_InPredicate_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_InPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_CompositionPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_CompositionPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_CompositionPredicate_

@protocol ComGoogleCommonBaseFunction;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_CompositionPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_CompositionPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
 @public
  id<ComGoogleCommonBasePredicate> p_;
  id<ComGoogleCommonBaseFunction> f_;
}

- (jboolean)applyWithId:(id)a;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_CompositionPredicate_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonBasePredicates_CompositionPredicate, p_, id<ComGoogleCommonBasePredicate>)
J2OBJC_FIELD_SETTER(ComGoogleCommonBasePredicates_CompositionPredicate, f_, id<ComGoogleCommonBaseFunction>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_CompositionPredicate, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonBasePredicates_ContainsPatternPredicate_) && (ComGoogleCommonBasePredicates_INCLUDE_ALL || ComGoogleCommonBasePredicates_ContainsPatternPredicate_INCLUDE)
#define _ComGoogleCommonBasePredicates_ContainsPatternPredicate_

@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBasePredicates_ContainsPatternPredicate_serialVersionUID 0LL

@interface ComGoogleCommonBasePredicates_ContainsPatternPredicate : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
 @public
  JavaUtilRegexPattern *pattern_;
}

- (instancetype)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (instancetype)initWithNSString:(NSString *)patternStr;

- (jboolean)applyWithId:(id<JavaLangCharSequence>)t;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePredicates_ContainsPatternPredicate_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonBasePredicates_ContainsPatternPredicate, pattern_, JavaUtilRegexPattern *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePredicates_ContainsPatternPredicate, serialVersionUID, jlong)
#endif
