//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/BSDescriptionProviding-Protocol.h>

@class NSDate, NSString, UIViewController;

@interface CSLStuckPresentationItem : NSObject <BSDescriptionProviding>
{
    UIViewController *_viewController;
    NSDate *_creationDate;
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

