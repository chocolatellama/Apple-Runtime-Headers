//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject
{
    _Bool _enabled;
    TITextInputTraits *_textInputTraits;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
- (void).cxx_destruct;
- (void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id *)arg3 outAfterString:(id *)arg4;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2;
- (void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long *)arg2 outAfterLength:(unsigned long long *)arg3;
- (id)initWithTextInputTraits:(id)arg1;

@end

