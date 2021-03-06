//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSLayoutConstraint, UIButton, UILabel, WFWorkflow, WFWorkflowSettingsLayoutMetrics;
@protocol WFWorkflowEmptyStateViewDelegate;

@interface WFWorkflowEmptyStateView : UIView
{
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    WFWorkflow *_workflow;
    id <WFWorkflowEmptyStateViewDelegate> _delegate;
    UILabel *_instructionLabel;
    UIButton *_tourButton;
    UIButton *_addButton;
    NSLayoutConstraint *_addButtonHeightConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *addButtonHeightConstraint; // @synthesize addButtonHeightConstraint=_addButtonHeightConstraint;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(readonly, nonatomic) UIButton *tourButton; // @synthesize tourButton=_tourButton;
@property(readonly, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(nonatomic) __weak id <WFWorkflowEmptyStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *instructionText;
@property(readonly, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
- (void)showDrawer;
- (void)showTutorial;
- (void)updateColors;
- (void)tintColorDidChange;
- (void)adoptTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFontSizes;
- (id)initWithWorkflow:(id)arg1 forNewWorkflow:(BOOL)arg2;

@end

