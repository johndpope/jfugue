//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/BeanPropertySetter.java
//

#ifndef _OrgMockitoInternalUtilReflectionBeanPropertySetter_H_
#define _OrgMockitoInternalUtilReflectionBeanPropertySetter_H_

@class JavaLangReflectField;

#import "JreEmulation.h"

@interface OrgMockitoInternalUtilReflectionBeanPropertySetter : NSObject {
 @public
  id target_;
  jboolean reportNoSetterFound__;
  JavaLangReflectField *field_;
}

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)propertyField
               withBoolean:(jboolean)reportNoSetterFound;

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)propertyField;

- (jboolean)setWithId:(id)value;

- (NSString *)setterNameWithNSString:(NSString *)fieldName;

- (void)reportNoSetterFound;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilReflectionBeanPropertySetter *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionBeanPropertySetter_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionBeanPropertySetter, target_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionBeanPropertySetter, field_, JavaLangReflectField *)

FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilReflectionBeanPropertySetter_SET_PREFIX_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalUtilReflectionBeanPropertySetter, SET_PREFIX_, NSString *)

#endif // _OrgMockitoInternalUtilReflectionBeanPropertySetter_H_
