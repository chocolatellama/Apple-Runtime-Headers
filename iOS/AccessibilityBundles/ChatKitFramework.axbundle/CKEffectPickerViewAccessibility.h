//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__CKEffectPickerViewAccessibility_super.h"

@interface CKEffectPickerViewAccessibility : __CKEffectPickerViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_axUpdateCloseButton;
- (void)effectTypeDidChange:(id)arg1;
- (void)cancelImpactSelection;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4 color:(BOOL)arg5;
- (void)_axUpdateScrollView;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)accessibilityElements;
- (void)_setAXFullScreenEffectElement:(id)arg1;
- (id)_axFullScreenEffectElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (_Bool)accessibilityViewIsModal;

@end

