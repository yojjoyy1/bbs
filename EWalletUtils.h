//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EWalletUtilsDelegate.h"
#import "WebServiceObjectDelegate.h"

@class EWalletData, NSArray, NSObject<EWalletUtilsDelegate><NSObject>, NSString, UIViewController, WebServiceObject;

@interface EWalletUtils : NSObject <WebServiceObjectDelegate, EWalletUtilsDelegate>
{
    _Bool _isGoToEWalletFunction;
    _Bool _isGetEWalletData;
    _Bool _isCallKeypasco;
    _Bool _quickPay;
    _Bool _isHNCBP2PQRCode;
    NSArray *_eWalletHeaderBarStyleArray;
    NSString *_isKeypasco;
    NSString *_deviceName;
    NSString *_deviceCount;
    NSString *_customerId;
    NSString *_fiscQRCodeStr;
    EWalletData *_eWalletData;
    NSObject<EWalletUtilsDelegate><NSObject> *_delegate;
    WebServiceObject *_wsObject;
    UIViewController *_viewController;
    NSString *_qrcode;
    NSString *_homeSettings;
    CDUnknownBlockType _refreshSessionCompletion;
    NSString *_detectKeypascoStatusFromEWallet;
    NSString *_signEndTaskId;
    NSString *_fiscQRCodeOriginalStr;
    NSString *_qrCodeP2PStr;
    NSObject<EWalletUtilsDelegate><NSObject> *_eWalletUtilsForCheckQRCodeP2PDelegate;
}

+ (id)instanceEWalletUtils;
@property(nonatomic) _Bool isHNCBP2PQRCode; // @synthesize isHNCBP2PQRCode=_isHNCBP2PQRCode;
@property(retain, nonatomic) NSObject<EWalletUtilsDelegate><NSObject> *eWalletUtilsForCheckQRCodeP2PDelegate; // @synthesize eWalletUtilsForCheckQRCodeP2PDelegate=_eWalletUtilsForCheckQRCodeP2PDelegate;
@property(retain, nonatomic) NSString *qrCodeP2PStr; // @synthesize qrCodeP2PStr=_qrCodeP2PStr;
@property(retain, nonatomic) NSString *fiscQRCodeOriginalStr; // @synthesize fiscQRCodeOriginalStr=_fiscQRCodeOriginalStr;
@property(retain, nonatomic) NSString *signEndTaskId; // @synthesize signEndTaskId=_signEndTaskId;
@property(retain, nonatomic) NSString *detectKeypascoStatusFromEWallet; // @synthesize detectKeypascoStatusFromEWallet=_detectKeypascoStatusFromEWallet;
@property(copy, nonatomic) CDUnknownBlockType refreshSessionCompletion; // @synthesize refreshSessionCompletion=_refreshSessionCompletion;
@property(nonatomic) _Bool quickPay; // @synthesize quickPay=_quickPay;
@property(retain, nonatomic) NSString *homeSettings; // @synthesize homeSettings=_homeSettings;
@property(retain, nonatomic) NSString *qrcode; // @synthesize qrcode=_qrcode;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) WebServiceObject *wsObject; // @synthesize wsObject=_wsObject;
@property(retain, nonatomic) NSObject<EWalletUtilsDelegate><NSObject> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EWalletData *eWalletData; // @synthesize eWalletData=_eWalletData;
@property(retain, nonatomic) NSString *fiscQRCodeStr; // @synthesize fiscQRCodeStr=_fiscQRCodeStr;
@property(retain, nonatomic) NSString *customerId; // @synthesize customerId=_customerId;
@property(retain, nonatomic) NSString *deviceCount; // @synthesize deviceCount=_deviceCount;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *isKeypasco; // @synthesize isKeypasco=_isKeypasco;
@property(retain, nonatomic) NSArray *eWalletHeaderBarStyleArray; // @synthesize eWalletHeaderBarStyleArray=_eWalletHeaderBarStyleArray;
@property(nonatomic) _Bool isCallKeypasco; // @synthesize isCallKeypasco=_isCallKeypasco;
@property(nonatomic) _Bool isGetEWalletData; // @synthesize isGetEWalletData=_isGetEWalletData;
@property(nonatomic) _Bool isGoToEWalletFunction; // @synthesize isGoToEWalletFunction=_isGoToEWalletFunction;
- (_Bool)checkEMVQRCodeCRC:(id)arg1;
- (id)calcEMVQRCodeCRC:(id)arg1;
- (_Bool)checkEMVQRCodePayload:(id)arg1;
- (void)didVerifyQRCodeFailed:(id)arg1;
- (void)didVerifyQRCodeSuccess:(id)arg1;
- (void)verifyQRCode:(id)arg1;
- (_Bool)chechVerify:(id)arg1;
- (void)goToPaymentConfirmPageWithViewController:(id)arg1 qrcode:(id)arg2;
- (void)apiError:(id)arg1;
- (void)didIsFirstLoginFailed:(id)arg1;
- (void)didIsFirstLoginSuccess:(id)arg1;
- (void)goToDefualtHomePageWithViewController:(id)arg1 homeSettings:(id)arg2 quickPay:(_Bool)arg3 qrcode:(id)arg4;
- (void)goToEWalletPageWithViewController:(id)arg1;
- (void)delayHiddenAIRobotFloatingIconWindow:(id)arg1;
- (void)completeVerifyQRCodeCallBackWithReturnMsg:(id)arg1 rtnCode:(id)arg2;
- (void)WebServiceObject:(id)arg1 didCompleteCheckQRCodeP2PWithHeader:(id)arg2 withCheckQRCodeP2PResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteSignEndWithHeader:(id)arg2 withSignEndResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteSignBeginWithHeader:(id)arg2 withSignBeginResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteAuthenticateWithHeader:(id)arg2 withAuthenticateResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteListDevicesWithHeader:(id)arg2 withListDevicesResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteAT0003WithHeader:(id)arg2 withAT0003ResponseBody:(id)arg3;
- (void)delayDoAuthenticate:(id)arg1;
- (void)receiveKeypascoCallBackWithResultUrl:(id)arg1;
- (void)doQRCodeWithViewController:(id)arg1 outAcct:(id)arg2;
- (void)checkQRCodeWithQRCodeStr:(id)arg1;
- (void)returnAppHome:(id)arg1;
- (void)refreshSessionForKeepAlive:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)refreshSession;
- (void)signEndWithKeypascoStatus:(id)arg1 taskId:(id)arg2;
- (void)signBeginWithKeypascoStatus:(id)arg1 messageText:(id)arg2 taskTitle:(id)arg3;
- (void)detectKeypascoStatusWithKeypascoStatus:(id)arg1;
- (void)doLogout;
- (void)doLogin:(id)arg1 guideWFID:(id)arg2;
- (void)dealloc;

@end

