//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSTimer, UILocalNotification;

@interface LinphoneCallAppData : NSObject
{
    unsigned char batteryWarningShown;
    UILocalNotification *notification;
    NSMutableDictionary *userInfos;
    unsigned char videoRequested;
    NSTimer *timer;
}

- (id)init;

@end

