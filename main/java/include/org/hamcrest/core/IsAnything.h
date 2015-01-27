//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/hamcrest/core/IsAnything.java
//

#ifndef _OrgHamcrestCoreIsAnything_H_
#define _OrgHamcrestCoreIsAnything_H_

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsAnything : OrgHamcrestBaseMatcher {
 @public
  NSString *description__;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)description_;

- (jboolean)matchesWithId:(id)o;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)anything;

+ (id<OrgHamcrestMatcher>)anythingWithNSString:(NSString *)description_;

+ (id<OrgHamcrestMatcher>)anyWithIOSClass:(IOSClass *)type;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgHamcrestCoreIsAnything *)other;

@end

__attribute__((always_inline)) inline void OrgHamcrestCoreIsAnything_init() {}

J2OBJC_FIELD_SETTER(OrgHamcrestCoreIsAnything, description__, NSString *)
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsAnything_anything();
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsAnything_anythingWithNSString_(NSString *description_);
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsAnything_anyWithIOSClass_(IOSClass *type);

#endif // _OrgHamcrestCoreIsAnything_H_
