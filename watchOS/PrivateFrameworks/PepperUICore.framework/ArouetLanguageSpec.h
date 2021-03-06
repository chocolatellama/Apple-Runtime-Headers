//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSLocale, NSString;

@interface ArouetLanguageSpec : NSObject
{
    _Bool __isPasswordEntry;
    _Bool __isNaturalLanguageEntry;
    NSString *_language;
    NSString *_displayLocalizationLanguage;
    NSLocale *_locale;
    NSString *_textContentType;
    int __currentLanguage;
    NSString *__lowercaseScriptCode;
}

+ (id)forcedLanguageForLanguage:(id)arg1 textContentType:(id)arg2;
+ (_Bool)supportsLanguage:(id)arg1 textContentType:(id)arg2;
@property(readonly, nonatomic) _Bool _isNaturalLanguageEntry; // @synthesize _isNaturalLanguageEntry=__isNaturalLanguageEntry;
@property(readonly, nonatomic) _Bool _isPasswordEntry; // @synthesize _isPasswordEntry=__isPasswordEntry;
@property(readonly, nonatomic) NSString *_lowercaseScriptCode; // @synthesize _lowercaseScriptCode=__lowercaseScriptCode;
@property(readonly, nonatomic) int _currentLanguage; // @synthesize _currentLanguage=__currentLanguage;
@property(readonly, copy) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(readonly) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly) NSString *displayLocalizationLanguage; // @synthesize displayLocalizationLanguage=_displayLocalizationLanguage;
@property(readonly) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsFullWordReplacementRange;
@property(readonly, nonatomic) int mecabraInputMethodType;
@property(readonly, nonatomic) _Bool useLMLanguageModel;
@property(readonly, nonatomic) _Bool cycleThroughCandidatesOnDeletion;
@property(readonly, nonatomic) _Bool generateCandidatesForInsertionOnly;
@property(readonly, nonatomic) _Bool candidateListShouldIncludeEmoji;
@property(readonly, nonatomic) _Bool candidateListShouldIncludeSpellCheckVariants;
@property(readonly, nonatomic) _Bool candidateListShouldIncludeLastInsertionCapitalizationVariants;
@property(readonly, nonatomic) _Bool candidateListShouldIncludeWordCapitalizationVariants;
@property(readonly, nonatomic) _Bool supportsMecabraPredictions;
@property(readonly, nonatomic) _Bool supportsLanguageModelPredictions;
- (_Bool)shouldRemovePrecedingAutoSpaceForInsertingCharacter:(unsigned short)arg1;
@property(readonly, nonatomic) _Bool supportsTokenizedSelection;
@property(readonly, nonatomic) _Bool supportsMovingCursor;
@property(readonly, nonatomic) _Bool shouldAutoAppendSpaceAfterLastWordReplacement;
@property(readonly, nonatomic) NSString *textFieldPlaceholderLocalizableKey;
@property(readonly, nonatomic) _Bool shouldUseUnambiguousFontVariant;
@property(readonly, nonatomic) _Bool shouldUseSecureEntry;
@property(readonly, nonatomic) float minimumFontScaleForCandidates;
@property(readonly, nonatomic) NSString *replacementStringForTypedDoubleSpace;
@property(readonly, nonatomic) int gridRenderStyle;
@property(readonly, nonatomic) _Bool provideRecognitionPrefixContext;
@property(readonly, nonatomic) NSCharacterSet *recognitionActiveCharacterSet;
@property(readonly, nonatomic) double maxStrokeCoallescingRecognitionDelay;
@property(readonly, nonatomic) double maxStrokeCoallescingInterstrokeDelay;
@property(readonly, nonatomic) double minRecognitionDuration;
@property(readonly, nonatomic) unsigned int maxRecognitionResultCount;
@property(readonly, nonatomic) int handwritingRecognitionMode;
@property(readonly, nonatomic) int handwritingRecognitionType;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLanguageSpec:(id)arg1;
- (id)description;
- (id)initWithLanguage:(id)arg1 textContentType:(id)arg2;
- (id)initWithLanguage:(id)arg1;
- (id)init;

@end

