//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNChunkableBuildAnimator.h"
#import "KNFrameBuildAnimator.h"

@class KNMotionBlurAnimationPluginWrapper, NSString;

__attribute__((visibility("hidden")))
@interface KNBuildBouncy : KNAnimationEffect <KNChunkableBuildAnimator, KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)animationsWithContext:(id)arg1;
- (id)p_keyframeAnimationWithTR:(id)arg1 context:(id)arg2 chunks:(unsigned int)arg3 thisBeginTime:(double)arg4 thisDuration:(double)arg5;
- (id)p_hopsArrayWithTexture:(id)arg1 numBounces:(int)arg2 direction:(unsigned int)arg3 duration:(double)arg4 isBuildIn:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

