//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/VoidMethodStubbable.java
//

#ifndef _OrgMockitoStubbingVoidMethodStubbable_H_
#define _OrgMockitoStubbingVoidMethodStubbable_H_

@class JavaLangThrowable;
@protocol OrgMockitoStubbingAnswer;

#import "JreEmulation.h"

@protocol OrgMockitoStubbingVoidMethodStubbable < NSObject, JavaObject >

- (id<OrgMockitoStubbingVoidMethodStubbable>)toThrowWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toReturn;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id)on;

@end

__attribute__((always_inline)) inline void OrgMockitoStubbingVoidMethodStubbable_init() {}

#endif // _OrgMockitoStubbingVoidMethodStubbable_H_
