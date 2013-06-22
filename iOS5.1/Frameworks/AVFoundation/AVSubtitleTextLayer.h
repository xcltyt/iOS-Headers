/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@interface AVSubtitleTextLayer : CALayer
{
    struct OpaqueFigSubtitleRenderer *_renderer;
    struct dispatch_queue_s *_serialQueue;
    struct __CFAttributedString *_currentSubtitleSample;
    BOOL _currentSubtitleSampleIsForced;
    BOOL _nonForcedSubtitleDisplayEnabled;
}

@property BOOL nonForcedSubtitleDisplayEnabled; // @synthesize nonForcedSubtitleDisplayEnabled=_nonForcedSubtitleDisplayEnabled;
@property BOOL currentSubtitleSampleIsForced; // @synthesize currentSubtitleSampleIsForced=_currentSubtitleSampleIsForced;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setCurrentSubtitleSample:(struct __CFAttributedString *)arg1;
- (void)setSerialQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
