//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ResourceBundle.java
//

#ifndef _JavaUtilResourceBundle_H_
#define _JavaUtilResourceBundle_H_

@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaUtilHashtable;
@class JavaUtilLocale;
@class JavaUtilMissingResourceException;
@class JavaUtilResourceBundle_Control;
@class JavaUtilWeakHashMap;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;
@protocol JavaUtilSet;

#import "JreEmulation.h"

@interface JavaUtilResourceBundle : NSObject {
 @public
  JavaUtilResourceBundle *parent_;
}

- (instancetype)init;

+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)bundleName;

+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)bundleName
                               withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)bundleName
                               withJavaUtilLocale:(JavaUtilLocale *)locale
                          withJavaLangClassLoader:(JavaLangClassLoader *)loader;

+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)baseName
               withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control;

+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)targetLocale
               withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control;

+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)targetLocale
                          withJavaLangClassLoader:(JavaLangClassLoader *)loader
               withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control;

- (id<JavaUtilEnumeration>)getKeys;

- (JavaUtilLocale *)getLocale;

- (id)getObjectWithNSString:(NSString *)key;

- (NSString *)getStringWithNSString:(NSString *)key;

- (IOSObjectArray *)getStringArrayWithNSString:(NSString *)key;

- (id)handleGetObjectWithNSString:(NSString *)key;

- (void)setParentWithJavaUtilResourceBundle:(JavaUtilResourceBundle *)bundle;

+ (void)clearCache;

+ (void)clearCacheWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

- (jboolean)containsKeyWithNSString:(NSString *)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)handleKeySet;

@end

FOUNDATION_EXPORT BOOL JavaUtilResourceBundle_initialized;
J2OBJC_STATIC_INIT(JavaUtilResourceBundle)

J2OBJC_FIELD_SETTER(JavaUtilResourceBundle, parent_, JavaUtilResourceBundle *)
FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_getBundleWithNSString_(NSString *bundleName);
FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_getBundleWithNSString_withJavaUtilLocale_(NSString *bundleName, JavaUtilLocale *locale);
FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_getBundleWithNSString_withJavaUtilLocale_withJavaLangClassLoader_(NSString *bundleName, JavaUtilLocale *locale, JavaLangClassLoader *loader);
FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_getBundleWithNSString_withJavaUtilResourceBundle_Control_(NSString *baseName, JavaUtilResourceBundle_Control *control);
FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_getBundleWithNSString_withJavaUtilLocale_withJavaUtilResourceBundle_Control_(NSString *baseName, JavaUtilLocale *targetLocale, JavaUtilResourceBundle_Control *control);
FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_getBundleWithNSString_withJavaUtilLocale_withJavaLangClassLoader_withJavaUtilResourceBundle_Control_(NSString *baseName, JavaUtilLocale *targetLocale, JavaLangClassLoader *loader, JavaUtilResourceBundle_Control *control);
FOUNDATION_EXPORT void JavaUtilResourceBundle_clearCache();
FOUNDATION_EXPORT void JavaUtilResourceBundle_clearCacheWithJavaLangClassLoader_(JavaLangClassLoader *loader);

FOUNDATION_EXPORT NSString *JavaUtilResourceBundle_UNDER_SCORE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle, UNDER_SCORE_, NSString *)

FOUNDATION_EXPORT NSString *JavaUtilResourceBundle_EMPTY_STRING_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle, EMPTY_STRING_, NSString *)

FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_MISSING_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle, MISSING_, JavaUtilResourceBundle *)

FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilResourceBundle_MISSINGBASE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle, MISSINGBASE_, JavaUtilResourceBundle *)

FOUNDATION_EXPORT JavaUtilWeakHashMap *JavaUtilResourceBundle_cache_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle, cache_, JavaUtilWeakHashMap *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilResourceBundle_cacheLocale_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle, cacheLocale_, JavaUtilLocale *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilResourceBundle, cacheLocale_, JavaUtilLocale *)

@interface JavaUtilResourceBundle_MissingBundle : JavaUtilResourceBundle {
}

- (id<JavaUtilEnumeration>)getKeys;

- (id)handleGetObjectWithNSString:(NSString *)name;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaUtilResourceBundle_MissingBundle_init() {}

#define JavaUtilResourceBundle_Control_TTL_DONT_CACHE -1LL
#define JavaUtilResourceBundle_Control_TTL_NO_EXPIRATION_CONTROL -2LL

@interface JavaUtilResourceBundle_Control : NSObject {
 @public
  id<JavaUtilList> format_;
}

- (instancetype)init;

+ (JavaUtilResourceBundle_Control *)getControlWithJavaUtilList:(id<JavaUtilList>)formats;

+ (JavaUtilResourceBundle_Control *)getNoFallbackControlWithJavaUtilList:(id<JavaUtilList>)formats;

- (id<JavaUtilList>)getCandidateLocalesWithNSString:(NSString *)baseName
                                 withJavaUtilLocale:(JavaUtilLocale *)locale;

- (id<JavaUtilList>)getFormatsWithNSString:(NSString *)baseName;

- (JavaUtilLocale *)getFallbackLocaleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)locale;

