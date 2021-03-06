//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

#import "LinphoneManagerDelegate.h"
#import "UITextViewDelegate.h"
#import "WKNavigationDelegate.h"

@class AVAudioEngine, NSLayoutConstraint, NSMutableArray, NSString, NSTimer, OctonTTS, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, UIButton, UIImageView, UILongPressGestureRecognizer, UITableView, UITextField, UIView;

@interface SmartCustomerViewController : HNCTableViewController <LinphoneManagerDelegate, UITextViewDelegate, WKNavigationDelegate>
{
    _Bool _isTtsSwitchButtonSelected;
    _Bool _isStopDraggingUpdateKeywordContentTableView;
    _Bool _isChatRobotStartStatus;
    _Bool _isAgentTransferRobot;
    _Bool _isFromVerificationButtonClickEvent;
    _Bool _isAgentGetSatisfactionQuestionnaire;
    _Bool _isAlreadySendSatisfactionQuestionnaire;
    int _chatType;
    int _chatFontSizeType;
    int _loginType;
    int _leaveChatType;
    int _waitCheckTime1;
    int _waitCheckTime2;
    int _waitCheckTime3;
    int _keyinCheckTime;
    int _keyinCheckCount;
    int _waitTime;
    int _keyinTime;
    int _keyinCount;
    UIView *_toolBarView;
    UIButton *_declarationButton;
    UIButton *_commonProblemButton;
    UIButton *_callButton;
    UIButton *_cardButton;
    UIView *_chatView;
    NSLayoutConstraint *_chatViewBottomConstraint;
    UIView *_chatBottomView;
    UIButton *_changeFontSizeButton;
    UIButton *_sendOrMicrophoneButton;
    UITextField *_msgTextField;
    UIView *_speechView;
    NSLayoutConstraint *_speechViewBottomConstraint;
    UIButton *_speechButton;
    UITableView *_keywordContentTableView;
    NSLayoutConstraint *_keywordContentTableViewHeightConstraint;
    UIView *_declarationView;
    UIView *_declarationWebKitContainerView;
    UIView *_commonProblemView;
    UITableView *_commonProblemTableView;
    UIView *_satisfactionView;
    NSLayoutConstraint *_satisfactionViewTopConstraint;
    NSLayoutConstraint *_satisfactionViewBottomConstraint;
    UITableView *_satisfactionTableView;
    UIButton *_satisfactionConfirmButton;
    NSString *_subsysSettingJson;
    NSString *_audioDialVOIPNum;
    UIImageView *_ttsSwitchImageView;
    UIButton *_ttsSwitchButton;
    UIButton *_toolBarSelectButton;
    UILongPressGestureRecognizer *_speechButtonLongPressGestureRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_speechAudioBufferRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    AVAudioEngine *_audioEngine;
    NSString *_waitSettingJson;
    OctonTTS *_tts;
    NSTimer *_registerStateTimer;
    NSTimer *_waitTimer;
    NSTimer *_keyinTimer;
    NSTimer *_statusTimer;
    NSTimer *_ttsTimer;
    NSMutableArray *_sidArray;
    NSMutableArray *_contentTypeArray;
    NSMutableArray *_contentArray;
    NSMutableArray *_otherArray;
    NSMutableArray *_sendTimeArray;
    NSMutableArray *_sendSuccessArray;
    NSMutableArray *_readSuccessArray;
    NSMutableArray *_optionsClickMoreButtonSidArray;
    NSMutableArray *_keywordContentArray;
    NSMutableArray *_keywordContentSearchArray;
    NSMutableArray *_keywordContentShowArray;
    NSMutableArray *_commonProblemArray;
    NSMutableArray *_satisfactionQuestionnaireArray;
    NSString *_chatStartTimeStamp;
    NSString *_ttsMsg;
    NSString *_userInputQuestion;
    NSString *_chatScriptNo;
    NSString *_audioScriptNo;
    NSString *_agentId;
    struct CGRect _chatViewFrame;
    struct CGRect _speechViewFrame;
    struct CGRect _chatCommonTableViewFrame;
    struct CGRect _satisfactionViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) int keyinCount; // @synthesize keyinCount=_keyinCount;
