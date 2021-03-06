//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/ConstructorInjection.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionConstructorInjection_H_
#define _OrgMockitoInternalConfigurationInjectionConstructorInjection_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectField;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "org/mockito/internal/configuration/injection/MockInjectionStrategy.h"
#include "org/mockito/internal/util/reflection/FieldInitializer.h"

@interface OrgMockitoInternalConfigurationInjectionConstructorInjection : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy {
 @public
  id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver> argResolver_;
}

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)argResolver;

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalConfigurationInjectionConstructorInjection *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionConstructorInjection_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionConstructorInjection, argResolver_, id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)

@interface OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver > {
 @public
  id<JavaUtilSet> objects_;
}

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)objects;

- (IOSObjectArray *)resolveTypeInstancesWithIOSClassArray:(IOSObjectArray *)argTypes;

- (id)objectThatIsAssignableFromWithIOSClass:(IOSClass *)argType;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver, objects_, id<JavaUtilSet>)

#endif // _OrgMockitoInternalConfigurationInjectionConstructorInjection_H_
