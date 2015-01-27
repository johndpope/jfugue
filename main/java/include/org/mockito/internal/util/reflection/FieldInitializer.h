//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldInitializer.java
//

#ifndef _OrgMockitoInternalUtilReflectionFieldInitializer_H_
#define _OrgMockitoInternalUtilReflectionFieldInitializer_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class JavaLangReflectField;
@class OrgMockitoInternalUtilReflectionFieldInitializationReport;
@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver;
@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator;

#import "JreEmulation.h"
#include "java/util/Comparator.h"

@interface OrgMockitoInternalUtilReflectionFieldInitializer : NSObject {
 @public
  id fieldOwner_;
  JavaLangReflectField *field_;
  id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator> instantiator_;
}

- (instancetype)initWithId:(id)fieldOwner
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (instancetype)initWithId:(id)fieldOwner
  withJavaLangReflectField:(JavaLangReflectField *)field
withOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)argResolver;

- (instancetype)initWithId:(id)fieldOwner
  withJavaLangReflectField:(JavaLangReflectField *)field
withOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator>)instantiator;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)initialize__ OBJC_METHOD_FAMILY_NONE;

- (void)checkNotLocalWithJavaLangReflectField:(JavaLangReflectField *)field;

- (void)checkNotInnerWithJavaLangReflectField:(JavaLangReflectField *)field;

- (void)checkNotInterfaceWithJavaLangReflectField:(JavaLangReflectField *)field;

- (void)checkNotAbstractWithJavaLangReflectField:(JavaLangReflectField *)field;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)acquireFieldInstance;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilReflectionFieldInitializer *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializer_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer, fieldOwner_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer, field_, JavaLangReflectField *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer, instantiator_, id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator>)

@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver < NSObject, JavaObject >

- (IOSObjectArray *)resolveTypeInstancesWithIOSClassArray:(IOSObjectArray *)argTypes;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver_init() {}

@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator < NSObject, JavaObject >

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)instantiate;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator_init() {}

@interface OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator > {
 @public
  id testClass_;
  JavaLangReflectField *field_;
}

- (instancetype)initWithId:(id)testClass
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)instantiate;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator, testClass_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator, field_, JavaLangReflectField *)

@interface OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator > {
 @public
  id testClass_;
  JavaLangReflectField *field_;
  id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver> argResolver_;
  id<JavaUtilComparator> byParameterNumber_;
}

- (instancetype)initWithId:(id)testClass
  withJavaLangReflectField:(JavaLangReflectField *)field
withOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)argumentResolver;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)instantiate;

- (void)checkParameterizedWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor
                                withJavaLangReflectField:(JavaLangReflectField *)field;

- (JavaLangReflectConstructor *)biggestConstructorWithIOSClass:(IOSClass *)clazz;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator, testClass_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator, field_, JavaLangReflectField *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator, argResolver_, id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator, byParameterNumber_, id<JavaUtilComparator>)

@interface OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(JavaLangReflectConstructor *)constructorA
               withId:(JavaLangReflectConstructor *)constructorB;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator_$1_init() {}

#endif // _OrgMockitoInternalUtilReflectionFieldInitializer_H_