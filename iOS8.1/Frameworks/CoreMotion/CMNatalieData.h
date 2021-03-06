//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate, NSNumber;

@interface CMNatalieData : CMLogItem
{
    double fStartDate;
    double fNatalies;
    int fSession;
    int fRecordId;
}

- (id)description;
@property(readonly, nonatomic) int recordId;
@property(readonly, nonatomic) int session;
@property(readonly, nonatomic) NSNumber *natalies;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 natalies:(double)arg2 session:(int)arg3 recordId:(int)arg4 timestamp:(double)arg5;

@end

