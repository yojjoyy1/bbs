//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "SWRevealViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class NSMutableDictionary, NSString, UIViewController;

@interface RevealViewTabBarVC : UITabBarController <SWRevealViewControllerDelegate, UIGestureRecognizerDelegate, UITabBarControllerDelegate>
{
    NSMutableDictionary *_dic;
    UIViewController *_vc;
    UITabBarController *_tabvc;
}

@property(retain, nonatomic) UITabBarController *tabvc; // @synthesize tabvc=_tabvc;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void)system_maintenance:(id)arg1;
- (void)OVERPWERROR_FAILED:(id)arg1;
- (void)OVERPWERROR_SUCCESS:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)revealController:(id)arg1 didMoveToPosition:(long long)arg2;
- (void)revealController:(id)arg1 willMoveToPosition:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

