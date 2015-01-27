//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLConnection.java
//

#ifndef _JavaNetURLConnection_H_
#define _JavaNetURLConnection_H_

@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetURL;
@class JavaSecurityPermission;
@class JavaUtilHashtable;
@protocol JavaNetContentHandlerFactory;
@protocol JavaNetFileNameMap;
@protocol JavaUtilMap;

#import "JreEmulation.h"
#include "java/net/ContentHandler.h"

@interface JavaNetURLConnection : NSObject {
 @public
  JavaNetURL *url_;
  JavaNetContentHandler *defaultHandler_;
  jlong ifModifiedSince_;
  jboolean useCaches_;
  jboolean connected_;
  jboolean doOutput_;
  jboolean doInput_;
  jboolean allowUserInteraction_;
}

- (instancetype)initWithJavaNetURL:(JavaNetURL *)url;

- (void)connect;

- (jboolean)getAllowUserInteraction;

- (id)getContent;

- (id)getContentWithIOSClassArray:(IOSObjectArray *)types;

- (NSString *)getContentEncoding;

- (jint)getContentLength;

- (jlong)getContentLengthLong;

- (NSString *)getContentType;

- (jlong)getDate;

+ (jboolean)getDefaultAllowUserInteraction;

+ (NSString *)getDefaultRequestPropertyWithNSString:(NSString *)field;

- (jboolean)getDefaultUseCaches;

- (jboolean)getDoInput;

- (jboolean)getDoOutput;

- (jlong)getExpiration;

+ (id<JavaNetFileNameMap>)getFileNameMap;

- (NSString *)getHeaderFieldWithInt:(jint)pos;

- (id<JavaUtilMap>)getHeaderFields;

- (id<JavaUtilMap>)getRequestProperties;

- (void)addRequestPropertyWithNSString:(NSString *)field
                          withNSString:(NSString *)newValue;

- (NSString *)getHeaderFieldWithNSString:(NSString *)key;

- (jlong)getHeaderFieldDateWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

- (jint)getHeaderFieldIntWithNSString:(NSString *)field
                              withInt:(jint)defaultValue;

- (jlong)getHeaderFieldLongWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

- (NSString *)getHeaderFieldKeyWithInt:(jint)posn;

- (jlong)getIfModifiedSince;

- (JavaIoInputStream *)getInputStream;

- (jlong)getLastModified;

- (JavaIoOutputStream *)getOutputStream;

- (JavaSecurityPermission *)getPermission;

- (NSString *)getRequestPropertyWithNSString:(NSString *)field;

- (JavaNetURL *)getURL;

- (jboolean)getUseCaches;

+ (NSString *)guessContentTypeFromNameWithNSString:(NSString *)url;

+ (NSString *)guessContentTypeFromStreamWithJavaIoInputStream:(JavaIoInputStream *)is;

- (void)setAllowUserInteractionWithBoolean:(jboolean)newValue;

+ (void)setContentHandlerFactoryWithJavaNetContentHandlerFactory:(id<JavaNetContentHandlerFactory>)contentFactory;

+ (void)setDefaultAllowUserInteractionWithBoolean:(jboolean)allows;

+ (void)setDefaultRequestPropertyWithNSString:(NSString *)field
                                 withNSString:(NSString *)value;

- (void)setDefaultUseCachesWithBoolean:(jboolean)newValue;

- (void)setDoInputWithBoolean:(jboolean)newValue;

- (void)setDoOutputWithBoolean:(jboolean)newValue;

+ (void)setFileNameMapWithJavaNetFileNameMap:(id<JavaNetFileNameMap>)map;

- (void)setIfModifiedSinceWithLong:(jlong)newValue;

- (void)setRequestPropertyWithNSString:(NSString *)field
                          withNSString:(NSString *)newValue;

- (void)setUseCachesWithBoolean:(jboolean)newValue;

- (void)setConnectTimeoutWithInt:(jint)timeoutMillis;

- (jint)getConnectTimeout;

- (void)setReadTimeoutWithInt:(jint)timeoutMillis;

- (jint)getReadTimeout;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL JavaNetURLConnection_initialized;
J2OBJC_STATIC_INIT(JavaNetURLConnection)

J2OBJC_FIELD_SETTER(JavaNetURLConnection, url_, JavaNetURL *)
J2OBJC_FIELD_SETTER(JavaNetURLConnection, defaultHandler_, JavaNetContentHandler *)
FOUNDATION_EXPORT jboolean JavaNetURLConnection_getDefaultAllowUserInteraction();
FOUNDATION_EXPORT NSString *JavaNetURLConnection_getDefaultRequestPropertyWithNSString_(NSString *field);
FOUNDATION_EXPORT id<JavaNetFileNameMap> JavaNetURLConnection_getFileNameMap();
FOUNDATION_EXPORT NSString *JavaNetURLConnection_guessContentTypeFromNameWithNSString_(NSString *url);
FOUNDATION_EXPORT NSString *JavaNetURLConnection_guessContentTypeFromStreamWithJavaIoInputStream_(JavaIoInputStream *is);
FOUNDATION_EXPORT void JavaNetURLConnection_setContentHandlerFactoryWithJavaNetContentHandlerFactory_(id<JavaNetContentHandlerFactory> contentFactory);
FOUNDATION_EXPORT void JavaNetURLConnection_setDefaultAllowUserInteractionWithBoolean_(jboolean allows);
FOUNDATION_EXPORT void JavaNetURLConnection_setDefaultRequestPropertyWithNSString_withNSString_(NSString *field, NSString *value);
FOUNDATION_EXPORT void JavaNetURLConnection_setFileNameMapWithJavaNetFileNameMap_(id<JavaNetFileNameMap> map);

FOUNDATION_EXPORT jboolean JavaNetURLConnection_defaultAllowUserInteraction_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURLConnection, defaultAllowUserInteraction_, jboolean)
J2OBJC_STATIC_FIELD_REF_GETTER(JavaNetURLConnection, defaultAllowUserInteraction_, jboolean)

FOUNDATION_EXPORT jboolean JavaNetURLConnection_defaultUseCaches_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURLConnection, defaultUseCaches_, jboolean)
J2OBJC_STATIC_FIELD_REF_GETTER(JavaNetURLConnection, defaultUseCaches_, jboolean)

FOUNDATION_EXPORT id<JavaNetContentHandlerFactory> JavaNetURLConnection_contentHandlerFactory_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURLConnection, contentHandlerFactory_, id<JavaNetContentHandlerFactory>)
J2OBJC_STATIC_FIELD_SETTER(JavaNetURLConnection, contentHandlerFactory_, id<JavaNetContentHandlerFactory>)

FOUNDATION_EXPORT JavaUtilHashtable *JavaNetURLConnection_contentHandlers_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURLConnection, contentHandlers_, JavaUtilHashtable *)
J2OBJC_STATIC_FIELD_SETTER(JavaNetURLConnection, contentHandlers_, JavaUtilHashtable *)

FOUNDATION_EXPORT id<JavaNetFileNameMap> JavaNetURLConnection_fileNameMap_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURLConnection, fileNameMap_, id<JavaNetFileNameMap>)
J2OBJC_STATIC_FIELD_SETTER(JavaNetURLConnection, fileNameMap_, id<JavaNetFileNameMap>)

@interface JavaNetURLConnection_DefaultContentHandler : JavaNetContentHandler {
}

- (id)getContentWithJavaNetURLConnection:(JavaNetURLConnection *)u;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaNetURLConnection_DefaultContentHandler_init() {}

#endif // _JavaNetURLConnection_H_
