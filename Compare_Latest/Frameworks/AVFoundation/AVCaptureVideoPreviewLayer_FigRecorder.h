//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AVCaptureConnection_FigRecorder, AVCaptureSession_FigRecorder, AVCaptureVideoPreviewLayerInternal_FigRecorder, NSString;

@interface AVCaptureVideoPreviewLayer_FigRecorder : CALayer
{
    AVCaptureVideoPreviewLayerInternal_FigRecorder *_internal;
}

+ (id)layerWithSession:(id)arg1;
+ (void)initialize;
- (void)_updateCaptureDeviceTransform;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)_input;
- (struct CGRect)rectForMetadataObject:(id)arg1;
- (struct CGRect)rectForCaptureDeviceFaceRect:(struct CGRect)arg1;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (id)liveConnections;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (id)notReadyError;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)connectionMediaTypes;
- (id)connections;
- (id)activeConnections;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (BOOL)isChromaNoiseReductionSupported;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isPaused;
@property(nonatomic, getter=isMirrored) BOOL mirrored;
- (BOOL)_isMirrored;
@property(nonatomic) BOOL automaticallyAdjustsMirroring;
- (BOOL)_automaticallyAdjustsMirroring;
@property(readonly, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
@property(nonatomic) int orientation;
- (int)_orientation;
@property(readonly, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
@property(copy) NSString *videoGravity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateInternalStateForCaptureOptions:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)subLayer;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
@property(retain, nonatomic) AVCaptureSession_FigRecorder *session;
@property(readonly, nonatomic) AVCaptureConnection_FigRecorder *connection;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (float)previewRotationDegrees;
- (id)initWithSession:(id)arg1;
- (id)init;
- (void)centerSublayer;
- (BOOL)isKindOfClass:(Class)arg1;

@end

