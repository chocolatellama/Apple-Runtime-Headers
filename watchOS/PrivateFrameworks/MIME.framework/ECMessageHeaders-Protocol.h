//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/NSCopying-Protocol.h>
#import <MIME/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ECMessageHeaders <NSCopying, NSObject>
- (NSArray *)listUnsubscribeCommands;
- (NSString *)firstSenderAddress;
- (NSString *)firstAddressForKey:(NSString *)arg1;
- (id)firstHeaderForKey:(NSString *)arg1;
- (NSArray *)headersForKey:(NSString *)arg1;
- (NSArray *)allHeaderKeys;
@end

