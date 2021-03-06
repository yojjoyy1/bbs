//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCWebKitViewController.h"

#import "CLLocationManagerDelegate.h"
#import "WKScriptMessageHandler.h"

@class AVAudioEngine, AVSpeechSynthesizer, CLLocationManager, NSString, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, WKUserContentController;

@interface IntumitRobotViewController : HNCWebKitViewController <CLLocationManagerDelegate, WKScriptMessageHandler>
{
    _Bool _isRequestGPSLocation;
    _Bool _isAlreadyDetectGPSLocation;
    int _loginType;
    AVSpeechSynthesizer *_speechSynthesizer;
    NSString *_guideWFID;
    NSString *_funcTXID;
    AVAudioEngine *_audioEngine;
    SFSpeechAudioBufferRecognitionRequest *_speechAudioBufferRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    CLLocationManager *_locationManager;
    WKUserContentController *_userContentController;
}

@property(retain, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
@property(nonatomic) _Bool isAlreadyDetectGPSLocation; // @synthesize isAlreadyDetectGPSLocation=_isAlreadyDetectGPSLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool isRequestGPSLocation; // @synthesize isRequestGPSLocation=_isRequestGPSLocation;
@property(retain, nonatomic) SFSpeechRecognitionTask *speechRecognitionTask; // @synthesize speechRecognitionTask=_speechRecognitionTask;
@property(retain, nonatomic) SFSpeechAudioBufferRecognitionRequest *speechAudioBufferRecognitionRequest; // @synthesize speechAudioBufferRecognitionRequest=_speechAudioBufferRecognitionRequest;
@property(retain, nonatomic) AVAudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *funcTXID; // @synthesize funcTXID=_funcTXID;
@property(retain, nonatomic) NSString *guideWFID; // @synthesize guideWFID=_guideWFID;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
- (void)dealloc;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)jsonDict:(id)arg1;
- (void)closeAIRobot;
- (void)WebServiceObject:(id)arg1 didCompleteCallHNCBAPIWithHeader:(id)arg2 withCallHNCBAPIResponseBody:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

