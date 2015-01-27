//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DecimalFormatSymbols.java
//

#ifndef _JavaTextDecimalFormatSymbols_H_
#define _JavaTextDecimalFormatSymbols_H_

@class IOSObjectArray;
@class JavaUtilCurrency;
@class JavaUtilLocale;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaTextDecimalFormatSymbols_serialVersionUID 5772796243397350300LL

@interface JavaTextDecimalFormatSymbols : NSObject < NSCopying, JavaIoSerializable > {
}

- (instancetype)init;

- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

+ (JavaTextDecimalFormatSymbols *)getInstance;

+ (JavaTextDecimalFormatSymbols *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

+ (IOSObjectArray *)getAvailableLocales;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (NSString *)description;

- (JavaUtilCurrency *)getCurrency;

- (NSString *)getInternationalCurrencySymbol;

- (NSString *)getCurrencySymbol;

- (jchar)getDecimalSeparator;

- (jchar)getDigit;

- (jchar)getGroupingSeparator;

- (NSString *)getInfinity;

- (jchar)getMinusSign;

- (jchar)getMonetaryDecimalSeparator;

- (NSString *)getNaN;

- (jchar)getPatternSeparator;

- (jchar)getPercent;

- (jchar)getPerMill;

- (jchar)getZeroDigit;

- (NSString *)getExponentSeparator;

- (NSUInteger)hash;

- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

- (void)setInternationalCurrencySymbolWithNSString:(NSString *)value;

- (void)setCurrencySymbolWithNSString:(NSString *)value;

- (void)setDecimalSeparatorWithChar:(jchar)value;

- (void)setDigitWithChar:(jchar)value;

- (void)setGroupingSeparatorWithChar:(jchar)value;

- (void)setInfinityWithNSString:(NSString *)value;

- (void)setMinusSignWithChar:(jchar)value;

- (void)setMonetaryDecimalSeparatorWithChar:(jchar)value;

- (void)setNaNWithNSString:(NSString *)value;

- (void)setPatternSeparatorWithChar:(jchar)value;

- (void)setPercentWithChar:(jchar)value;

- (void)setPerMillWithChar:(jchar)value;

- (void)setZeroDigitWithChar:(jchar)value;

- (void)setExponentSeparatorWithNSString:(NSString *)value;

@end

__attribute__((always_inline)) inline void JavaTextDecimalFormatSymbols_init() {}
FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *JavaTextDecimalFormatSymbols_getInstance();
FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *JavaTextDecimalFormatSymbols_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);
FOUNDATION_EXPORT IOSObjectArray *JavaTextDecimalFormatSymbols_getAvailableLocales();

J2OBJC_STATIC_FIELD_GETTER(JavaTextDecimalFormatSymbols, serialVersionUID, jlong)

#endif // _JavaTextDecimalFormatSymbols_H_
