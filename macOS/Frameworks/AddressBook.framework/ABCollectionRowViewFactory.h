//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCardViewStyleProvider, CNUIEditingRules;

@interface ABCollectionRowViewFactory : NSObject
{
    BOOL _shouldFormatURLs;
    BOOL _shouldBuildActionGlyphs;
    ABCardViewStyleProvider *_styleProvider;
    CNUIEditingRules *_editingRules;
}

+ (id)infoButtonNamedImageWrapper;
@property(retain, nonatomic) CNUIEditingRules *editingRules; // @synthesize editingRules=_editingRules;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL shouldBuildActionGlyphs; // @synthesize shouldBuildActionGlyphs=_shouldBuildActionGlyphs;
@property(nonatomic) BOOL shouldFormatURLs; // @synthesize shouldFormatURLs=_shouldFormatURLs;
- (void).cxx_destruct;
- (void)applyHuggingAndCompressionSettingsToValueView:(id)arg1;
- (id)accessibilityTitleForGlyphName:(id)arg1;
- (id)glyphNamedImageWrapperWithName:(id)arg1;
- (void)buildMessagingServiceViewForRowView:(id)arg1;
- (void)buildPreferredNameValueViewForRowView:(id)arg1;
- (void)buildNoteValueViewForRowView:(id)arg1;
- (void)buildURLFormattingValueViewForRowView:(id)arg1;
- (void)buildSimpleLinkedTextFieldForRowView:(id)arg1;
- (void)buildFocusRingViewForRowView:(id)arg1;
- (void)buildValueViewForRowView:(id)arg1;
- (void)buildPrivacyCheckboxForRowView:(id)arg1;
- (void)buildAddRemoveControlsForRowView:(id)arg1;
- (id)buildActionGlyphNamed:(id)arg1;
- (void)buildSuggestedGlyphForRowView:(id)arg1;
- (void)buildActionGlyphsForRowView:(id)arg1;
- (void)buildLabelViewForRowView:(id)arg1;
- (void)buildStackViewForRowView:(id)arg1;
- (void)buildCommonViewsForRowView:(id)arg1;
- (id)faceTimeRowViewForItem:(id)arg1;
- (id)alertToneRowViewForItem:(id)arg1;
- (id)preferredNameRowViewForItem:(id)arg1;
- (id)linkedPeopleRowViewForItem:(id)arg1;
- (id)noteRowViewForItem:(id)arg1;
- (id)postalAddressRowViewForItem:(id)arg1;
- (id)urlRowViewForItem:(id)arg1;
- (id)messagingRowViewForItem:(id)arg1;
- (id)genericRowViewForItem:(id)arg1;
- (id)rowViewForItem:(id)arg1;
- (id)init;

@end

