//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFContactAutoFillValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillTableViewCell : UITableViewCell
{
    SFContactAutoFillValue *_value;
    UIButton *_checkmarkButton;
    UILabel *_categoryLabel;
    UILabel *_optionLabel;
    _Bool _usesDetailAppearance;
    _Bool _checked;
}

@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool usesDetailAppearance; // @synthesize usesDetailAppearance=_usesDetailAppearance;
- (void).cxx_destruct;
- (void)checkmarkButtonTapped:(id)arg1;
- (void)setValue:(id)arg1 property:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

