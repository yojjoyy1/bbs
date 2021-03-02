//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "EWalletUtilsDelegate.h"
#import "WKNavigationDelegate.h"

@class APIDataManager, NSString, UIButton, UILabel, UIView, WKWebView;

@interface BonusPrivacyViewController : MajorViewController <WKNavigationDelegate, EWalletUtilsDelegate>
{
    _Bool _agreeWhether;
    NSString *_pMaContent;
    NSString *_pMaId;
    NSString *_pMaURL;
    UIView *_bakeView;
    APIDataManager *_dataManager;
    WKWebView *_pMaContentWKWebView;
    UIButton *_agreeButton;
    UIButton *_consentButton;
    UILabel *_hyperlinkLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *hyperlinkLabel; // @synthesize hyperlinkLabel=_hyperlinkLabel;
@property(nonatomic) _Bool agreeWhether; // @synthesize agreeWhether=_agreeWhether;
@property(retain, nonatomic) UIButton *consentButton; // @synthesize consentButton=_consentButton;
@property(retain, nonatomic) UIButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(retain, nonatomic) WKWebView *pMaContentWKWebView; // @synthesize pMaContentWKWebView=_pMaContentWKWebView;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIView *bakeView; // @synthesize bakeView=_bakeView;
@property(retain, nonatomic) NSString *pMaURL; // @synthesize pMaURL=_pMaURL;
@property(retain, nonatomic) NSString *pMaId; // @synthesize pMaId=_pMaId;
@property(retain, nonatomic) NSString *pMaContent; // @synthesize pMaContent=_pMaContent;
- (void)clickurl1:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)system_maintenance:(id)arg1;
- (void)didGetActvPointUserFailed:(id)arg1;
- (void)didGetActvPointUserSuccess:(id)arg1;
- (void)triggerConsent:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)triggerAgree:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initPicture;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
