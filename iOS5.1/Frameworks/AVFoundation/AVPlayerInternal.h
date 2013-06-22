/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAudioSessionMediaPlayerOnly, AVPlayerItem, AVPropertyStorage, AVWeakReference, CALayer, NSArray, NSError, NSMutableDictionary, NSMutableSet;

@interface AVPlayerInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *figPlayer;
    AVPropertyStorage *propertyStorage;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    NSMutableSet *items;
    CALayer *caLayer;
    int status;
    NSError *error;
    struct dispatch_queue_s *stateDispatchQueue;
    NSArray *displaysUsedForPlayback;
    int figPlayerType;
    BOOL waitsUntilItemsAreReadyForInspectionBeforeEnqueuingIntoFigPlayer;
    BOOL needsToCreateFigPlayer;
    BOOL logPerformanceData;
    BOOL reevaluateBackgroundPlayback;
    BOOL hostApplicationInForeground;
    BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
    BOOL iapdExtendedModeIsActive;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
}

@end
