//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "NSCopying.h"

@class JavaUtilCurrency, JavaUtilLocale, NSString;

@interface JavaTextDecimalFormatSymbols : NSObject <NSCopying, JavaIoSerializable>
{
    unsigned short zeroDigit_;
    unsigned short digit_;
    unsigned short decimalSeparator_;
    unsigned short groupingSeparator_;
    unsigned short patternSeparator_;
    unsigned short percent_;
    unsigned short perMill_;
    unsigned short monetarySeparator_;
    unsigned short minusSign_;
    NSString *infinity_;
    NSString *NaN_;
    NSString *currencySymbol_;
    NSString *intlCurrencySymbol_;
    JavaUtilCurrency *currency_;
    JavaUtilLocale *locale_;
    NSString *exponentSeparator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getAvailableLocales;
+ (id)getInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getInstance;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)setExponentSeparatorWithNSString:(id)arg1;
- (void)setZeroDigitWithChar:(unsigned short)arg1;
- (void)setPerMillWithChar:(unsigned short)arg1;
- (void)setPercentWithChar:(unsigned short)arg1;
- (void)setPatternSeparatorWithChar:(unsigned short)arg1;
- (void)setNaNWithNSString:(id)arg1;
- (void)setMonetaryDecimalSeparatorWithChar:(unsigned short)arg1;
- (void)setMinusSignWithChar:(unsigned short)arg1;
- (void)setInfinityWithNSString:(id)arg1;
- (void)setGroupingSeparatorWithChar:(unsigned short)arg1;
- (void)setDigitWithChar:(unsigned short)arg1;
- (void)setDecimalSeparatorWithChar:(unsigned short)arg1;
- (void)setCurrencySymbolWithNSString:(id)arg1;
- (void)setInternationalCurrencySymbolWithNSString:(id)arg1;
- (void)setCurrencyWithJavaUtilCurrency:(id)arg1;
- (unsigned long long)hash;
- (id)getExponentSeparator;
- (unsigned short)getZeroDigit;
- (unsigned short)getPerMill;
- (unsigned short)getPercent;
- (unsigned short)getPatternSeparator;
- (id)getNaN;
- (unsigned short)getMonetaryDecimalSeparator;
- (unsigned short)getMinusSign;
- (id)getInfinity;
- (unsigned short)getGroupingSeparator;
- (unsigned short)getDigit;
- (unsigned short)getDecimalSeparator;
- (id)getCurrencySymbol;
- (id)getInternationalCurrencySymbol;
- (id)getCurrency;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)clone;
- (id)initWithJavaUtilLocale:(id)arg1;
- (id)initJavaTextDecimalFormatSymbolsWithJavaUtilLocale:(id)arg1;
- (id)init;

@end
