//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/hamcrest/core/IsNot.java
//

#ifndef _OrgHamcrestCoreIsNot_H_
#define _OrgHamcrestCoreIsNot_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsNot : OrgHamcrestBaseMatcher {
 @public
  id<OrgHamcrestMatcher> matcher_;
}

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (jboolean)matchesWithId:(id)arg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)not__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)not__WithId:(id)value;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgHamcrestCoreIsNot *)other;

@end

__attribute__((always_inline)) inline void OrgHamcrestCoreIsNot_init() {}

J2OBJC_FIELD_SETTER(OrgHamcrestCoreIsNot, matcher_, id<OrgHamcrestMatcher>)
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNot_not__WithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNot_not__WithId_(id value);

#endif // _OrgHamcrestCoreIsNot_H_
