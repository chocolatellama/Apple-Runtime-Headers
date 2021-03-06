//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TPSCellularNetworkItem : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_localizedName;
}

@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToCellularNetworkItem:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 localizedName:(id)arg3;
- (id)init;

@end

