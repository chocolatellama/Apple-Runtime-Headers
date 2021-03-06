//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMHome, HMRoom, NSString;
@protocol HFHomeKitObject;

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol>
{
    HMRoom *_room;
    HMHome *_home;
}

@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)togglePowerState;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

