//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IOSHardware : NSObject
{
}

+ (_Bool)isBackCamera:(const char *)arg1;
+ (_Bool)isFrontCamera:(const char *)arg1;
+ (struct MSVideoSize)HDVideoSize:(const char *)arg1;
+ (_Bool)isHDVideoCapable;
+ (_Bool)isHDVideoCapableDevice:(id)arg1;
+ (id)platform;

@end

