//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMediaDataRequester, CALayer, NSObject<OS_dispatch_queue>, NSString;

@interface AVSampleBufferDisplayLayerInternal : NSObject
{
    CALayer *contentLayer;
    struct OpaqueFigVideoQueue *videoQueue;
    BOOL controlTimebaseSetByUser;
    BOOL hasEnqueuedSamples;
    NSString *videoGravity;
    struct CGSize presentationSize;
    BOOL isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    BOOL aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> *serialQueue;
}

@end
