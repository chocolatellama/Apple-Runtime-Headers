//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPreviewView : UIView
{
    UIView *_previewView;
    UIView *_thumbnailContentView;
    CAShapeLayer *_clippingLayer;
}

+ (id)pickerPreviewWithFrame:(struct CGRect)arg1 forItem:(id)arg2;
@property(retain, nonatomic) CAShapeLayer *clippingLayer; // @synthesize clippingLayer=_clippingLayer;
@property(retain, nonatomic) UIView *thumbnailContentView; // @synthesize thumbnailContentView=_thumbnailContentView;
@property(readonly, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)updatePreviewWithItem:(id)arg1;
- (void)setupPreview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

