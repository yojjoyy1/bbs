//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "WKNavigationDelegate.h"

@class APIDataManager, NSString, WKWebView;

@interface LatestNewsDetailViewController : MajorViewController <WKNavigationDelegate>
{
    APIDataManager *_dataManager;
    NSString *_nId;
    NSString *_time;
    NSString *_content;
    WKWebView *_webKitView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebView *webKitView; // @synthesize webKitView=_webKitView;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *nId; // @synthesize nId=_nId;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void)system_maintenance:(id)arg1;
- (void)didGetNewsFailed:(id)arg1;
- (void)didGetNewsSuccess:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)createContentView;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

