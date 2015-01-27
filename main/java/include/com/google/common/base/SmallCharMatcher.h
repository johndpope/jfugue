//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/base/SmallCharMatcher.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBaseSmallCharMatcher_RESTRICT
#define ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseSmallCharMatcher_RESTRICT
#if !defined (_ComGoogleCommonBaseSmallCharMatcher_) && (ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL || ComGoogleCommonBaseSmallCharMatcher_INCLUDE)
#define _ComGoogleCommonBaseSmallCharMatcher_

@class ComGoogleCommonBaseCharMatcher;
@class IOSCharArray;
@class JavaUtilBitSet;

#define ComGoogleCommonBaseCharMatcher_RESTRICT 1
#define ComGoogleCommonBaseCharMatcher_FastMatcher_INCLUDE 1
#include "com/google/common/base/CharMatcher.h"


#define ComGoogleCommonBaseSmallCharMatcher_C1 -862048943
#define ComGoogleCommonBaseSmallCharMatcher_C2 461845907
#define ComGoogleCommonBaseSmallCharMatcher_DESIRED_LOAD_FACTOR 0.5
#define ComGoogleCommonBaseSmallCharMatcher_MAX_SIZE 1023

@interface ComGoogleCommonBaseSmallCharMatcher : ComGoogleCommonBaseCharMatcher_FastMatcher {
}

+ (jint)smearWithInt:(jint)hashCode;

+ (jint)chooseTableSizeWithInt:(jint)setSize;

+ (ComGoogleCommonBaseCharMatcher *)fromWithJavaUtilBitSet:(JavaUtilBitSet *)chars
                                              withNSString:(NSString *)description_;

- (jboolean)matchesWithChar:(jchar)c;

- (void)setBitsWithJavaUtilBitSet:(JavaUtilBitSet *)table;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseSmallCharMatcher_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonBaseSmallCharMatcher_smearWithInt_(jint hashCode);
FOUNDATION_EXPORT jint ComGoogleCommonBaseSmallCharMatcher_chooseTableSizeWithInt_(jint setSize);
FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseSmallCharMatcher_fromWithJavaUtilBitSet_withNSString_(JavaUtilBitSet *chars, NSString *description_);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseSmallCharMatcher, MAX_SIZE, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseSmallCharMatcher, C1, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseSmallCharMatcher, C2, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseSmallCharMatcher, DESIRED_LOAD_FACTOR, jdouble)
#endif
