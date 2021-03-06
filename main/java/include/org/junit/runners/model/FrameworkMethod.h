//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/runners/model/FrameworkMethod.java
//

#ifndef _OrgJunitRunnersModelFrameworkMethod_H_
#define _OrgJunitRunnersModelFrameworkMethod_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaLangReflectType;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "org/junit/internal/runners/model/ReflectiveCallable.h"
#include "org/junit/runners/model/FrameworkMember.h"

@interface OrgJunitRunnersModelFrameworkMethod : OrgJunitRunnersModelFrameworkMember {
 @public
  JavaLangReflectMethod *fMethod_;
}

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (JavaLangReflectMethod *)getMethod;

- (id)invokeExplosivelyWithId:(id)target
            withNSObjectArray:(IOSObjectArray *)params;

- (NSString *)getName;

- (void)validatePublicVoidNoArgWithBoolean:(jboolean)isStatic
                          withJavaUtilList:(id<JavaUtilList>)errors;

- (void)validatePublicVoidWithBoolean:(jboolean)isStatic
                     withJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateNoTypeParametersOnArgsWithJavaUtilList:(id<JavaUtilList>)errors;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMethod *)other;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (jboolean)producesTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (IOSObjectArray *)getParameterTypes;

- (IOSObjectArray *)getAnnotations;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersModelFrameworkMethod *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersModelFrameworkMethod_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelFrameworkMethod, fMethod_, JavaLangReflectMethod *)

@interface OrgJunitRunnersModelFrameworkMethod_$1 : OrgJunitInternalRunnersModelReflectiveCallable {
 @public
  OrgJunitRunnersModelFrameworkMethod *this$0_;
  id val$target_;
  IOSObjectArray *val$params_;
}

- (id)runReflectiveCall;

- (instancetype)initWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)outer$
                                                     withId:(id)capture$0
                                          withNSObjectArray:(IOSObjectArray *)capture$1;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersModelFrameworkMethod_$1 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersModelFrameworkMethod_$1_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelFrameworkMethod_$1, this$0_, OrgJunitRunnersModelFrameworkMethod *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersModelFrameworkMethod_$1, val$target_, id)
J2OBJC_FIELD_SETTER(OrgJunitRunnersModelFrameworkMethod_$1, val$params_, IOSObjectArray *)

#endif // _OrgJunitRunnersModelFrameworkMethod_H_
