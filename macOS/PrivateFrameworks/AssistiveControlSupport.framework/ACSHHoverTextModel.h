//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface ACSHHoverTextModel : NSObject
{
    NSAttributedString *_attributedString;
    struct _NSRange _selectionRange;
}

@property(nonatomic) struct _NSRange selectionRange; // @synthesize selectionRange=_selectionRange;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)attributedStringForFontSize:(double)arg1 foregroundColor:(id)arg2;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end

