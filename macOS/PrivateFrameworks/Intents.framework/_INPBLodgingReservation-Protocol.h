//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@protocol _INPBLodgingReservation <NSObject>
@property(readonly, nonatomic) BOOL hasReservationDuration;
@property(retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property(readonly, nonatomic) BOOL hasReservation;
@property(retain, nonatomic) _INPBReservation *reservation;
@property(readonly, nonatomic) BOOL hasNumberOfChildren;
@property(retain, nonatomic) _INPBInteger *numberOfChildren;
@property(readonly, nonatomic) BOOL hasNumberOfAdults;
@property(retain, nonatomic) _INPBInteger *numberOfAdults;
@property(readonly, nonatomic) BOOL hasLodgingBusinessLocation;
@property(retain, nonatomic) _INPBLocation *lodgingBusinessLocation;
@end

