//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class APIDataManager, UILabel, UIView;

@interface TransactionRecordDetailTableViewCell : UITableViewCell
{
    APIDataManager *_dataManager;
    UIView *_lineView;
    UILabel *_lbTitle;
    UILabel *_lbContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *lbContent; // @synthesize lbContent=_lbContent;
@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

