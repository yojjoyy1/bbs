//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaLangAbstractStringBuilder : NSObject
{
    struct JreStringBuilder delegate_;
}

+ (struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)offsetByCodePointsWithInt:(int)arg1 withInt:(int)arg2;
- (int)codePointCountWithInt:(int)arg1 withInt:(int)arg2;
- (int)codePointBeforeWithInt:(int)arg1;
- (int)codePointAtWithInt:(int)arg1;
- (void)trimToSize;
- (int)lastIndexOfWithNSString:(id)arg1 withInt:(int)arg2;
- (int)lastIndexOfWithNSString:(id)arg1;
- (int)indexOfWithNSString:(id)arg1 withInt:(int)arg2;
- (int)indexOfWithNSString:(id)arg1;
- (id)subSequenceWithInt:(int)arg1 withInt:(int)arg2;
- (id)description;
- (id)substringWithInt:(int)arg1 withInt:(int)arg2;
- (id)substringWithInt:(int)arg1;
- (void)setLengthWithInt:(int)arg1;
- (void)setCharAtWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (int)length;
- (void)getCharsWithInt:(int)arg1 withInt:(int)arg2 withCharArray:(id)arg3 withInt:(int)arg4;
- (void)ensureCapacityWithInt:(int)arg1;
- (unsigned short)charAtWithInt:(int)arg1;
- (int)capacity;
- (id)initWithNSString:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;
- (void)setWithCharArray:(id)arg1 withInt:(int)arg2;
- (id)getValue;

@end

