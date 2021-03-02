//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSCharArray : IOSArray
{
    unsigned short buffer_[0];
}

+ (id)iosClass;
+ (id)arrayWithNSString:(id)arg1;
+ (id)arrayWithChars:(const unsigned short *)arg1 count:(unsigned long long)arg2;
+ (id)newArrayWithChars:(const unsigned short *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithLength:(unsigned long long)arg1;
+ (id)newArrayWithLength:(unsigned long long)arg1;
- (id)elementType;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (void)getChars:(unsigned short *)arg1 length:(unsigned long long)arg2;
- (unsigned short)replaceCharAtIndex:(unsigned long long)arg1 withChar:(unsigned short)arg2;
- (unsigned short *)charRefAtIndex:(unsigned long long)arg1;
- (unsigned short)charAtIndex:(unsigned long long)arg1;

@end
