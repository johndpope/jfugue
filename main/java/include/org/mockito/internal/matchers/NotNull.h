//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/NotNull.java
//

#ifndef _OrgMockitoInternalMatchersNotNull_H_
#define _OrgMockitoInternalMatchersNotNull_H_

@protocol OrgHamcrestDescription;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersNotNull_serialVersionUID 7278261081285153228LL

@interface OrgMockitoInternalMatchersNotNull : OrgMockitoArgumentMatcher < JavaIoSerializable > {
}

- (instancetype)init;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalMatchersNotNull_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersNotNull)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersNotNull, serialVersionUID, jlong)

FOUNDATION_EXPORT OrgMockitoInternalMatchersNotNull *OrgMockitoInternalMatchersNotNull_NOT_NULL_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersNotNull, NOT_NULL_, OrgMockitoInternalMatchersNotNull *)

#endif // _OrgMockitoInternalMatchersNotNull_H_
