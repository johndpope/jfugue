//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/LessOrEqual.java
//

#ifndef _OrgMockitoInternalMatchersLessOrEqual_H_
#define _OrgMockitoInternalMatchersLessOrEqual_H_

@protocol JavaLangComparable;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

#define OrgMockitoInternalMatchersLessOrEqual_serialVersionUID -6648773374429103565LL

@interface OrgMockitoInternalMatchersLessOrEqual : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable > {
}

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersLessOrEqual_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersLessOrEqual, serialVersionUID, jlong)

#endif // _OrgMockitoInternalMatchersLessOrEqual_H_
