//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacementUndocked.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>

@class NSString, UIInputViewSetPlacementFloatingShadow, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <_UIGeometryChangeObserver, NSSecureCoding>
{
    float _floatingWidth;
    UIView *_responderToFollow;
    struct CGRect _responderRect;
    struct CGSize _lastSize;
    UIInputViewSetPlacementFloatingShadow *_cachedSecondaryPlacement;
}

+ (id)infoWithPoint:(struct CGPoint)arg1 forOwner:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2 floatingWidth:(float)arg3;
@property(nonatomic) float floatingWidth; // @synthesize floatingWidth=_floatingWidth;
@property(nonatomic) UIResponder *responderToFollow; // @synthesize responderToFollow=_responderToFollow;
- (void).cxx_destruct;
- (_Bool)isFloating;
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;
- (id)expiringPlacement;
- (unsigned int)indexForPurpose:(unsigned int)arg1;
- (id)subPlacements;
- (_Bool)isEqual:(id)arg1;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)applicatorInfoForOwner:(id)arg1;
- (id)currentResponderView;
- (void)setDelegate:(id)arg1;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (void)checkSizeForOwner:(id)arg1;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

