//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/icu/LocaleData.java
//

#ifndef _LibcoreIcuLocaleData_H_
#define _LibcoreIcuLocaleData_H_

@class IOSObjectArray;
@class JavaLangInteger;
@class JavaUtilHashMap;
@class JavaUtilLocale;

#import "JreEmulation.h"

@interface LibcoreIcuLocaleData : NSObject {
 @public
  JavaLangInteger *firstDayOfWeek_;
  JavaLangInteger *minimalDaysInFirstWeek_;
  IOSObjectArray *amPm_;
  IOSObjectArray *eras_;
  IOSObjectArray *longMonthNames_;
  IOSObjectArray *shortMonthNames_;
  IOSObjectArray *tinyMonthNames_;
  IOSObjectArray *longStandAloneMonthNames_;
  IOSObjectArray *shortStandAloneMonthNames_;
  IOSObjectArray *tinyStandAloneMonthNames_;
  IOSObjectArray *longWeekdayNames_;
  IOSObjectArray *shortWeekdayNames_;
  IOSObjectArray *tinyWeekdayNames_;
  IOSObjectArray *longStandAloneWeekdayNames_;
  IOSObjectArray *shortStandAloneWeekdayNames_;
  IOSObjectArray *tinyStandAloneWeekdayNames_;
  NSString *yesterday_;
  NSString *today_;
  NSString *tomorrow_;
  NSString *fullTimeFormat_;
  NSString *longTimeFormat_;
  NSString *mediumTimeFormat_;
  NSString *shortTimeFormat_;
  NSString *fullDateFormat_;
  NSString *longDateFormat_;
  NSString *mediumDateFormat_;
  NSString *shortDateFormat_;
  jchar zeroDigit_;
  jchar decimalSeparator_;
  jchar groupingSeparator_;
  jchar patternSeparator_;
  jchar percent_;
  jchar perMill_;
  jchar monetarySeparator_;
  jchar minusSign_;
  NSString *exponentSeparator_;
  NSString *infinity_;
  NSString *NaN_;
  NSString *currencySymbol_;
  NSString *internationalCurrencySymbol_;
  NSString *numberPattern_;
  NSString *integerPattern_;
  NSString *currencyPattern_;
  NSString *percentPattern_;
}

+ (LibcoreIcuLocaleData *)getWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)description;

- (NSString *)getDateFormatWithInt:(jint)style;

- (NSString *)getTimeFormatWithInt:(jint)style;

@end

FOUNDATION_EXPORT BOOL LibcoreIcuLocaleData_initialized;
J2OBJC_STATIC_INIT(LibcoreIcuLocaleData)

J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, firstDayOfWeek_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, minimalDaysInFirstWeek_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, amPm_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, eras_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, longMonthNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, shortMonthNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, tinyMonthNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, longStandAloneMonthNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, shortStandAloneMonthNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, tinyStandAloneMonthNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, longWeekdayNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, shortWeekdayNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, tinyWeekdayNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, longStandAloneWeekdayNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, shortStandAloneWeekdayNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, tinyStandAloneWeekdayNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, yesterday_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, today_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, tomorrow_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, fullTimeFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, longTimeFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, mediumTimeFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, shortTimeFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, fullDateFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, longDateFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, mediumDateFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, shortDateFormat_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, exponentSeparator_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, infinity_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, NaN_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, currencySymbol_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, internationalCurrencySymbol_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, numberPattern_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, integerPattern_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, currencyPattern_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIcuLocaleData, percentPattern_, NSString *)
FOUNDATION_EXPORT LibcoreIcuLocaleData *LibcoreIcuLocaleData_getWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaUtilHashMap *LibcoreIcuLocaleData_localeDataCache_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuLocaleData, localeDataCache_, JavaUtilHashMap *)

#endif // _LibcoreIcuLocaleData_H_
