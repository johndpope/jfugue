//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/base/FunctionalEquivalence.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBaseFunctionalEquivalence_RESTRICT
#define ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseFunctionalEquivalence_RESTRICT
#if !defined (_ComGoogleCommonBaseFunctionalEquivalence_) && (ComGoogleCommonBaseFunctionalEquivalence_INCLUDE_ALL || ComGoogleCommonBaseFunctionalEquivalence_INCLUDE)
#define _ComGoogleCommonBaseFunctionalEquivalence_

@protocol ComGoogleCommonBaseFunction;

#define ComGoogleCommonBaseEquivalence_RESTRICT 1
#define ComGoogleCommonBaseEquivalence_INCLUDE 1
#include "com/google/common/base/Equivalence.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseFunctionalEquivalence_serialVersionUID 0LL

@interface ComGoogleCommonBaseFunctionalEquivalence : ComGoogleCommonBaseEquivalence < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                 withComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)resultEquivalence;

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)a;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseFunctionalEquivalence_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseFunctionalEquivalence, serialVersionUID, jlong)
#endif
