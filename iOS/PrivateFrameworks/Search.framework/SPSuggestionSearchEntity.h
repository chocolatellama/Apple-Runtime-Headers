//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPSearchEntity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPSuggestionSearchEntity : SPSearchEntity
{
    NSString *_queryString;
    NSString *_tokenText;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *tokenText; // @synthesize tokenText=_tokenText;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