@property(nonatomic) int keyinTime; // @synthesize keyinTime=_keyinTime;
@property(nonatomic) int waitTime; // @synthesize waitTime=_waitTime;
@property(nonatomic) int keyinCheckCount; // @synthesize keyinCheckCount=_keyinCheckCount;
@property(nonatomic) int keyinCheckTime; // @synthesize keyinCheckTime=_keyinCheckTime;
@property(nonatomic) int waitCheckTime3; // @synthesize waitCheckTime3=_waitCheckTime3;
@property(nonatomic) int waitCheckTime2; // @synthesize waitCheckTime2=_waitCheckTime2;
@property(nonatomic) int waitCheckTime1; // @synthesize waitCheckTime1=_waitCheckTime1;
@property(nonatomic) _Bool isAlreadySendSatisfactionQuestionnaire; // @synthesize isAlreadySendSatisfactionQuestionnaire=_isAlreadySendSatisfactionQuestionnaire;
@property(nonatomic) _Bool isAgentGetSatisfactionQuestionnaire; // @synthesize isAgentGetSatisfactionQuestionnaire=_isAgentGetSatisfactionQuestionnaire;
@property(nonatomic) _Bool isFromVerificationButtonClickEvent; // @synthesize isFromVerificationButtonClickEvent=_isFromVerificationButtonClickEvent;
@property(nonatomic) _Bool isAgentTransferRobot; // @synthesize isAgentTransferRobot=_isAgentTransferRobot;
@property(nonatomic) _Bool isChatRobotStartStatus; // @synthesize isChatRobotStartStatus=_isChatRobotStartStatus;
@property(nonatomic) _Bool isStopDraggingUpdateKeywordContentTableView; // @synthesize isStopDraggingUpdateKeywordContentTableView=_isStopDraggingUpdateKeywordContentTableView;
@property(nonatomic) _Bool isTtsSwitchButtonSelected; // @synthesize isTtsSwitchButtonSelected=_isTtsSwitchButtonSelected;
@property(nonatomic) int leaveChatType; // @synthesize leaveChatType=_leaveChatType;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(nonatomic) int chatFontSizeType; // @synthesize chatFontSizeType=_chatFontSizeType;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(nonatomic) struct CGRect satisfactionViewFrame; // @synthesize satisfactionViewFrame=_satisfactionViewFrame;
@property(nonatomic) struct CGRect chatCommonTableViewFrame; // @synthesize chatCommonTableViewFrame=_chatCommonTableViewFrame;
@property(nonatomic) struct CGRect speechViewFrame; // @synthesize speechViewFrame=_speechViewFrame;
@property(nonatomic) struct CGRect chatViewFrame; // @synthesize chatViewFrame=_chatViewFrame;
@property(retain, nonatomic) NSString *agentId; // @synthesize agentId=_agentId;
@property(retain, nonatomic) NSString *audioScriptNo; // @synthesize audioScriptNo=_audioScriptNo;
@property(retain, nonatomic) NSString *chatScriptNo; // @synthesize chatScriptNo=_chatScriptNo;
@property(retain, nonatomic) NSString *userInputQuestion; // @synthesize userInputQuestion=_userInputQuestion;
@property(retain, nonatomic) NSString *ttsMsg; // @synthesize ttsMsg=_ttsMsg;
@property(retain, nonatomic) NSString *chatStartTimeStamp; // @synthesize chatStartTimeStamp=_chatStartTimeStamp;
@property(retain, nonatomic) NSMutableArray *satisfactionQuestionnaireArray; // @synthesize satisfactionQuestionnaireArray=_satisfactionQuestionnaireArray;
@property(retain, nonatomic) NSMutableArray *commonProblemArray; // @synthesize commonProblemArray=_commonProblemArray;
@property(retain, nonatomic) NSMutableArray *keywordContentShowArray; // @synthesize keywordContentShowArray=_keywordContentShowArray;
@property(retain, nonatomic) NSMutableArray *keywordContentSearchArray; // @synthesize keywordContentSearchArray=_keywordContentSearchArray;
@property(retain, nonatomic) NSMutableArray *keywordContentArray; // @synthesize keywordContentArray=_keywordContentArray;
@property(retain, nonatomic) NSMutableArray *optionsClickMoreButtonSidArray; // @synthesize optionsClickMoreButtonSidArray=_optionsClickMoreButtonSidArray;
@property(retain, nonatomic) NSMutableArray *readSuccessArray; // @synthesize readSuccessArray=_readSuccessArray;
@property(retain, nonatomic) NSMutableArray *sendSuccessArray; // @synthesize sendSuccessArray=_sendSuccessArray;
@property(retain, nonatomic) NSMutableArray *sendTimeArray; // @synthesize sendTimeArray=_sendTimeArray;
@property(retain, nonatomic) NSMutableArray *otherArray; // @synthesize otherArray=_otherArray;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) NSMutableArray *contentTypeArray; // @synthesize contentTypeArray=_contentTypeArray;
@property(retain, nonatomic) NSMutableArray *sidArray; // @synthesize sidArray=_sidArray;
@property(retain, nonatomic) NSTimer *ttsTimer; // @synthesize ttsTimer=_ttsTimer;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(retain, nonatomic) NSTimer *keyinTimer; // @synthesize keyinTimer=_keyinTimer;
@property(retain, nonatomic) NSTimer *waitTimer; // @synthesize waitTimer=_waitTimer;
@property(retain, nonatomic) NSTimer *registerStateTimer; // @synthesize registerStateTimer=_registerStateTimer;
@property(retain, nonatomic) OctonTTS *tts; // @synthesize tts=_tts;
@property(retain, nonatomic) NSString *waitSettingJson; // @synthesize waitSettingJson=_waitSettingJson;
@property(retain, nonatomic) AVAudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
@property(retain, nonatomic) SFSpeechRecognitionTask *speechRecognitionTask; // @synthesize speechRecognitionTask=_speechRecognitionTask;
@property(retain, nonatomic) SFSpeechAudioBufferRecognitionRequest *speechAudioBufferRecognitionRequest; // @synthesize speechAudioBufferRecognitionRequest=_speechAudioBufferRecognitionRequest;
@property(retain, nonatomic) UILongPressGestureRecognizer *speechButtonLongPressGestureRecognizer; // @synthesize speechButtonLongPressGestureRecognizer=_speechButtonLongPressGestureRecognizer;
@property(retain, nonatomic) UIButton *toolBarSelectButton; // @synthesize toolBarSelectButton=_toolBarSelectButton;
@property(retain, nonatomic) UIButton *ttsSwitchButton; // @synthesize ttsSwitchButton=_ttsSwitchButton;
@property(retain, nonatomic) UIImageView *ttsSwitchImageView; // @synthesize ttsSwitchImageView=_ttsSwitchImageView;
@property(retain, nonatomic) NSString *audioDialVOIPNum; // @synthesize audioDialVOIPNum=_audioDialVOIPNum;
@property(retain, nonatomic) NSString *subsysSettingJson; // @synthesize subsysSettingJson=_subsysSettingJson;
@property(nonatomic) __weak UIButton *satisfactionConfirmButton; // @synthesize satisfactionConfirmButton=_satisfactionConfirmButton;
@property(nonatomic) __weak UITableView *satisfactionTableView; // @synthesize satisfactionTableView=_satisfactionTableView;
@property(nonatomic) __weak NSLayoutConstraint *satisfactionViewBottomConstraint; // @synthesize satisfactionViewBottomConstraint=_satisfactionViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *satisfactionViewTopConstraint; // @synthesize satisfactionViewTopConstraint=_satisfactionViewTopConstraint;
@property(nonatomic) __weak UIView *satisfactionView; // @synthesize satisfactionView=_satisfactionView;
@property(nonatomic) __weak UITableView *commonProblemTableView; // @synthesize commonProblemTableView=_commonProblemTableView;
@property(nonatomic) __weak UIView *commonProblemView; // @synthesize commonProblemView=_commonProblemView;
@property(nonatomic) __weak UIView *declarationWebKitContainerView; // @synthesize declarationWebKitContainerView=_declarationWebKitContainerView;
@property(nonatomic) __weak UIView *declarationView; // @synthesize declarationView=_declarationView;
@property(nonatomic) __weak NSLayoutConstraint *keywordContentTableViewHeightConstraint; // @synthesize keywordContentTableViewHeightConstraint=_keywordContentTableViewHeightConstraint;
@property(nonatomic) __weak UITableView *keywordContentTableView; // @synthesize keywordContentTableView=_keywordContentTableView;
@property(nonatomic) __weak UIButton *speechButton; // @synthesize speechButton=_speechButton;
@property(nonatomic) __weak NSLayoutConstraint *speechViewBottomConstraint; // @synthesize speechViewBottomConstraint=_speechViewBottomConstraint;
@property(nonatomic) __weak UIView *speechView; // @synthesize speechView=_speechView;
@property(nonatomic) __weak UITextField *msgTextField; // @synthesize msgTextField=_msgTextField;
@property(nonatomic) __weak UIButton *sendOrMicrophoneButton; // @synthesize sendOrMicrophoneButton=_sendOrMicrophoneButton;
@property(nonatomic) __weak UIButton *changeFontSizeButton; // @synthesize changeFontSizeButton=_changeFontSizeButton;
@property(nonatomic) __weak UIView *chatBottomView; // @synthesize chatBottomView=_chatBottomView;
@property(nonatomic) __weak NSLayoutConstraint *chatViewBottomConstraint; // @synthesize chatViewBottomConstraint=_chatViewBottomConstraint;
@property(nonatomic) __weak UIView *chatView; // @synthesize chatView=_chatView;
@property(nonatomic) __weak UIButton *cardButton; // @synthesize cardButton=_cardButton;
@property(nonatomic) __weak UIButton *callButton; // @synthesize callButton=_callButton;
@property(nonatomic) __weak UIButton *commonProblemButton; // @synthesize commonProblemButton=_commonProblemButton;
@property(nonatomic) __weak UIButton *declarationButton; // @synthesize declarationButton=_declarationButton;
@property(nonatomic) __weak UIView *toolBarView; // @synthesize toolBarView=_toolBarView;
- (long long)getSatisfactionQuestionnaireOptionIndexWithOption:(long long)arg1;
- (void)getSatisfactionQuestionnaireWithStatus:(id)arg1;
- (void)satisfactionConfirmButtonClickEvent:(id)arg1;
- (void)satisfactionQuestionnaireOptionButtonClickEvent:(id)arg1;
- (id)satisfactionCellViewWithRow:(long long)arg1;
- (void)processSatisfactionView;
- (void)cardOptionButtonClickEventWithText:(id)arg1;
- (id)commonProblemCellViewWithRow:(long long)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)WebServiceObject:(id)arg1 didCompleteCustServiceWithHeader:(id)arg2 withCustServiceResponseBody:(id)arg3;
- (void)endChat;
- (void)onLoadChatData;
- (void)didReceiveMessage:(id)arg1;
- (void)agentTransferRobot;
- (void)chatRobotSendWithMessage:(id)arg1 isShowStatus:(_Bool)arg2;
- (void)chatStatusCheck;
- (void)chatKeyinCheck;
- (void)chatAgentWaitCheck;
- (void)registerStateUpdate;
- (void)registerServer;
- (void)getWaitTime;
- (id)getWaitSettingJson;
- (void)delayGetWaitTimeAndRegisterServer:(id)arg1;
- (void)forwardTypeButtonClickEvent:(id)arg1;
- (void)optionButtonClickEvent:(id)arg1;
- (void)verificationButtonClickEvent:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)chatTableViewScrollCurrentIndexPath;
- (id)chatCellViewWithRow:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)decisionIsShowKeywordContentTableViewWithInputMsg:(id)arg1;
- (void)chatInputMsgOrSatisfactionInputOpinionKeyboardWillHide:(id)arg1;
- (void)chatInputMsgOrSatisfactionInputOpinionKeyboardWillShow:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)speechButtonLongPressEvent:(id)arg1;
- (void)sendOrMicrophoneButtonClickEvent:(id)arg1;
- (void)changeFontSizeButtonClickEvent:(id)arg1;
- (void)processChatView;
- (void)closeButtonClickEvent:(id)arg1;
- (void)toolBarButtonClickEvent:(id)arg1;
- (void)ttsOutputEvent;
- (void)ttsSwitchButtonClickEvent:(id)arg1;
- (void)homeButtonClickEvent:(id)arg1;
- (void)backButtonClickEvent:(id)arg1;
- (void)sendVerifyLogWithMediaType:(id)arg1 actionType:(id)arg2;
- (void)sendNodeLogWithMediaType:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