- (JavaUtilResourceBundle *)newBundleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)locale
                                     withNSString:(NSString *)format
                          withJavaLangClassLoader:(JavaLangClassLoader *)loader
                                      withBoolean:(jboolean)reload OBJC_METHOD_FAMILY_NONE;

- (jlong)getTimeToLiveWithNSString:(NSString *)baseName
                withJavaUtilLocale:(JavaUtilLocale *)locale;

- (jboolean)needsReloadWithNSString:(NSString *)baseName
                 withJavaUtilLocale:(JavaUtilLocale *)locale
                       withNSString:(NSString *)format
            withJavaLangClassLoader:(JavaLangClassLoader *)loader
         withJavaUtilResourceBundle:(JavaUtilResourceBundle *)bundle
                           withLong:(jlong)loadTime;

- (NSString *)toBundleNameWithNSString:(NSString *)baseName
                    withJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)toResourceNameWithNSString:(NSString *)bundleName
                            withNSString:(NSString *)suffix;

@end

FOUNDATION_EXPORT BOOL JavaUtilResourceBundle_Control_initialized;
J2OBJC_STATIC_INIT(JavaUtilResourceBundle_Control)

J2OBJC_FIELD_SETTER(JavaUtilResourceBundle_Control, format_, id<JavaUtilList>)
FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_Control_getControlWithJavaUtilList_(id<JavaUtilList> formats);
FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_Control_getNoFallbackControlWithJavaUtilList_(id<JavaUtilList> formats);

FOUNDATION_EXPORT id<JavaUtilList> JavaUtilResourceBundle_Control_listDefault_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, listDefault_, id<JavaUtilList>)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilResourceBundle_Control, listDefault_, id<JavaUtilList>)

FOUNDATION_EXPORT id<JavaUtilList> JavaUtilResourceBundle_Control_listClass_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, listClass_, id<JavaUtilList>)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilResourceBundle_Control, listClass_, id<JavaUtilList>)

FOUNDATION_EXPORT id<JavaUtilList> JavaUtilResourceBundle_Control_listProperties_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, listProperties_, id<JavaUtilList>)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilResourceBundle_Control, listProperties_, id<JavaUtilList>)

FOUNDATION_EXPORT NSString *JavaUtilResourceBundle_Control_JAVACLASS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, JAVACLASS_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilResourceBundle_Control, JAVACLASS_, NSString *)

FOUNDATION_EXPORT NSString *JavaUtilResourceBundle_Control_JAVAPROPERTIES_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, JAVAPROPERTIES_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilResourceBundle_Control, JAVAPROPERTIES_, NSString *)

FOUNDATION_EXPORT id<JavaUtilList> JavaUtilResourceBundle_Control_FORMAT_DEFAULT_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, FORMAT_DEFAULT_, id<JavaUtilList>)

FOUNDATION_EXPORT id<JavaUtilList> JavaUtilResourceBundle_Control_FORMAT_CLASS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, FORMAT_CLASS_, id<JavaUtilList>)

FOUNDATION_EXPORT id<JavaUtilList> JavaUtilResourceBundle_Control_FORMAT_PROPERTIES_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, FORMAT_PROPERTIES_, id<JavaUtilList>)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, TTL_DONT_CACHE, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, TTL_NO_EXPIRATION_CONTROL, jlong)

FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_Control_FORMAT_PROPERTIES_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, FORMAT_PROPERTIES_CONTROL_, JavaUtilResourceBundle_Control *)

FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_Control_FORMAT_CLASS_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, FORMAT_CLASS_CONTROL_, JavaUtilResourceBundle_Control *)

FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_Control_FORMAT_DEFAULT_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_Control, FORMAT_DEFAULT_CONTROL_, JavaUtilResourceBundle_Control *)

@interface JavaUtilResourceBundle_NoFallbackControl : JavaUtilResourceBundle_Control {
}

- (instancetype)initWithNSString:(NSString *)format;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)list;

- (JavaUtilLocale *)getFallbackLocaleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)locale;

@end

FOUNDATION_EXPORT BOOL JavaUtilResourceBundle_NoFallbackControl_initialized;
J2OBJC_STATIC_INIT(JavaUtilResourceBundle_NoFallbackControl)

FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_NoFallbackControl_NOFALLBACK_FORMAT_PROPERTIES_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_NoFallbackControl, NOFALLBACK_FORMAT_PROPERTIES_CONTROL_, JavaUtilResourceBundle_Control *)

FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_NoFallbackControl_NOFALLBACK_FORMAT_CLASS_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_NoFallbackControl, NOFALLBACK_FORMAT_CLASS_CONTROL_, JavaUtilResourceBundle_Control *)

FOUNDATION_EXPORT JavaUtilResourceBundle_Control *JavaUtilResourceBundle_NoFallbackControl_NOFALLBACK_FORMAT_DEFAULT_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilResourceBundle_NoFallbackControl, NOFALLBACK_FORMAT_DEFAULT_CONTROL_, JavaUtilResourceBundle_Control *)

@interface JavaUtilResourceBundle_SimpleControl : JavaUtilResourceBundle_Control {
}

- (instancetype)initWithNSString:(NSString *)format;

@end

__attribute__((always_inline)) inline void JavaUtilResourceBundle_SimpleControl_init() {}

#endif // _JavaUtilResourceBundle_H_
