//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIBarButtonItem, UILabel;

@interface MMBPickerView : UIView
{
    NSString *sTitle;
    NSString *sDone;
    NSString *sCancel;
    UIBarButtonItem *btnDone;
    UIBarButtonItem *btnCancel;
    UILabel *lbTitle;
}

@property(nonatomic) UILabel *lbTitle; // @synthesize lbTitle;
@property(retain, nonatomic) UIBarButtonItem *btnCancel; // @synthesize btnCancel;
@property(retain, nonatomic) UIBarButtonItem *btnDone; // @synthesize btnDone;
@property(copy, nonatomic) NSString *sCancel; // @synthesize sCancel;
@property(copy, nonatomic) NSString *sDone; // @synthesize sDone;
@property(copy, nonatomic) NSString *sTitle; // @synthesize sTitle;
- (void)dealloc;
- (void)reSetMMBPickerViewTitle:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

