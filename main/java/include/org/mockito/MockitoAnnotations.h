//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/MockitoAnnotations.java
//

#ifndef _OrgMockitoMockitoAnnotations_H_
#define _OrgMockitoMockitoAnnotations_H_

@class IOSClass;
@class JavaLangReflectField;
@protocol OrgMockitoConfigurationAnnotationEngine;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@interface OrgMockitoMockitoAnnotations : NSObject {
}

+ (void)initMocksWithId:(id)testClass OBJC_METHOD_FAMILY_NONE;

+ (void)scanDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine:(id<OrgMockitoConfigurationAnnotationEngine>)annotationEngine
                                                              withId:(id)testClass
                                                        withIOSClass:(IOSClass *)clazz;

+ (void)processAnnotationDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine:(id<OrgMockitoConfigurationAnnotationEngine>)annotationEngine
                                                                           withId:(id)testClass
                                                         withJavaLangReflectField:(JavaLangReflectField *)field;

+ (void)throwIfAlreadyAssignedWithJavaLangReflectField:(JavaLangReflectField *)field
                                           withBoolean:(jboolean)alreadyAssigned;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoMockitoAnnotations_init() {}
FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_initMocksWithId_(id testClass);
FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_scanDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine_withId_withIOSClass_(id<OrgMockitoConfigurationAnnotationEngine> annotationEngine, id testClass, IOSClass *clazz);
FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_processAnnotationDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine_withId_withJavaLangReflectField_(id<OrgMockitoConfigurationAnnotationEngine> annotationEngine, id testClass, JavaLangReflectField *field);
FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_throwIfAlreadyAssignedWithJavaLangReflectField_withBoolean_(JavaLangReflectField *field, jboolean alreadyAssigned);

@protocol OrgMockitoMockitoAnnotations_Mock < JavaLangAnnotationAnnotation >

@end

@interface OrgMockitoMockitoAnnotations_Mock : NSObject < OrgMockitoMockitoAnnotations_Mock >

@end

__attribute__((always_inline)) inline void OrgMockitoMockitoAnnotations_Mock_init() {}

#endif // _OrgMockitoMockitoAnnotations_H_
