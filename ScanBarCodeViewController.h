//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCViewController.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UIButton, UITextView, UIView, WKWebView;

@interface ScanBarCodeViewController : HNCViewController <AVCaptureMetadataOutputObjectsDelegate>
{
    UIView *_barCodeScanAreaView;
    UIView *_barCodeScanLineView;
    UITextView *_barCodeResultTextView;
    UIButton *_cleanScanButton;
    UIButton *_completeButton;
    WKWebView *_webKitView;
    NSString *_sCallbackFunctionName;
    long long _iBarCodeCount;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    NSString *_sBarCodeResult;
}

@property(retain, nonatomic) NSString *sBarCodeResult; // @synthesize sBarCodeResult=_sBarCodeResult;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) long long iBarCodeCount; // @synthesize iBarCodeCount=_iBarCodeCount;
@property(retain, nonatomic) NSString *sCallbackFunctionName; // @synthesize sCallbackFunctionName=_sCallbackFunctionName;
@property(retain, nonatomic) WKWebView *webKitView; // @synthesize webKitView=_webKitView;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UIButton *cleanScanButton; // @synthesize cleanScanButton=_cleanScanButton;
@property(retain, nonatomic) UITextView *barCodeResultTextView; // @synthesize barCodeResultTextView=_barCodeResultTextView;
@property(retain, nonatomic) UIView *barCodeScanLineView; // @synthesize barCodeScanLineView=_barCodeScanLineView;
@property(retain, nonatomic) UIView *barCodeScanAreaView; // @synthesize barCodeScanAreaView=_barCodeScanAreaView;
- (void)completeButtonClickEvent:(id)arg1;
- (void)cleanScanButtonClickEvent:(id)arg1;
- (void)closeButtonClickEvent:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)settingBarCodeScan;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
