/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DLayerCacheLogic.h>

// Not exported
@interface TSCH3DCacheTrackingLayerLogic : TSCH3DLayerCacheLogic
{
    _Bool mValid;
    _Bool mHighQuality;
}

- (id)description;
- (void)setContentsIsValid:(_Bool)arg1 highQuality:(_Bool)arg2;
- (_Bool)contentsIsHighQuality;
- (_Bool)contentsIsValid;
- (id)initWithParent:(id)arg1;

@end
