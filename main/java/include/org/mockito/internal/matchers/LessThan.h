//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/LessThan.java
//

#ifndef _OrgMockitoInternalMatchersLessThan_H_
#define _OrgMockitoInternalMatchersLessThan_H_

@protocol JavaLangComparable;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

#define OrgMockitoInternalMatchersLessThan_serialVersionUID -133860804462310942LL

@interface OrgMockitoInternalMatchersLessThan : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable > {
}

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersLessThan_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersLessThan, serialVersionUID, jlong)

#endif // _OrgMockitoInternalMatchersLessThan_H_
