/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCH3DChartTitlePositioner, TSCH3DLabelResources, TSCHChartInfo;

// Not exported
@interface TSCH3DChartTitleProperties : NSObject
{
    TSCHChartInfo *mInfo;
    TSCH3DLabelResources *mLabels;
    _Bool mHidden;
    TSCH3DChartTitlePositioner *mCachedPositioner;
}

+ (id)propertiesWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2;
@property(retain, nonatomic) TSCH3DChartTitlePositioner *cachedPositioner; // @synthesize cachedPositioner=mCachedPositioner;
@property(nonatomic) _Bool hidden; // @synthesize hidden=mHidden;
@property(readonly, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mInfo;
@property(readonly, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=mLabels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2;

@end
