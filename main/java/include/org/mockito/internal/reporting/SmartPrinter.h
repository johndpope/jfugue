//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/reporting/SmartPrinter.java
//

#ifndef _OrgMockitoInternalReportingSmartPrinter_H_
#define _OrgMockitoInternalReportingSmartPrinter_H_

@class IOSObjectArray;
@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol OrgMockitoInvocationInvocation;

#import "JreEmulation.h"

@interface OrgMockitoInternalReportingSmartPrinter : NSObject {
 @public
  NSString *wanted_;
  NSString *actual_;
}

- (instancetype)initWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                   withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)actual
                                             withJavaLangIntegerArray:(IOSObjectArray *)indexesOfMatchersToBeDescribedWithExtraTypeInfo;

- (NSString *)getWanted;

- (NSString *)getActual;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalReportingSmartPrinter *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalReportingSmartPrinter_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalReportingSmartPrinter, wanted_, NSString *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalReportingSmartPrinter, actual_, NSString *)

#endif // _OrgMockitoInternalReportingSmartPrinter_H_
