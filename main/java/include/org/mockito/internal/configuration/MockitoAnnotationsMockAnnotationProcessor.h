//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/MockitoAnnotationsMockAnnotationProcessor.java
//

#ifndef _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_
#define _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_

@class JavaLangReflectField;
@protocol OrgMockitoMockitoAnnotations_Mock;

#import "JreEmulation.h"
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@interface OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor > {
}

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoMockitoAnnotations_Mock>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_init() {}

#endif // _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_
