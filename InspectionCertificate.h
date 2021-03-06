//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"
#import "NSURLSessionDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, NSURLConnection;

@interface InspectionCertificate : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate, UIAlertViewDelegate>
{
    _Bool isDebugMode;
    _Bool _isCASuccess;
    id <InspectionCertificateDelegate><NSObject> _caDelegate;
    NSURLConnection *_conn;
    NSMutableArray *_mtaInspectionCertificateItem;
    long long _iIndex;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isCASuccess; // @synthesize isCASuccess=_isCASuccess;
@property(nonatomic) long long iIndex; // @synthesize iIndex=_iIndex;
@property(retain, nonatomic) NSMutableArray *mtaInspectionCertificateItem; // @synthesize mtaInspectionCertificateItem=_mtaInspectionCertificateItem;
@property(retain, nonatomic) NSURLConnection *conn; // @synthesize conn=_conn;
@property(retain, nonatomic) id <InspectionCertificateDelegate><NSObject> caDelegate; // @synthesize caDelegate=_caDelegate;
@property(nonatomic) _Bool isDebugMode; // @synthesize isDebugMode;
- (void).cxx_destruct;
- (void)handleInspectionCertificationSuccess;
- (void)handleInspectionCertificationFail:(id)arg1 withMessage:(id)arg2;
- (void)showAlertMessage:(id)arg1 withTag:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (_Bool)inspectCertificate:(id)arg1;
- (void)inspectNextCA;
- (void)showResponseCode:(id)arg1;
- (void)startConnection;
- (void)InspectionPKOfCertificateItem:(id)arg1;
- (void)InspectionPK:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

