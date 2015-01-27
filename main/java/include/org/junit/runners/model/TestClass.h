//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/runners/model/TestClass.java
//

#ifndef _OrgJunitRunnersModelTestClass_H_
#define _OrgJunitRunnersModelTestClass_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class OrgJunitRunnersModelFrameworkMember;
@protocol JavaUtilList;
@protocol JavaUtilMap;

#import "JreEmulation.h"

@interface OrgJunitRunnersModelTestClass : NSObject {
 @public
  IOSClass *fClass_;
  id<JavaUtilMap> fMethodsForAnnotations_;
  id<JavaUtilMap> fFieldsForAnnotations_;
}

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (void)addToAnnotationListsWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMember *)member
                                                    withJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilList>)getAnnotatedMethodsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedFieldsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedMembersWithJavaUtilMap:(id<JavaUtilMap>)map
                                          withIOSClass:(IOSClass *)type;

- (jboolean)runsTopToBottomWithIOSClass:(IOSClass *)annotation;

- (id<JavaUtilList>)getSuperClassesWithIOSClass:(IOSClass *)testClass;

- (IOSClass *)getJavaClass;

- (NSString *)getName;

- (JavaLangReflectConstructor *)getOnlyConstructor;

- (IOSObjectArray *)getAnnotations;

- (id<JavaUtilList>)getAnnotatedFieldValuesWithId:(id)test
                                     withIOSClass:(IOSClass *)annotationClass
                                     withIOSClass:(IOSClass *)valueClass;

- (jboolean)isANonStaticInnerClass;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersModelTestClass *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersModelTestClass_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelTestClass, fClass_, IOSClass *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersModelTestClass, fMethodsForAnnotations_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(OrgJunitRunnersModelTestClass, fFieldsForAnnotations_, id<JavaUtilMap>)

#endif // _OrgJunitRunnersModelTestClass_H_
