//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/EndsWith.java
//

#ifndef _OrgMockitoInternalMatchersEndsWith_H_
#define _OrgMockitoInternalMatchersEndsWith_H_

@protocol OrgHamcrestDescription;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersEndsWith_serialVersionUID 8556443228350129421LL

@interface OrgMockitoInternalMatchersEndsWith : OrgMockitoArgumentMatcher < JavaIoSerializable > {
 @public
  NSString *suffix_;
}

- (instancetype)initWithNSString:(NSString *)suffix;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalMatchersEndsWith *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersEndsWith_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalMatchersEndsWith, suffix_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersEndsWith, serialVersionUID, jlong)

#endif // _OrgMockitoInternalMatchersEndsWith_H_
