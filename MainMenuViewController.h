//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCViewController.h"

#import "CLLocationManagerDelegate.h"
#import "EWalletUtilsDelegate.h"
#import "UIScrollViewDelegate.h"

@class CLLocationManager, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIPageControl, UIScrollView, UISwipeGestureRecognizer, UIView;

@interface MainMenuViewController : HNCViewController <UIScrollViewDelegate, CLLocationManagerDelegate, EWalletUtilsDelegate>
{
    _Bool _activeFavoritesEditBtn;
    _Bool _isAlreadyDetectGPSLocation;
    _Bool _isEWalletQuickPay;
    _Bool _isClickFuncNow;
    UIView *_pushUnreadBadgeView;
    UILabel *_pushUnreadMessagesNumberLabel;
    UIButton *_connectionSettingBtn;
    UIButton *_logoutBtn;
    UIImageView *_funcImageView;
    UIView *_favoritesView;
    UIView *_amountView;
    UIButton *_amountBtn;
    UIView *_adView;
    UIView *_footView_btnChangeDone;
    UIView *_qrCodePayPromptView;
    UIView *_fullView;
    UIScrollView *_scrollView;
    UIPageControl *_pageCtrl;
    NSString *_selectedFavoritesFuncBtnWFID;
    NSMutableArray *_favoritesMutableArray;
    NSString *_favoritesRecord;
    NSMutableDictionary *_favoritesFuncWFIDDic;
    NSString *_balanceTier1ID;
    NSString *_balanceTier2ID;
    NSMutableArray *_mtaFuncList;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    CLLocationManager *_locationManager;
    long long _favoritesBtnTotal;
    long long _favoritesBtnTagBase;
    long long _favoritesDelImgTagBase;
    long long _selectedFavoritesFuncBtnTag;
    long long _fullCurrentPage;
    long long _fullBtnTagBase;
    long long _selectedFullDicSeq;
    long long _selectedFullBtnSeq;
    long long _buttonClickType;
}

