//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "RevealDescriptionViewDeleaget.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "iCarouselDataSource.h"
#import "iCarouselDelegate.h"

@class APIDataManager, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, RevealDescriptionView, UIButton, UIImageView, UILabel, UIScrollView, UIView, iCarousel;

@interface HomeViewController : MajorViewController <RevealDescriptionViewDeleaget, UIScrollViewDelegate, iCarouselDelegate, iCarouselDataSource, UIGestureRecognizerDelegate>
{
    _Bool _isFirst;
    _Bool _autoDefaultPage;
    _Bool _autoScan2;
    _Bool _isScroll;
    _Bool _autoScan;
    _Bool _quickPay;
    float _version;
    int _timerCount;
    APIDataManager *_dataManager;
    UIImageView *_imgTopView;
    UIButton *_btnHome;
    UIButton *_signOutBtn;
    UILabel *_lbPrice;
    UIScrollView *_scrollView;
    UIView *_openSuccessView;
    UIView *_topView;
    UIButton *_btnStart;
    NSMutableArray *_cardArray;
    NSMutableArray *_adArray;
    NSDictionary *_pointDictionary;
    iCarousel *_carousel;
    NSString *_qrcode;
    NSString *_custId;
    NSString *_mobile;
    NSString *_outAcc;
    NSString *_pwordType;
    NSMutableDictionary *_resPosneDic;
    UILabel *_lbName;
    NSString *_isTouchId;
    UILabel *_bonusLable;
    NSString *_defaultPayId;
    NSString *_defaultPayType;
    UIScrollView *_scrollView2;
    NSString *_defaultPage;
    NSString *_taxYear;
    NSTimer *_timer180;
    NSString *_pBalance;
    NSString *_pRedeemState;
    NSString *_errMsg;
    NSString *_pIsQueryAgain;
    UIView *_blockView;
    UIView *_errorView;
    UILabel *_errorLabel;
    RevealDescriptionView *_descriptionView;
    UIImageView *_pBalanceImage;
    UILabel *_nPoint;
    UIImageView *_taiwanPayLogo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *taiwanPayLogo; // @synthesize taiwanPayLogo=_taiwanPayLogo;
@property(retain, nonatomic) UILabel *nPoint; // @synthesize nPoint=_nPoint;
@property(retain, nonatomic) UIImageView *pBalanceImage; // @synthesize pBalanceImage=_pBalanceImage;
@property(retain, nonatomic) RevealDescriptionView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) NSString *pIsQueryAgain; // @synthesize pIsQueryAgain=_pIsQueryAgain;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *pRedeemState; // @synthesize pRedeemState=_pRedeemState;
@property(retain, nonatomic) NSString *pBalance; // @synthesize pBalance=_pBalance;
@property(nonatomic) int timerCount; // @synthesize timerCount=_timerCount;
@property(retain, nonatomic) NSTimer *timer180; // @synthesize timer180=_timer180;
@property(nonatomic) _Bool quickPay; // @synthesize quickPay=_quickPay;
@property(retain, nonatomic) NSString *taxYear; // @synthesize taxYear=_taxYear;
@property(nonatomic) _Bool autoScan; // @synthesize autoScan=_autoScan;
@property(retain, nonatomic) NSString *defaultPage; // @synthesize defaultPage=_defaultPage;
@property(retain, nonatomic) UIScrollView *scrollView2; // @synthesize scrollView2=_scrollView2;
@property(nonatomic) _Bool isScroll; // @synthesize isScroll=_isScroll;
@property(retain, nonatomic) NSString *defaultPayType; // @synthesize defaultPayType=_defaultPayType;
@property(retain, nonatomic) NSString *defaultPayId; // @synthesize defaultPayId=_defaultPayId;
@property(nonatomic) float version; // @synthesize version=_version;
@property(retain, nonatomic) UILabel *bonusLable; // @synthesize bonusLable=_bonusLable;
@property(nonatomic) _Bool autoScan2; // @synthesize autoScan2=_autoScan2;
@property(retain, nonatomic) NSString *isTouchId; // @synthesize isTouchId=_isTouchId;
@property(retain, nonatomic) UILabel *lbName; // @synthesize lbName=_lbName;
@property(retain, nonatomic) NSMutableDictionary *resPosneDic; // @synthesize resPosneDic=_resPosneDic;
@property(retain, nonatomic) NSString *pwordType; // @synthesize pwordType=_pwordType;
@property(retain, nonatomic) NSString *outAcc; // @synthesize outAcc=_outAcc;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *custId; // @synthesize custId=_custId;
@property(retain, nonatomic) NSString *qrcode; // @synthesize qrcode=_qrcode;
@property(nonatomic) _Bool autoDefaultPage; // @synthesize autoDefaultPage=_autoDefaultPage;
@property(retain, nonatomic) iCarousel *carousel; // @synthesize carousel=_carousel;
@property(retain, nonatomic) NSDictionary *pointDictionary; // @synthesize pointDictionary=_pointDictionary;
@property(retain, nonatomic) NSMutableArray *adArray; // @synthesize adArray=_adArray;
@property(retain, nonatomic) NSMutableArray *cardArray; // @synthesize cardArray=_cardArray;
@property(retain, nonatomic) UIButton *btnStart; // @synthesize btnStart=_btnStart;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *openSuccessView; // @synthesize openSuccessView=_openSuccessView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *lbPrice; // @synthesize lbPrice=_lbPrice;
@property(retain, nonatomic) UIButton *signOutBtn; // @synthesize signOutBtn=_signOutBtn;
@property(retain, nonatomic) UIButton *btnHome; // @synthesize btnHome=_btnHome;
@property(retain, nonatomic) UIImageView *imgTopView; // @synthesize imgTopView=_imgTopView;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void)system_maintenance:(id)arg1;
- (void)didIsFirstLoginFailed:(id)arg1;
- (void)didIsFirstLoginSuccess:(id)arg1;
- (void)initErreyView;
- (void)getBonusLabelString:(long long)arg1;
- (void)carouselCurrentItemIndexDidChange:(id)arg1;
- (id)defaultColor:(id)arg1 code:(id)arg2;
- (double)carousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (id)carousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInCarousel:(id)arg1;
- (void)function;
- (void)imgViewTap:(id)arg1;
- (void)didGetMemberSetPWDataFailed:(id)arg1;
- (void)didGetMemberSetPWDataSuccess:(id)arg1;
- (void)VERIFY_PW_FAILED:(id)arg1;
- (void)CREATE_QRCODE_FAILD:(id)arg1;
- (void)CREATE_QRCODE_SUCCESS:(id)arg1;
- (void)TouchID_SUCCESS:(id)arg1;
- (void)barcodeWithAnimation:(_Bool)arg1;
- (void)barcodeTap:(id)arg1;
- (void)pressDoneDelegate;
- (void)revealDescription:(id)arg1;
- (void)scanTap:(id)arg1;
- (void)btnStart:(id)arg1;
- (void)btnAd:(id)arg1;
- (void)signOutBtn:(id)arg1;
- (void)btnHome:(id)arg1;
- (void)createOpenSuccessView;
- (void)tapHandler:(id)arg1;
- (_Bool)SwitchDate:(id)arg1;
- (void)createAdInfo;
- (void)createContentView;
- (void)back;
- (void)scrollViewPage4;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didQRCodeBuyerScanFailed:(id)arg1;
- (void)sysCodeFailed:(id)arg1;
- (void)didQRCodeBuyerScanSuccess:(id)arg1;
- (void)viewDidLoad;
- (id)imageFromColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
