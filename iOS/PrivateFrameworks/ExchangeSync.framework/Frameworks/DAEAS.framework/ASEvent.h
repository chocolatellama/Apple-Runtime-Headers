//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASChangedCollectionLeaf.h>

#import <DAEAS/DADataElement-Protocol.h>
#import <DAEAS/NSSecureCoding-Protocol.h>

@class ASEventUID, ASLocation, ASRecurrence, ASTimeZone, NSArray, NSCalendarDate, NSDate, NSNumber, NSString;

@interface ASEvent : ASChangedCollectionLeaf <NSSecureCoding, DADataElement>
{
    _Bool _bodyTruncated;
    _Bool _doNotSendBody;
    _Bool _isOrganizerUpdate;
    _Bool _calculateNextStatusAsIfMeetingRequest;
    _Bool _shouldUpdateStatus;
    _Bool _cachedOrganizerIsSelf;
    _Bool _haveCheckedOrganizerEmail;
    _Bool _isAttendeeUpdateOnly;
    _Bool _isDTStampUpdateOnly;
    int _meetingResponseToEmailAbout;
    void *_calEvent;
    ASTimeZone *_timeZone;
    NSNumber *_allDayEvent;
    NSString *_body;
    NSNumber *_busyStatus;
    NSArray *_categories;
    NSDate *_dTStamp;
    NSDate *_endTime;
    ASLocation *_location;
    NSNumber *_meetingStatus;
    NSString *_organizerEmail;
    NSString *_organizerName;
    NSNumber *_reminderMinsBefore;
    NSNumber *_sensitivity;
    NSString *_subject;
    NSDate *_startTime;
    NSArray *_from;
    NSNumber *_disallowNewTimeProposal;
    NSString *_onlineMeetingExternalLink;
    NSDate *_tombstoneEndTime;
    ASEventUID *_eventUID;
    NSArray *_attendees;
    NSArray *_attendeesPendingDeletion;
    ASRecurrence *_recurrence;
    NSArray *_exceptions;
    NSNumber *_responseRequested;
    NSNumber *_responseType;
    NSDate *_appointmentReplyTime;
    NSArray *_attachments;
    NSArray *_deletedAttachmentsIDs;
    NSString *_responseComment;
    NSDate *_proposedStartTime;
    NSDate *_proposedEndTime;
}

