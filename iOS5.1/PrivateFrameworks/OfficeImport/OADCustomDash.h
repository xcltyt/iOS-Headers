/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADDash.h>

@class NSMutableArray;

@interface OADCustomDash : OADDash
{
    NSMutableArray *mStops;
    unsigned int mAreStopsOverridden:1;
}

+ (id)defaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (unsigned int)stopCount;
- (float)dashAtIndex:(unsigned int)arg1;
- (float)spaceAtIndex:(unsigned int)arg1;
- (void)addStopWithDash:(float)arg1 space:(float)arg2;
- (id)stops;
- (void)setStops:(id)arg1;
- (BOOL)areStopsOverridden;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

