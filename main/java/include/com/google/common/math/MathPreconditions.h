//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/math/MathPreconditions.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonMathMathPreconditions_RESTRICT
#define ComGoogleCommonMathMathPreconditions_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonMathMathPreconditions_RESTRICT
#if !defined (_ComGoogleCommonMathMathPreconditions_) && (ComGoogleCommonMathMathPreconditions_INCLUDE_ALL || ComGoogleCommonMathMathPreconditions_INCLUDE)
#define _ComGoogleCommonMathMathPreconditions_

@class JavaMathBigInteger;


@interface ComGoogleCommonMathMathPreconditions : NSObject {
}

+ (jint)checkPositiveWithNSString:(NSString *)role
                          withInt:(jint)x;

+ (jlong)checkPositiveWithNSString:(NSString *)role
                          withLong:(jlong)x;

+ (JavaMathBigInteger *)checkPositiveWithNSString:(NSString *)role
                           withJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jint)checkNonNegativeWithNSString:(NSString *)role
                             withInt:(jint)x;

+ (jlong)checkNonNegativeWithNSString:(NSString *)role
                             withLong:(jlong)x;

+ (JavaMathBigInteger *)checkNonNegativeWithNSString:(NSString *)role
                              withJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jdouble)checkNonNegativeWithNSString:(NSString *)role
                             withDouble:(jdouble)x;

+ (void)checkRoundingUnnecessaryWithBoolean:(jboolean)condition;

+ (void)checkInRangeWithBoolean:(jboolean)condition;

+ (void)checkNoOverflowWithBoolean:(jboolean)condition;

@end

__attribute__((always_inline)) inline void ComGoogleCommonMathMathPreconditions_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonMathMathPreconditions_checkPositiveWithNSString_withInt_(NSString *role, jint x);
FOUNDATION_EXPORT jlong ComGoogleCommonMathMathPreconditions_checkPositiveWithNSString_withLong_(NSString *role, jlong x);
FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathMathPreconditions_checkPositiveWithNSString_withJavaMathBigInteger_(NSString *role, JavaMathBigInteger *x);
FOUNDATION_EXPORT jint ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withInt_(NSString *role, jint x);
FOUNDATION_EXPORT jlong ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withLong_(NSString *role, jlong x);
FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withJavaMathBigInteger_(NSString *role, JavaMathBigInteger *x);
FOUNDATION_EXPORT jdouble ComGoogleCommonMathMathPreconditions_checkNonNegativeWithNSString_withDouble_(NSString *role, jdouble x);
FOUNDATION_EXPORT void ComGoogleCommonMathMathPreconditions_checkRoundingUnnecessaryWithBoolean_(jboolean condition);
FOUNDATION_EXPORT void ComGoogleCommonMathMathPreconditions_checkInRangeWithBoolean_(jboolean condition);
FOUNDATION_EXPORT void ComGoogleCommonMathMathPreconditions_checkNoOverflowWithBoolean_(jboolean condition);
#endif