/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, PLDuetEvent;

@interface PLDuetSnapshotList : NSObject
{
    PLDuetEvent *_lastDuetEvent;
    NSMutableArray *_snapshots;
    unsigned long long _sequenceId;
}

@property unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain) NSMutableArray *snapshots; // @synthesize snapshots=_snapshots;
@property(retain) PLDuetEvent *lastDuetEvent; // @synthesize lastDuetEvent=_lastDuetEvent;
- (id)entryForLastSnapshot;
- (id)entryForSnapshotAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isDuetActive;
- (id)activitiesInRange:(id)arg1;
- (_Bool)carryDuetSnapshotWithTime:(double)arg1;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (void)clearUntilIndex:(unsigned long long)arg1;
- (unsigned long long)nextEventCountWithDuetEvent:(id)arg1;
- (unsigned long long)currentEventCount;
- (id)lastSnapshot;
- (id)copyOfNextEventSetWithDuetEvent:(id)arg1;
- (id)copyOfLastEvents;
- (id)lastEvents;
- (void)resetEventsAtNow;
- (void)newSnapshotWithDuetEvents:(id)arg1 atTime:(double)arg2;
- (void)ADDataforDuetBackgroundUpdate:(id)arg1;
- (void)newSnapshotAtNowWithDuetEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

