//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactWithNamePredicate : CNPredicate
{
    NSString *_name;
    unsigned int _options;
}

+ (id)descriptionForOptions:(unsigned int)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned int)arg2;
- (id)initWithName:(id)arg1;

@end

