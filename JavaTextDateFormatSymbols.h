//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "NSCopying.h"

@class IOSObjectArray, JavaUtilLocale, LibcoreIcuLocaleData, NSString;

@interface JavaTextDateFormatSymbols : NSObject <JavaIoSerializable, NSCopying>
{
    IOSObjectArray *ampms_;
    IOSObjectArray *eras_;
    IOSObjectArray *months_;
    IOSObjectArray *shortMonths_;
    IOSObjectArray *shortWeekdays_;
    IOSObjectArray *weekdays_;
    LibcoreIcuLocaleData *localeData_;
    IOSObjectArray *zoneStrings_;
    _Bool customZoneStrings_;
    JavaUtilLocale *locale_;
    NSString *localPatternChars_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)clone2dStringArrayWithNSStringArray2:(id)arg1;
+ (_Bool)timeZoneStringsEqualWithJavaTextDateFormatSymbols:(id)arg1 withJavaTextDateFormatSymbols:(id)arg2;
+ (id)getAvailableLocales;
+ (id)getInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getInstance;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getTimeZoneDisplayNameWithJavaUtilTimeZone:(id)arg1 withBoolean:(_Bool)arg2 withInt:(int)arg3;
- (void)setZoneStringsWithNSStringArray2:(id)arg1;
- (void)setWeekdaysWithNSStringArray:(id)arg1;
- (void)setShortWeekdaysWithNSStringArray:(id)arg1;
- (void)setShortMonthsWithNSStringArray:(id)arg1;
- (void)setMonthsWithNSStringArray:(id)arg1;
- (void)setLocalPatternCharsWithNSString:(id)arg1;
- (void)setErasWithNSStringArray:(id)arg1;
- (void)setAmPmStringsWithNSStringArray:(id)arg1;
- (unsigned long long)hash;
- (id)getZoneStrings;
- (id)getWeekdays;
- (id)getShortWeekdays;
- (id)getShortMonths;
- (id)getMonths;
- (id)getLocalPatternChars;
- (id)getEras;
- (id)getAmPmStrings;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)clone;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (id)initWithJavaUtilLocale:(id)arg1;
- (id)initJavaTextDateFormatSymbolsWithJavaUtilLocale:(id)arg1;
- (id)init;
- (id)internalZoneStrings;

@end

