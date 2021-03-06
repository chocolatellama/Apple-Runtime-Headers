//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/EKEventEditViewDelegate-Protocol.h>
#import <Silex/SXCalendarPresenter-Protocol.h>

@class NSString, SXEventStoreProvider;
@protocol SXViewControllerPresenting;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter>
{
    id <SXViewControllerPresenting> _viewControllerPresenting;
    SXEventStoreProvider *_eventStoreProvider;
}

@property(readonly, nonatomic) SXEventStoreProvider *eventStoreProvider; // @synthesize eventStoreProvider=_eventStoreProvider;
@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)presentCalendarEvent:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