@property(nonatomic) _Bool isClickFuncNow; // @synthesize isClickFuncNow=_isClickFuncNow;
@property(nonatomic) long long buttonClickType; // @synthesize buttonClickType=_buttonClickType;
@property(nonatomic) _Bool isEWalletQuickPay; // @synthesize isEWalletQuickPay=_isEWalletQuickPay;
@property(nonatomic) _Bool isAlreadyDetectGPSLocation; // @synthesize isAlreadyDetectGPSLocation=_isAlreadyDetectGPSLocation;
@property(nonatomic) _Bool activeFavoritesEditBtn; // @synthesize activeFavoritesEditBtn=_activeFavoritesEditBtn;
@property(nonatomic) long long selectedFullBtnSeq; // @synthesize selectedFullBtnSeq=_selectedFullBtnSeq;
@property(nonatomic) long long selectedFullDicSeq; // @synthesize selectedFullDicSeq=_selectedFullDicSeq;
@property(nonatomic) long long fullBtnTagBase; // @synthesize fullBtnTagBase=_fullBtnTagBase;
@property(nonatomic) long long fullCurrentPage; // @synthesize fullCurrentPage=_fullCurrentPage;
@property(nonatomic) long long selectedFavoritesFuncBtnTag; // @synthesize selectedFavoritesFuncBtnTag=_selectedFavoritesFuncBtnTag;
@property(nonatomic) long long favoritesDelImgTagBase; // @synthesize favoritesDelImgTagBase=_favoritesDelImgTagBase;
@property(nonatomic) long long favoritesBtnTagBase; // @synthesize favoritesBtnTagBase=_favoritesBtnTagBase;
@property(nonatomic) long long favoritesBtnTotal; // @synthesize favoritesBtnTotal=_favoritesBtnTotal;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *mtaFuncList; // @synthesize mtaFuncList=_mtaFuncList;
@property(retain, nonatomic) NSString *balanceTier2ID; // @synthesize balanceTier2ID=_balanceTier2ID;
@property(retain, nonatomic) NSString *balanceTier1ID; // @synthesize balanceTier1ID=_balanceTier1ID;
@property(retain, nonatomic) NSMutableDictionary *favoritesFuncWFIDDic; // @synthesize favoritesFuncWFIDDic=_favoritesFuncWFIDDic;
@property(retain, nonatomic) NSString *favoritesRecord; // @synthesize favoritesRecord=_favoritesRecord;
@property(retain, nonatomic) NSMutableArray *favoritesMutableArray; // @synthesize favoritesMutableArray=_favoritesMutableArray;
@property(retain, nonatomic) NSString *selectedFavoritesFuncBtnWFID; // @synthesize selectedFavoritesFuncBtnWFID=_selectedFavoritesFuncBtnWFID;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *fullView; // @synthesize fullView=_fullView;
@property(retain, nonatomic) UIView *qrCodePayPromptView; // @synthesize qrCodePayPromptView=_qrCodePayPromptView;
@property(retain, nonatomic) UIView *footView_btnChangeDone; // @synthesize footView_btnChangeDone=_footView_btnChangeDone;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIButton *amountBtn; // @synthesize amountBtn=_amountBtn;
@property(retain, nonatomic) UIView *amountView; // @synthesize amountView=_amountView;
@property(retain, nonatomic) UIView *favoritesView; // @synthesize favoritesView=_favoritesView;
@property(retain, nonatomic) UIImageView *funcImageView; // @synthesize funcImageView=_funcImageView;
@property(retain, nonatomic) UIButton *logoutBtn; // @synthesize logoutBtn=_logoutBtn;
@property(retain, nonatomic) UIButton *connectionSettingBtn; // @synthesize connectionSettingBtn=_connectionSettingBtn;
@property(retain, nonatomic) UILabel *pushUnreadMessagesNumberLabel; // @synthesize pushUnreadMessagesNumberLabel=_pushUnreadMessagesNumberLabel;
@property(retain, nonatomic) UIView *pushUnreadBadgeView; // @synthesize pushUnreadBadgeView=_pushUnreadBadgeView;
- (void)WebServiceObject:(id)arg1 didCompleteAT0003WithHeader:(id)arg2 withAT0003ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompletePH00AWithHeader:(id)arg2 withPH00AResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteGOB0001WithHeader:(id)arg2 withGOB0001ResponseBody:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFullFuncScrollPageObserver:(id)arg1;
- (void)completeLoginCallBackWithStatusCode:(id)arg1 guideWFID:(id)arg2 qrCodeStr:(id)arg3;
- (void)fileterTargetViewController;
- (void)fullBtnClick:(id)arg1;
- (void)fileterFavoritesTargetViewController;
- (void)favoritesBtnClick:(id)arg1;
- (void)swipeGestureOnViewEvent:(id)arg1;
- (void)qrCodePayPromptViewClick:(id)arg1;
- (void)saveFavorites;
- (void)btnChangeDone;
- (void)editModeClick:(id)arg1;
- (void)btnLongPress:(id)arg1;
- (void)overviewBalanceClick:(id)arg1;
- (void)funChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)logout:(id)arg1;
- (void)connectionSetting:(id)arg1;
- (void)btnMessage:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)mainMenuToQuickLoginVerificationObserver:(id)arg1;
- (void)delayMainMenuToQuickLoginVerification:(id)arg1;
- (void)delayShortcutGuideViewController:(id)arg1;
- (void)processShortcutEventWithGuideWFID:(id)arg1 param1:(id)arg2;
- (void)guideAccessibilityViewController;
- (void)processLogoutShowView;
- (void)processLoginShowView;
- (void)processMainMenuShowView;
- (id)getMenuViewImageWithWfid:(id)arg1;
- (void)processFavoritesFuncShowViewWithFavoritesArray:(id)arg1;
- (id)getFuncListArrayWithXML:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