+ (_Bool)supportsSecureCoding;
+ (void)_setFakeDTStampDateForUnitTests:(id)arg1;
+ (id)eventWithCalEvent:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
+ (id)calendarItemExternalRepClasses;
+ (id)attendeeExternalRepClasses;
+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
+ (void)setSystemTimeZoneNameForUnitTests:(id)arg1;
@property(nonatomic) _Bool isDTStampUpdateOnly; // @synthesize isDTStampUpdateOnly=_isDTStampUpdateOnly;
@property(nonatomic) _Bool isAttendeeUpdateOnly; // @synthesize isAttendeeUpdateOnly=_isAttendeeUpdateOnly;
@property(nonatomic) _Bool haveCheckedOrganizerEmail; // @synthesize haveCheckedOrganizerEmail=_haveCheckedOrganizerEmail;
@property(nonatomic) _Bool cachedOrganizerIsSelf; // @synthesize cachedOrganizerIsSelf=_cachedOrganizerIsSelf;
@property(nonatomic) _Bool shouldUpdateStatus; // @synthesize shouldUpdateStatus=_shouldUpdateStatus;
@property(nonatomic) _Bool calculateNextStatusAsIfMeetingRequest; // @synthesize calculateNextStatusAsIfMeetingRequest=_calculateNextStatusAsIfMeetingRequest;
@property(nonatomic) int meetingResponseToEmailAbout; // @synthesize meetingResponseToEmailAbout=_meetingResponseToEmailAbout;
@property(nonatomic) _Bool isOrganizerUpdate; // @synthesize isOrganizerUpdate=_isOrganizerUpdate;
@property(retain, nonatomic) NSDate *proposedEndTime; // @synthesize proposedEndTime=_proposedEndTime;
@property(retain, nonatomic) NSDate *proposedStartTime; // @synthesize proposedStartTime=_proposedStartTime;
@property(retain, nonatomic) NSString *responseComment; // @synthesize responseComment=_responseComment;
@property(retain, nonatomic) NSArray *deletedAttachmentsIDs; // @synthesize deletedAttachmentsIDs=_deletedAttachmentsIDs;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSDate *appointmentReplyTime; // @synthesize appointmentReplyTime=_appointmentReplyTime;
@property(retain, nonatomic) NSNumber *responseType; // @synthesize responseType=_responseType;
@property(retain, nonatomic) NSNumber *responseRequested; // @synthesize responseRequested=_responseRequested;
@property(retain, nonatomic) NSArray *exceptions; // @synthesize exceptions=_exceptions;
@property(retain, nonatomic) ASRecurrence *recurrence; // @synthesize recurrence=_recurrence;
@property(retain, nonatomic) NSArray *attendeesPendingDeletion; // @synthesize attendeesPendingDeletion=_attendeesPendingDeletion;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(nonatomic) _Bool doNotSendBody; // @synthesize doNotSendBody=_doNotSendBody;
@property(retain, nonatomic) ASEventUID *eventUID; // @synthesize eventUID=_eventUID;
@property(retain, nonatomic) NSDate *tombstoneEndTime; // @synthesize tombstoneEndTime=_tombstoneEndTime;
@property(retain, nonatomic) NSString *onlineMeetingExternalLink; // @synthesize onlineMeetingExternalLink=_onlineMeetingExternalLink;
@property(retain, nonatomic) NSNumber *disallowNewTimeProposal; // @synthesize disallowNewTimeProposal=_disallowNewTimeProposal;
@property(retain, nonatomic) NSArray *from; // @synthesize from=_from;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSNumber *sensitivity; // @synthesize sensitivity=_sensitivity;
@property(retain, nonatomic) NSNumber *reminderMinsBefore; // @synthesize reminderMinsBefore=_reminderMinsBefore;
@property(retain, nonatomic) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property(retain, nonatomic) NSString *organizerEmail; // @synthesize organizerEmail=_organizerEmail;
@property(retain, nonatomic) NSNumber *meetingStatus; // @synthesize meetingStatus=_meetingStatus;
@property(retain, nonatomic) ASLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *dTStamp; // @synthesize dTStamp=_dTStamp;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSNumber *busyStatus; // @synthesize busyStatus=_busyStatus;
@property(nonatomic) _Bool bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSNumber *allDayEvent; // @synthesize allDayEvent=_allDayEvent;
@property(retain, nonatomic) ASTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) void *calEvent; // @synthesize calEvent=_calEvent;
- (void).cxx_destruct;
- (id)eventByMergingInEvent:(id)arg1 account:(id)arg2;
- (id)eventByMergingInLosingEvent:(id)arg1 account:(id)arg2;
- (_Bool)isEqualToEvent:(id)arg1;
- (_Bool)_selfIsMoreCorrectThanOtherEvent:(id)arg1 account:(id)arg2;
- (_Bool)deleteFromContainer:(void *)arg1;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
@property(readonly, nonatomic) _Bool isTombstoneEndTimeInFuture;
@property(readonly, nonatomic) _Bool hasOccurrenceInTheFuture;
- (_Bool)purgeAttendeesPendingDeletion;
- (id)fullOrganizerString;
- (_Bool)cachedOrganizerIsSelfWithAccount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *exceptionDate;
@property(readonly, nonatomic) NSString *uidForCalFramework;
@property(readonly, nonatomic) NSCalendarDate *endDateForCalFramework;
@property(readonly, nonatomic) NSCalendarDate *startDateForCalFramework;
- (void)loadClientIDs;
- (_Bool)fillOutMissingExternalIds;
- (_Bool)verifyExternalIds;
- (_Bool)saveServerIDAndUidToCalendar;
- (_Bool)loadCalRecordForAccount:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (_Bool)deleteFromCalendar;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (void)_determineSelfnessWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (void)informExceptionsThatParentIsReadyForAccount:(id)arg1;
- (_Bool)saveDetachedEventsWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (void)_sanitizeLocalExceptionsForAccount:(id)arg1;
- (void)updateAttachmentsFromServerResponse;
- (_Bool)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)setCalEventWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2;
- (_Bool)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2;
- (_Bool)_bailIfNotNewestDataForAccount:(id)arg1;
@property(nonatomic) int meetingResponseForEmail;
- (int)selfAttendeeMeetingResponse;
- (int)meetingResponseForAccount:(id)arg1;
- (int)_meetingResponseShouldUseEmail:(_Bool)arg1 shouldFilterForEmail:(_Bool)arg2;
- (int)_nextAttendeeStatusWithOldStatus:(int)arg1 account:(id)arg2;
- (int)_nextAttendeeStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3;
- (int)_nextEventStatusWithOldStatus:(int)arg1 account:(id)arg2;
- (int)_nextEventStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3;
@property(readonly, nonatomic) int CalCalendarItemStatus;
@property(readonly, nonatomic) int calAttendeePendingStatus;
@property(readonly, nonatomic) int calAttendeeStatus;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCalEvent:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
- (id)init;
- (void)_loadAttributesFromCalEvent:(void *)arg1 forAccount:(id)arg2;
- (void)_loadAttachmentsChangesForEvent:(void *)arg1;
- (id)_attachmentFromAttachmentRef:(void *)arg1;
- (void *)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)arg1;
- (long long)dataclass;
- (id)timeZoneForCalFramework;
- (id)timeZoneNameForCalFramework;
- (id)_transformedEndDateForActiveSync:(id)arg1 isFloating:(_Bool)arg2;
- (id)_transformedStartDateForActiveSync:(id)arg1 isFloating:(_Bool)arg2;
- (id)_transformedEndDateForCalFramework:(id)arg1 startDate:(id)arg2;
- (id)_transformedStartDateForCalFramework:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

